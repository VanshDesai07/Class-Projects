
// Q-1) 


#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int isPalindrome(const char *str) {
    int length = stringLength(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}

int main() {
    char str[100]; 
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    int length = stringLength(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


// Q-2)


#include <stdio.h>

#define MAX_CHAR 256 


int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


void countFrequency(const char *str) {
    int frequency[MAX_CHAR] = {0}; 
    int length = stringLength(str);

    
    for (int i = 0; i < length; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    
    printf("Frequency of each letter:\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (frequency[i] > 0) {
            printf("%c => %d\n", i, frequency[i]);
        }
    }
}

int main() {
    char str[100]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = stringLength(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    countFrequency(str);

    return 0;
}