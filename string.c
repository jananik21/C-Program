#include <stdio.h>
#include <string.h>
int countCharacters(char *words, int wordsSize, char *chars) {
    int charCounts[26] = {0};
    int i,j;
    int totalLength = 0;
    for (i = 0; i < strlen(chars); i++) {
        charCounts[chars[i] - 'a']++;
    }
    for (i = 0; i < wordsSize; i++) {
        int wordCounts[26] = {0};
        int isGood = 1;
        for (j = 0; j < strlen(words[i]); j++) {
            wordCounts[words[i][j] - 'a']++;
        }

        for (j = 0; j < 26; j++) {
            if (wordCounts[j] > charCounts[j]) {
                isGood = 0;
                break;
            }
        }
        if (isGood)
        {
            totalLength += strlen(words[i]);
        }
    }

    return totalLength;
}
int main() {
    char *words[] = {"cat", "bt", "hat", "tree"};
    int wordsSize = 4;
    char *chars = "atach";
    int result = countCharacters(words, wordsSize, chars);
    printf("%d\n", result);  // Output: 6
    return 0;
}
