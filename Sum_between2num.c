#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int temp = 0;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    while (a != b + 1) {
        answer += a;
        a++;
    }
    return answer;
}