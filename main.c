#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "functions.h"

int variable;
static int variable_static;

#define MAX_SIZE 10
int tabSize = 0;

char filename[] = "num.txt";

int main(void) {
    FILE *fptr = fopen(filename, "r");


    srand(time(NULL));

    int tab[MAX_SIZE];
    int num;

    while (fscanf(fptr, "%d", &num) == 1 && tabSize < MAX_SIZE) {
        tab[tabSize++] = num;
    }

    fclose(fptr);

}