#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    //char* answer = (char*)malloc(sizeof(char)*n);
    char* answer = malloc(sizeof(char) * (n * 3) + 1);
    strcpy(answer, "");
    for (int i = 0; i < n; i++) {
        // 박추가
        if (i % 2 == 1) {
            strcat(answer, "박");
        }
        // 수추가
        else {
            strcat(answer, "수");
        }
    }
    return answer;

}

