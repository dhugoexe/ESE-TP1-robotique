#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "functions.h"


int variable; // variable globale : segment de données aussi
static int variable_static; // variable globale statique : segment de données

int main (void) {
    int a;
    int * p;
    /* Parmi les deux lignes suivantes, laquelle est la bonne? Pourquoi?
    * Commentez la ligne fausse.
    */
    // *p = a; FAUX car elle essaie d'assigner une valeur à une adresse non initialisée
    p = &a;
    /* Que représente &p? Que représente p? Et *p? */

    // &p correspond à l'adresse mémoire de p
    // p correspond à la valeur stockée dans p (qui est l'adresse de a)
    // *p correspond à la valeur à l'adresse mémoire pointée par p

    /* Expliquer le comportement des lignes suivantes */
    printf("%d %d\n", a, *p); // a et p ne sont pas initialisée, retourne donc la valeur de l'adresse pointée
    *p = 5;
    printf("%d %d\n", a, *p); // on attribue la valeur 5 à l'objet pointé, donc a=5, vu que p est à poiteur à l'adresse de a.
    a = 12;
    printf("%d %d\n", a, *p); // on attribue la valeur 12 à a, donc *p = a = 12
    /* Faites vérifier par l'encadrant */
    return 0;
}


