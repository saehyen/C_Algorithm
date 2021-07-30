#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer;
    int length = strlen(s);
    if (length % 2) // 홀수라면 
    {
        //동적할당해서 return 하는 것
        answer = (char*)malloc(sizeof(char) * 2);
        answer[0] = s[length / 2];
        //마지막에 널문자 넣기
        answer[1] = '\0';
    }
    else //짝수라면
    {
        //동적할당해서 return 하는 것
        answer = (char*)malloc(sizeof(char) * 3);
        answer[0] = s[length / 2 - 1];
        answer[1] = s[length / 2];
        //마지막에 널문자 넣기
        answer[2] = '\0';
    }
    return answer;

}