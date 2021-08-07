#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int y = x;
    int t = 0;
    // t = 자리수의 합
    while (y != 0) {
        t += y % 10;
        y /= 10;
    }
    bool answer = true;
    if (x % t != 0) answer = false;
    return answer;
}