//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if(name[len-1] == '\n') name[len-1] = '\0';

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ')
            lastSpace = i;
    }

    i = 0;
    while(i < lastSpace) {
        if(name[i] != ' ' && (i == 0 || name[i-1] == ' '))
            printf("%c.", name[i]);
        i++;
    }

    printf(" %s", &name[lastSpace + 1]);

    return 0;
}
