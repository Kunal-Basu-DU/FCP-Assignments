//Program to read data from a file.
#include <stdio.h>
int main() {
FILE *file;
char data[100];

file = fopen("example.txt", "r");

if (file == NULL) {
printf("Error opening the file.\n");
return 1;
}
fscanf(file, "%[^\n]", data);

fclose(file);

printf("Data read from the file:\n%s\n", data);
return 0;

}