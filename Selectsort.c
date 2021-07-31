#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define swap(x, y, temp)    ((temp=x), (x=y), (y=temp))

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    int n, max, i, j, temp;
    n = strlen(s);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(n * sizeof(char) + 1);
    strcpy(answer, s);
    for (i = 0; i < n - 1; i++) {
        max = i;
        for (j = i + 1; j < n; j++) {
            if (answer[max] < answer[j]) max = j;
        }
        if (max != i)  swap(answer[max], answer[i], temp);
    }
    return answer;
}