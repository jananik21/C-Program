#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool canBeEqual(char *s, char *goal) {
    int s_len = strlen(s);
    int goal_len = strlen(goal);

    if (s_len != goal_len) {
        return false;
    }

    int diff_count = 0;
    int s_freq[26] = {0};
    int goal_freq[26] = {0};
    int i;

    for (i = 0; i < s_len; i++) {
        s_freq[s[i] - 'a']++;
        goal_freq[goal[i] - 'a']++;
        if (s[i] != goal[i]) {
            diff_count++;
        }
    }

    if (diff_count == 2) {
        for (i = 0; i < 26; i++) {
            if (s_freq[i] != goal_freq[i]) {
                return false;
            }
        }
        return true;
    } else {
        return diff_count == 0;
    }
}

int main() {
    char s[] = "ab";
    char goal[] = "ba";
    bool result = canBeEqual(s, goal);
    printf("%s\n", result ? "true" : "false");

    char s2[] = "ab";
    char goal2[] = "ab";
    bool result2 = canBeEqual(s2, goal2);
    printf("%s\n", result2 ? "true" : "false");

    char s3[] = "aa";
    char goal3[] = "aa";
    bool result3 = canBeEqual(s3, goal3);
    printf("%s\n", result3 ? "true" : "false");

    return 0;
}
