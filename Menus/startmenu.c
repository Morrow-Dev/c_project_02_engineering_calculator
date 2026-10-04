#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "arithmeticmenu.h"

void startMenu(void) {
    bool ALWAYS = true;

    while (ALWAYS == true){
        int menuchoice;
        printf("=========================================================================\n");
        printf("                  ENGINEERING SCIENTIFIC CALCULATOR.\n");
        printf("=========================================================================\n");
        printf("1. Basic Arithmetic.              2. Integer Operations.\n");
        printf("3. Powers and roots.              4. Percentages.\n");
        printf("5. Geometry.                      6. Trigonometry.\n");
        printf("7. Logarithms and Exponentials.   8. Quadratec Equation Solver.\n");

        scanf("%d", &menuchoice);

        switch (menuchoice) {
            case 1: {
                arithmeticMenu();
                break;
            }
        }
    }
}