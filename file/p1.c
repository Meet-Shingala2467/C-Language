#include<stdio.h>

void main()
{
	FILE * file;
	int i;

int main() {
    FILE *source_file, *destination_file;
    char ch;

    source_file = fopen("source.txt", "r");
    if (source_file == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

     destination_file = fopen("destination.txt", "w");
    if (destination_file == NULL) {
        printf("Unable to open destination file.\n");
        fclose(source_file);
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }

    printf("Content copied successfully.\n");

    fclose(source_file);
    fclose(destination_file);

    return 0;
}

}
