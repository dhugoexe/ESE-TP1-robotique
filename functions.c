//
// Created by Hugo Devaux on 10/09/2024.
//

#include "functions.h"

#include <stdio.h>


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

int getIndex(const int value, int tab[]) {
    int i = 0;
    while (tab[i] != value) {
        i++;
    }
    return i;
}

void sortTab(int tab[]) {
    int sortedTab[TAB_SIZE];
    int currentMin;
    int currentIndex;

    for (int i = 0; i < TAB_SIZE; i++) {
        currentMin = getMinValue(tab);
        currentIndex = getIndex(currentMin, tab);
        sortedTab[i] = currentMin;
        tab[currentIndex] = 101;
    }

    for (int i = 0; i < TAB_SIZE; i++) {
        tab[i] = sortedTab[i];
        printf("%i \n", tab[i]);
    }
}