#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    //char* answer = (char*)malloc(sizeof(char)*n);
    char* answer = malloc(sizeof(char) * (n * 3) + 1);
    strcpy(answer, "");
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
    return answer;

}

