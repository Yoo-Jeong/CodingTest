#include <queue>

using namespace std;

int dy[] = { -1, 0, 1,  0 };
int dx[] = {  0, 1, 0, -1 };

int BFS(vector<vector<int>>& maps) {
    queue<pair<int, int>> q;        // 탐색을 위한 큐
    int iX = maps.size();           // 맵의 행 크기
    int iY = maps[0].size();        // 맵의 열 크기

    vector<vector<int>> table(iX, vector<int>(iY, 0)); // 방문한 위치와 거리를 기록하는 테이블
    q.push({ 0,0 }); // 시작 위치 큐에 삽입
    table[0][0] = 1; // 시작 위치 거리를 1로 초기화

    while (q.size()) {
        pair<int, int> current = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) { // 상, 우, 하, 좌 방향으로 탐색
            int ny = current.first + dy[i];
            int nx = current.second + dx[i];
            // 맵 범위를 벗어나거나, 벽을 만나거나, 이미 방문한 위치는 무시
            if (ny < 0 || nx < 0 || ny >= iX || nx >= iY || maps[ny][nx] == 0 || table[ny][nx])
                continue;
            table[ny][nx] = table[current.first][current.second] + 1; // 거리 업데이트
            q.push({ ny,nx }); // 새 위치를 큐에 삽입
        }
    }
    // 목표 지점에 도달한 경우 거리 반환, 그렇지 않으면 -1 반환
    return table[iX - 1][iY - 1] > 0 ? table[iX - 1][iY - 1] : -1;
}

int solution(vector<vector<int> > maps)
{
    int answer = BFS(maps);
    return answer;
}