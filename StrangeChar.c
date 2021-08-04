#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(const char* s) {
    int i = 0, index = 0;
    char* answer = (char*)malloc(sizeof(s[0]) * strlen(s) + 1);
    strcpy(answer, s);
    while (answer[index] != '\0') {
        if (answer[index] == ' ')   i = -1;
        else if ((i % 2 == 0) && (answer[index] > 96))    answer[index] -= 32;
        else if ((i % 2 == 1) && (answer[index] < 91))    answer[index] += 32;
        i++;
        index++;
    }
    return answer;
}