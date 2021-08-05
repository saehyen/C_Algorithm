#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    if (sqrt(n) - (int)sqrt(n) != 0) answer = -1;
    else                        answer = pow(sqrt(n) + 1, 2);
    return answer;
}