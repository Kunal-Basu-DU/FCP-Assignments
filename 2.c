// Program to convert temperature from celsius to fahrenheit or vice-vers
#include <stdio.h>

float celsius_to_Fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheit_to_Celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {

    float temperature, converted_temperature;
    int choice;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Choose conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            converted_temperature = celsius_to_Fahrenheit(temperature);
            printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, converted_temperature);
            break;
        case 2:
            converted_temperature = fahrenheit_to_Celsius(temperature);
            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, converted_temperature);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
