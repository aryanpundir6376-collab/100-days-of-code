//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];
    int len1, len2;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 != len2) {
        printf("Not Rotation");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
