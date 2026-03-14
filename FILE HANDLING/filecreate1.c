#include <stdio.h>

int main()
{
    FILE *file;
    char data[100];
    printf("=== File Handling Demo ===\n");

    // Create and write to a file
    file = fopen("demo.txt", "w");
    if (file == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }

    printf("=== Writing to file ===\n");
    fprintf(file, "Hello! This is the first line.\n");
    fprintf(file, "This is the second line.\n");
    fclose(file);
    printf("File created and data stored successfully.\n\n");

    // Append data to the file
    file = fopen("demo.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file for appending!\n");
        return 1;
    }

    printf("=== Appending to file ===\n");
    fprintf(file, "This line is appended.\n");
    fprintf(file, "Another appended line.\n");
    fclose(file);
    printf("Data appended successfully.\n\n");

    // Read and display file contents
    file = fopen("demo.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("=== File Contents ===\n");
    while (fgets(data, sizeof(data), file) != NULL)
    {
        printf("%s", data);
    }
    fclose(file);

    return 0;
}