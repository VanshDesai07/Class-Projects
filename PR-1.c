1)

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

2)

#include <stdio.h>

int main() {
    float base_salary, hra_percentage, da_percentage, ta_percentage;
    float hra_amount, da_amount, ta_amount, gross_salary;

    printf("Enter the base salary: ");
    scanf("%f", &base_salary);

    printf("Enter the percentage of HRA: ");
    scanf("%f", &hra_percentage);

    printf("Enter the percentage of DA: ");
    scanf("%f", &da_percentage);

    printf("Enter the percentage of TA: ");
    scanf("%f", &ta_percentage);

    hra_amount = (hra_percentage / 100) * base_salary;
    da_amount = (da_percentage / 100) * base_salary;
    ta_amount = (ta_percentage / 100) * base_salary;

    gross_salary = base_salary + hra_amount + da_amount + ta_amount;

    printf("HRA Amount: %.2f\n", hra_amount);
    printf("DA Amount: %.2f\n", da_amount);
    printf("TA Amount: %.2f\n", ta_amount);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}

3)

#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the first angle (in degrees): ");
    scanf("%f", &angle1);

    printf("Enter the second angle (in degrees): ");
    scanf("%f", &angle2);

    if (angle1 >= 90 || angle2 >= 90) {
        printf("Invalid input: In a right triangle, the other angles should be less than 90 degrees.\n");
    } else {

        angle3 = 180 - (angle1 + angle2);

        printf("The third angle is: %.2f degrees\n", angle3);
    }

    return 0;
}
