#include <stdio.h>

int main() {
    char name[100];
    int i = 0, firstPrinted = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c.", name[0]);
        firstPrinted = 1;
    }

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\n') {
            if (firstPrinted)
                printf("%c.", name[i+1]);
            else {
                printf("%c.", name[i+1]);
                firstPrinted = 1;
            }
        }
        i++;
    }

    return 0;
}
