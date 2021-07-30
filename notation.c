#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i = 0, j = 0;
    int temp, arr[1000];
    int answer = 0;
    // n을 나눈나머지값을 배열에 넣기
    while (n) {
        arr[i++] = n % 3;
        n /= 3;
    }
    // 3을 곱한수만큼 더해서 정답에 넣기
    while (j < i)
        answer = 3 * answer + arr[j++];
    return answer;
}