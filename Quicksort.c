#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 비교함수, 첫번째가 더크면 양수, 둘째가 더크면 음수 -> 오름차순(내림차순은 반대로)
int compare(const void* fir, const void* sec) {
    return  -strcmp((char*)fir, (char*)sec);
}
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(s) * sizeof(char));
    // 복사하기 전 선언
    char temp[strlen(s)];
    // temp에 문자열 복사
    strcpy(temp, s);
    // qsort양식(정렬할것,정렬할길이,정렬단위,compare)
    qsort(temp, strlen(s), sizeof(char), compare);
    strcpy(answer, temp);
    return answer;
}