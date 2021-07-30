#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* table[] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
};

int solution(const char* s)
{
    int ret = 0;
    char ch = 0;
    int i = 0;
    while ((ch = *s)) {
        if ('0' <= ch && ch <= '9') {
            ret *= 10;
            ret += ch - '0';
        }
        else {
            for (i = 0; i < 10; ++i) {
                if (strncmp(table[i], s, strlen(table[i])) == 0) {
                    ret *= 10;
                    ret += i;
                    break;
                }
            }
        }

        ++s;
    }

    return ret;
}