// Q-1

#include <stdio.h>

int stringLength(char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++; 
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = stringLength(str);

    if (str[length - 1] == '\n') {
        length--;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}

// Q-2

#include <stdio.h>

void findCubes(int *arr, int rows, int cols) {
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           
            int cube = (*(arr + i * cols + j)) * (*(arr + i * cols + j)) * (*(arr + i * cols + j));
            printf("Cube of element at [%d][%d] is: %d\n", i, j, cube);
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes((int *)arr, rows, cols);

    return 0;
}



