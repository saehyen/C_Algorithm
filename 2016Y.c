#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(int a, int b) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.

    int table[] = {
        31,29,31,30,31,30,31,31,30,31,30,31 };
    int num1 = 0;
    // �޸�ŭ ���ϱ�
    for (int i = 0; i < a - 1; i++) {
        num1 += table[i];
    }
    // �ϼ���ŭ ���ϱ�
    int num2 = (num1 + b) % 7;
    char* answer;
    answer = (char*)malloc(sizeof(char) * 3);
    if (num2 == 1) strcpy(answer, "FRI");
    else if (num2 == 2) strcpy(answer, "SAT");
    else if (num2 == 3) strcpy(answer, "SUN");
    else if (num2 == 4) strcpy(answer, "MON");
    else if (num2 == 5) strcpy(answer, "TUE");
    else if (num2 == 6) strcpy(answer, "WED");
    else if (num2 == 0) strcpy(answer, "THU");
    else strcpy(answer, "Error");
    return answer;
}