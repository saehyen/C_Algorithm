#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer;
    int length = strlen(s);
    if (length % 2) // Ȧ����� 
    {
        //�����Ҵ��ؼ� return �ϴ� ��
        answer = (char*)malloc(sizeof(char) * 2);
        answer[0] = s[length / 2];
        //�������� �ι��� �ֱ�
        answer[1] = '\0';
    }
    else //¦�����
    {
        //�����Ҵ��ؼ� return �ϴ� ��
        answer = (char*)malloc(sizeof(char) * 3);
        answer[0] = s[length / 2 - 1];
        answer[1] = s[length / 2];
        //�������� �ι��� �ֱ�
        answer[2] = '\0';
    }
    return answer;

}