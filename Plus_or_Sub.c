#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len�� �迭 absolutes�� �����Դϴ�.
// signs_len�� �迭 signs�� �����Դϴ�.

int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;


    for (int i = 0; i < absolutes_len; i++) {
        if (signs[i] == true) answer += absolutes[i];
        else answer -= absolutes[i];
    }
    return answer;
}