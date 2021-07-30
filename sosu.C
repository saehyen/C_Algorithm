#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int isitsosu(int num) {
    for (int i = 2; i < num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int temp;
    for (int i = 0; i < nums_len - 2; i++) {
        for (int j = i + 1; j < nums_len - 1; j++) {
            for (int k = j + 1; k < nums_len; k++) {
                temp = nums[i] + nums[j] + nums[k];
                if (isitsosu(temp) == 1) {
                    answer++;
                }
            }
        }
    }

    return answer;
}