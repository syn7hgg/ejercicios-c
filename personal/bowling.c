//
// Created by Andrés on 01-09-22.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct frame {
    char t1, t2;
    // int score;
    struct frame *next;
};
typedef struct frame tFrame;
typedef tFrame *Frame;

int main() {
    // Variables
    Frame F, aux;
    char t1, t2;
    int i=1;

    // Program
    F = malloc(sizeof(Frame));
    aux = F;
    printf("=== Bowling Scoring by Andrés Caraballo ===\n");

    while (i <= 10) {
        printf("Frame %i - Throw 1: ", i);
        scanf(" %c", &t1);
        if (tolower(t1) == 'x') {
            aux->t1 = 'X';
            aux->t2 = '\0';
        } else {
            aux->t1 = t1;
            printf("Frame %i - Throw 2: ", i);
            scanf(" %c", &t2);
            aux->t2 = t2;
        }
        i++;
        aux = malloc(sizeof(aux->next));
    }
    aux->next = NULL;
    aux = F;

    printf("\n\n=== Final Scorecard ===");
    i = 1;
    while (i <= 10) {
        printf("\nFrame %i: %c|%c", i, aux->t1, aux->t2);
        i++;
        aux = aux->next;
    }

    // End
    printf("\n\n");
    return 0;
}