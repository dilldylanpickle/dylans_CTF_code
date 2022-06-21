#include <stdio.h>
#include <string.h>

int main () {

    int index;
    char storedpass[] = "5tr0vZBrX:xTyR-P!"
    char realpass[18];

    while (index < strlen(storedpass)) {
        char temp = storedpass[index] ^ index;
        realpass[index] = temp;
        index++;
    }

    realpass[index] = '\0';
    printf("%s\n", realpass);

    return 0;
}