#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    //int* answer = (int*)malloc(1);
    int* answer;
    answer = (int*)malloc(sizeof(int) * 3);
    int cnt = 0;
    int cnt2 = 0;
    for (int i = 0; i < lottos_len; i++) {
        for (int j = 0; j < win_nums_len; j++) {
            if (lottos[i] == win_nums[j]) {
                cnt += 1;
                break;
            }
            else if (lottos[i] == 0) {
                cnt2 += 1;
                break;
            }
        }
        answer[0] = rank(cnt + cnt2);
        answer[1] = rank(cnt);
        answer[2] = '\n';
    }
    return answer;
}
int rank(int a) {
    if (a == 0)  return 6;
    else if (a == 1) return 6;
    else if (a == 2) return 5;
    else if (a == 3) return 4;
    else if (a == 4) return 3;
    else if (a == 5) return 2;
    else if (a == 6) return 1;

}