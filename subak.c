#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    //char* answer = (char*)malloc(sizeof(char)*n);
    char answer[10000] = "";
    for (int i = 0; i < n; i++) {
        // ���߰�
        if (i % 2 == 1) {
            strcat(answer, "��");
        }
        // ���߰�
        else {
            strcat(answer, "��");
        }
    }
    printf("%c", answer[0]);
    return answer;
}