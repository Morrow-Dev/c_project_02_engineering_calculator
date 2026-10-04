#include <stdio.h>
#include "integermenu.h"
#include "../Operations/integer.h"

void integerMenu(void) {
    int menuchoice;
    printf("=======================================================================================\n");
    printf("                            INTEGER MENU.\n");
    printf("=======================================================================================\n");
    printf("1. Remainder     2. Integer Division     3. Even or Odd     4. Divisibility Test\n");
    printf("Or type '0' to return to the main menu.");
    scanf("%d", &menuchoice);

switch (menuchoice) {
    // Remainder
    case 1: {

    }
    case 2:{}
    case 3:{}
    case 4:{}
    case 0:{}
    default: {
        printf("Invalid Input.\n");
    }
}
}