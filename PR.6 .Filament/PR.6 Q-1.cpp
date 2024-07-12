#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 0;
    
    printf("Enter any string: ");
    scanf("%s", str);
    
    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("The given string is not a Palindrome.\n");
    } else {
        printf("The given string is a Palindrome.\n");
    }

    return 0;
}
