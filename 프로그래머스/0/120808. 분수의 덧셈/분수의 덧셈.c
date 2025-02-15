#include <stdio.h>
#include <stdlib.h>

// 최대공약수(GCD)를 구하는 함수
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // 두 분수의 분모 계산 (공통 분모)
    int denom3 = denom1 * denom2;
    
    // 분자 계산
    int numer1_2 = numer1 * denom2;
    int numer2_2 = numer2 * denom1;
    int numer3 = numer1_2 + numer2_2;
    
    // 기약분수로 만들기 위해 분자와 분모의 최대공약수 계산
    int gcd_val = gcd(numer3, denom3);
    numer3 /= gcd_val;
    denom3 /= gcd_val;
    
    // 결과를 저장할 동적 배열 할당
    int* answer = (int*)malloc(2 * sizeof(int)); // 2개의 정수를 저장할 크기
    answer[0] = numer3; // 분자
    answer[1] = denom3; // 분모

    return answer;
}