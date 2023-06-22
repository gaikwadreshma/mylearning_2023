#include <ctype.h>

void toggleString(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char str[] = "Hello World!";
    
    printf("Original string: %s\n", str);
    
    toggleString(str);
    
    printf("Toggled string: %s\n", str);
    
    return 0;
}


