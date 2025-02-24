#include <string>
#include <vector>

using namespace std;

int answer = 0;

void DFS(vector<int>& number, int idx, int num,int target)
{
    if (number.size() == idx)
    {
        if (num == target)
            answer++;
        
        return;
    }
    
    DFS(number, idx + 1, num + number[idx], target);
    DFS(number, idx + 1, num - number[idx], target);
}

int solution(vector<int> numbers, int target) {
 
    DFS(numbers, 0, 0, target);
    return answer;
}