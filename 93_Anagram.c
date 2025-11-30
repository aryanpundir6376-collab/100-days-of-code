//Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int f[26]={0}, i=0;
    
    printf("Enter first string\n");
    scanf("%s", s1);
    printf("Enter second string\n");
    scanf("%s", s2);

    while (s1[i] != '\0') {
        f[s1[i]-'a']++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0') {
        f[s2[i]-'a']--;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (f[i] != 0) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
