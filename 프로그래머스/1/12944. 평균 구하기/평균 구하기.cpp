#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    // 1.arr의 모든 원소를 순회하며 더한다.
    int iCount = arr.size();
    for(int i = 0; i < iCount; ++i)
        {
            answer += arr[i];
        }
    
    // 2.arr의 원소 갯수만큼 나눈다.
    answer = answer / iCount;

    return answer;
}