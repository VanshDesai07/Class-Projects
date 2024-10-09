// Q-1)

#include <stdio.h>

int main() {
    int rows = 5;  

    for (int i = 1; i <= rows; i++) {
        int num = 41; 

        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  
        }

        printf("\n");
    }

    return 0;
}

// Q-2)


#include <stdio.h>

int main() {
    int rows = 4;  
    int num = 11;  

    for (int i = 1; i <= rows; i++) {
      
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  
        }
      
        printf("\n");
    }

    return 0;
}

// Q-3)

#include <stdio.h>

int main() {
    int rows = 5;  
    
    for (int i = rows; i >= 1; i--) {
       
        for (int space = 1; space < i; space++) {
            printf("  ");  
        }

        for (int j = i; j <= rows; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}


// Q-4)


#include <stdio.h>

int main() {
    int rows = 5;  

    
    for (int i = rows; i >= 1; i--) {
        
        for (int space = 0; space < rows - i; space++) {
            printf("  ");  
        }

        
        for (int j = 1; j <= i; j++) {
            
            if (j % 2 == 1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }

        
        printf("\n");
    }

    return 0;
}

// Q-6)

#include <stdio.h>

int main() {
    int n = 5;  

   
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        
        for (int space = 1; space <= 2 * (n - i); space++) {
            printf("  ");
        }

        
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

// Q-7)

#include <stdio.h>

int main() {
    int height = 7;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == 0 || (i == 0 || i == height / 2) && j < 4 || (i < height / 2 && j == 4)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


