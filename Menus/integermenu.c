#include <stdio.h>
#include <stdbool.h>
#include "integermenu.h"
#include "../Operations/integer.h"

void integerMenu(void) {
    int menuchoice;
    bool integerALWAYS = true;
    while (integerALWAYS == true){
        printf("=======================================================================================\n");
        printf("                            INTEGER MENU.\n");
        printf("=======================================================================================\n");
        printf("1. Remainder     2. Integer Division     3. Even or Odd     4. Divisibility Test\n");
        printf("Or type '0' to return to the main menu.");
        scanf("%d", &menuchoice);

        switch (menuchoice) {
            // Remainder
            case 1: {
                int a;
                int b;
                printf("Please enter your dividend.\n");
                scanf("%d", &a);
                printf("Please enter your divisor.\n");
                scanf("%d", &b);
                int result = intRemainder(a, b);
                printf("The remainder of %d / %d equals %d.\n", a, b, result);
                break;

            }
            // Integer Division
            case 2: {
                int a;
                int b;
                printf("Please enter your dividend.\n");
                scanf("%d", &a);
                printf("Please enter your divisor.\n");
                scanf("%d", &b);
                int result = integerDivision(a, b);
                printf("%d / %d equals %d.\n", a, b, result);
                break;
            }
            // Even or Odd
            case 3: {
                int a;
                bool result;
                printf("Please enter your integer value.\n");
                scanf("%d", &a);
                result = isEven(a);
                if (result == true) {
                    printf("%d is even.\n", a);
                } else { printf("%d is odd.\n", a); }
                break;
            }

            // Divisibility Test
            case 4: {
                int a;
                int b;
                bool result;
                printf("Please enter your dividend.\n");
                scanf("%d", &a);
                printf("Please enter your divisor.\n");
                scanf("%d", &b);
                result = divisibilityTest(a, b);
                if (result == true) {
                    printf("%d is divisible by %d.\n", a, b);
                } else { printf("%d is not divisible by %d.\n", a, b); }
                break;
            }
            // Return to Menu
            case 0: {
                integerALWAYS = false;
                break;
            }
            default: {
                printf("Invalid Input.\n");
            }
        }
    }
}


