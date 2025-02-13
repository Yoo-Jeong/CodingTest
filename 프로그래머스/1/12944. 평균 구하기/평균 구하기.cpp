#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    // 1.arr의 모든 원소를 순회하며 더한다.
    answer = accumulate(arr.begin(), arr.end(), 0);
    
    // 2.arr의 원소 갯수만큼 나눈다.
    return answer / arr.size();
}