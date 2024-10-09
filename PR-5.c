// Q-1) 

#include <stdio.h>

int main() {
    int n; 

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

   
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Negative elements in the array are:\n");
    int foundNegative = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
            foundNegative = 1; 
        }
    }

    if (!foundNegative) {
        printf("No negative elements found.");
    }

    printf("\n"); 

    return 0;
}



// Q-2

#include <stdio.h>

#define ROWS 3
#define COLS 3   

int main() {
    int array[ROWS][COLS];  
    int maxElement;        
    
    printf("Enter elements of the 2D array (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    
    maxElement = array[0][0];

    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
            }
        }
    }

    
    printf("The largest element in the array is: %d\n", maxElement);

    return 0;
}

//  Q-3)

#include <stdio.h>

#define ROWS 3   
#define COLS 3   

int main() {
    int array[ROWS][COLS];     
    int transpose[COLS][ROWS]; 

    
    printf("Enter elements of the 2D array (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transpose[j][i] = array[i][j]; 
        }
    }

    
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Q-4)


#include <stdio.h>

#define ROWS 3   
#define COLS 3   

int main() {
    int array[ROWS][COLS];  

    printf("Enter elements of the 2D array (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nSum of each row:\n");
    for (int i = 0; i < ROWS; i++) {
        int rowSum = 0;
        for (int j = 0; j < COLS; j++) {
            rowSum += array[i][j];  
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }

    
    printf("\nSum of each column:\n");
    for (int j = 0; j < COLS; j++) {
        int colSum = 0;
        for (int i = 0; i < ROWS; i++) {
            colSum += array[i][j];  
        }
        printf("Sum of column %d: %d\n", j + 1, colSum);
    }

    return 0;
}

