#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

bool isScramble(char* s1, char* s2) {
    int len = strlen(s1);
    int i;
    if (len != strlen(s2)) {
        return false;
    }
    if (strcmp(s1, s2) == 0) {
        return true;
    }
    char tmp1[len+1], tmp2[len+1];
    strcpy(tmp1, s1);
    strcpy(tmp2, s2);
    int cnt[26] = {0};
    for (i = 0; i < len; i++) {
        cnt[s1[i]-'a']++;
        cnt[s2[i]-'a']--;
    }
    for (i = 0; i < 26; i++) {
        if (cnt[i] != 0) {
            return false;
        }
    }
    srand(time(NULL));
    for (i = 1; i < len; i++) {
        if ((isScramble(tmp1, tmp2+i) && isScramble(tmp1+i, tmp2)) || (isScramble(tmp1, tmp2+len-i) && isScramble(tmp1+len-i, tmp2))) {
            return true;
        }
    }
    return false;
}

int main() {
    char s1[10],s2[10];

    scanf("%c %c",&s1,s2);
    if (isScramble(s1, s2)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
