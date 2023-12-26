//Write a program to write data into a file.

#include <stdio.h>
int main() {
FILE *file;
char data[100];
// Open a file for writing

file = fopen("example.txt", "w");

if (file == NULL) {
printf("Error opening the file.\n");
return 1;
}

// Get data from the user
printf("Enter data to write to the file:\n");
fgets(data, sizeof(data), stdin);

// Write data to the file
fprintf(file, "%s", data);

// Close the file
fclose(file);
printf("Data written to the file successfully.\n");

return 0;

}