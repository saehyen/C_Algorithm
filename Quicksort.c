#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// ���Լ�, ù��°�� ��ũ�� ���, ��°�� ��ũ�� ���� -> ��������(���������� �ݴ��)
int compare(const void* fir, const void* sec) {
    return  -strcmp((char*)fir, (char*)sec);
}
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(strlen(s) * sizeof(char));
    // �����ϱ� �� ����
    char temp[strlen(s)];
    // temp�� ���ڿ� ����
    strcpy(temp, s);
    // qsort���(�����Ұ�,�����ұ���,���Ĵ���,compare)
    qsort(temp, strlen(s), sizeof(char), compare);
    strcpy(answer, temp);
    return answer;
}