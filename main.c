#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "functions.h"


int variable; // variable globale : segment de données aussi
static int variable_static; // variable globale statique : segment de données

int tabSize; // variable du segment de données


int main (void) {

    printf("Enter Tab size: \n");
    scanf("%d", &tabSize);

    srand(time(NULL));

    int tab[tabSize]; // dans la pile

    printf("Random list: \n");
    for (int i=0;i<tabSize; i++) {
        tab[i] = (rand() % 99) + 1;
        printf("%i \n", tab[i]);
    }
    printf("The max value is %i (index: %i) and the min value is %i (index: %i) \n", getMaxValue(tab), getIndex(getMaxValue(tab), tab), getMinValue(tab), getIndex(getMinValue(tab), tab));
    printf("Sorted Tab: \n");
    sortTab(tab);
    return 0;
}


