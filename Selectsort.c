#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define swap(x, y, temp)    ((temp=x), (x=y), (y=temp))

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    int n, max, i, j, temp;
    n = strlen(s);
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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