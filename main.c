#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAB_SIZE 10

int getMaxValue(int tab[]) {
    int maxValue = tab[0];

    for (int i = 0; i < TAB_SIZE; i++)
        if (tab[i] > maxValue) {
            maxValue = tab[i];
        }
        return maxValue;
}

int getMinValue(int tab[]) {
    int minValue = tab[0];

    for (int i = 0; i < TAB_SIZE; i++)
        if (tab[i] < minValue) {
            minValue = tab[i];
        }
    return minValue;
}

int getIndex(int value, int tab[]) {
    int i = 0;
    while (tab[i] != value) {
        i++;
    }
    return i;

}

int main(void) {

    srand(time(NULL));

    int tab[TAB_SIZE];

    for (int i=0;i<TAB_SIZE; i++) {
        tab[i] = (rand() % 99) + 1;
        printf("%i \n", tab[i]);
    }
    printf("The max value is %i (index: %i) and the min value is %i (index: %i) \n", getMaxValue(tab), getIndex(getMaxValue(tab), tab), getMinValue(tab), getIndex(getMinValue(tab), tab));

    return 0;
}
