//Program to reverse a string
#include <stdio.h>

int main() {
    char String[100];
    
    printf("Enter a string: ");
    gets(String);

    int length = 0;
    while (String[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        char temp = String[i];
        String[i] = String[length - i - 1];
        String[length - i - 1] = temp;
    }

    printf("Reversed String: %s\n", String);

    return 0;
}
