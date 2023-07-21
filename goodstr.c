#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    char *word;
    struct Node *next;
};
sint countCharacters(char **words, int wordsSize, char *chars) {
    int charCounts[26] = {0};
    int i,j;
    int totalLength = 0;
    for (i = 0; i < strlen(chars); i++) {
        charCounts[chars[i] - 'a']++;
    }
    struct Node *head = NULL;
    struct Node *tail = NULL;
    for ( i = 0; i < wordsSize; i++) {
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
        if (isGood) {
            struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
            newNode->word = words[i];
            newNode->ne xt = NULL;
            if (head == NULL) {
                head = newNode;
                tail = newNode;
            } else
            {
                tail->next = newNode;
                tail = newNode;
            }
            totalLength += strlen(words[i]);
        }
    struct Node *current = head;
    while (current != NULL)
    {
        struct Node *temp = current;
        current = current->next;
        free(temp);
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
}
