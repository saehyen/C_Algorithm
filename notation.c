#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i = 0, j = 0;
    int temp, arr[1000];
    int answer = 0;
    // n�� �������������� �迭�� �ֱ�
    while (n) {
        arr[i++] = n % 3;
        n /= 3;
    }
    // 3�� ���Ѽ���ŭ ���ؼ� ���信 �ֱ�
    while (j < i)
        answer = 3 * answer + arr[j++];
    return answer;
}