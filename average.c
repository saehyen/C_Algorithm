#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len�� �迭 arr�� �����Դϴ�.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    for (int i = 0; i < arr_len; i++) {
        answer += arr[i];
    }
    return answer / arr_len;
}