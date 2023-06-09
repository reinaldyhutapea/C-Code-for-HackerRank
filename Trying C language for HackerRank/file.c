#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int main() {
    FILE *fp;
    char line[MAX_LINE_LENGTH];
    char *token;

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Error: cannot open file\n");
        exit(1);
    }

    while (fgets(line, MAX_LINE_LENGTH, fp)) {
        token = strtok(line, "|");
        while (token != NULL) {
            printf("%s\n", token);
            token = strtok(NULL, "|");
        }
    }

    if (ferror(fp)) {
        fprintf(stderr, "Error: read error\n");
        exit(1);
    }

    fclose(fp);

    return 0;
}
