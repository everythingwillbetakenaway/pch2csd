#include <stdio.h>

extern FILE *NewFile;

// function that creates a new file
int CreatingNewFile(const char* NewFileName) {
    if ((NewFile = fopen(NewFileName, "w+b")) == NULL) {
        printf("Error - file not created!\n");
        return 0;
    } else {
        printf("file was created!\n");
    }
    return 1;
}