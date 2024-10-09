1)

#include <stdio.h>
int main() {
    char ch = 'a';  

    do {

    printf(" %c ", ch);
        
       
    ch = ch + 4;
        
    } while (ch <= 'z');  
    
    return 0;
}

2)

#include <stdio.h>
int main() 
{
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        count = 1;
    } else {
        
        while (number != 0) {
            number = number / 10;  
            count++;                
        }
    }

    printf("Total number of digits: %d\n", count);

    return 0;
}

3)

#include <stdio.h>

int main() {
    int number, first_digit, last_digit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    last_digit = number % 10;

    first_digit = number;
    while (first_digit >= 10) {
        first_digit /= 10;  
    }

    sum = first_digit + last_digit;

    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}