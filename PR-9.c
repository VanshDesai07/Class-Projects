// Q-1

#include <stdio.h>

int main() {
    // File pointers for even and odd numbers
    FILE *evenFile, *oddFile;

    // Open the files for writing
    evenFile = fopen("even_numbers.txt", "w");
    oddFile = fopen("odd_numbers.txt", "w");

    // Check if files opened successfully
    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files!\n");
        return 1;  // Exit the program if file opening fails
    }

    // Loop through numbers from 50 to 70
    for (int i = 50; i <= 70; i++) {
        // Check if the number is even or odd and write to respective file
        if (i % 2 == 0) {
            fprintf(evenFile, "%d\n", i);  // Write even number to even_numbers.txt
        } else {
            fprintf(oddFile, "%d\n", i);   // Write odd number to odd_numbers.txt
        }
    }

    // Close the files
    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers written to files successfully.\n");

    return 0;
}


// Q-2

#include <stdio.h>

// Define a structure to store student information
struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    int i;
    struct Student students[5];  // Array to store 5 students' data
    float percentage;

    // Input the data for each student
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // To read a string with spaces
        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics Marks (out of 100): ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics Marks (out of 100): ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");
    }

    // Display the percentage for each student
    printf("Mark Sheets:\n");
    printf("--------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        // Calculate percentage
        percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;

        // Print student details and percentage
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %d\n", students[i].chem_marks);
        printf("Mathematics Marks: %d\n", students[i].maths_marks);
        printf("Physics Marks: %d\n", students[i].phy_marks);
        printf("Percentage: %.2f%%\n", percentage);
        printf("--------------------------------------------\n");
    }

    return 0;
}
