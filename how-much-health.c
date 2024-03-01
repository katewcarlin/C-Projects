#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Variables used in program. 
char powerOn;
char name[30];
char choice;
char sexAB;
float currentHeight;
float currentWeight;
float currentAge;
float waterIntake;
float proteinIntake;
float BMI;
float BMR;



// Introduction to program, where we gather health information from the user. 

int main() {
    printf("\n\nWelcome to How Much Health!\n\n");

    printf("Would you like insights on your health today (Y / N)? ");
    scanf("%c", &powerOn);

    printf("Enter your name here: ");
    scanf("%s", &name);

    printf("\nWelcome %s, let's learn more about you to get started.\n", &name);
    printf("\nFirst, please enter your assigned sex at birth: ");
    scanf (" %c", &sexAB);

    printf("\nNext, please enter your age in years: ");
    scanf(" %f", &currentAge);

    printf("\nNext, please enter your current height (in inches): ");
    scanf(" %f", &currentHeight);

    printf("Lastly, please enter your current weight (in lbs): ");
    scanf(" %f", &currentWeight);

/* This is the main menu where the program asks the user 
what they would like to know about their body. */
    printf("\nHi %s, what would you like to know about your body today?\n", &name);
    while (powerOn == 'Y') {
    printf("\nA.) How much water do I need daily?\n");
    printf("\nB.) How much protein do I need daily?\n");
    printf("\nC.) What is my ideal BMI?\n");
    printf("\nD.) What is my BMR?\n");
    printf("\nE.) Exit program.\n");
    printf("Enter a menu choice: ");
    scanf(" %c", &choice);

    // Once a menu choice is entered, health information will be given to the end user. 

    switch (choice) {

        case 'A': 
            waterIntake = currentWeight * .5;
            printf("\nDaily water Intake Recommended for %s: %.0f oz ", name, waterIntake);
            printf("\n\nWould you like to go back to the main menu (Y / N)? ");
            scanf(" %c", &powerOn);
                if (powerOn == 'Y') {
                break;
                } else if (powerOn == 'N') {
                abort();
            }

        case 'B':
            proteinIntake = currentWeight * .36;
            printf("Daily protein Intake Recommended for %s: %.0f grams\n", name, proteinIntake);
            printf("\n\nWould you like to go back to the main menu (Y / N)? ");
            scanf(" %c", &powerOn);
                if (powerOn == 'Y') {
                break;
                } else if (powerOn == 'N') {
                abort();
            }
        case 'C':
            BMI = currentWeight / pow(currentHeight, 2) * 703;
            printf("%c, you have a Body Mass Index (BMI) of: %.1f\n", name, BMI);
            printf("\n\nWould you like to go back to the main menu (Y / N)? ");
            scanf(" %c", &powerOn);
                if (powerOn == 'Y') {
                break;
                } else if (powerOn == 'N') {
                abort();
            }
        case 'D':
            if (sexAB == 'M') {
            BMR = 66.47 + (6.24 * currentWeight) + (12.7 * currentHeight) - (6.75 * currentAge);
            printf("Your Basal Metabolic Rate is: %.0f", BMR);
            } else if (sexAB == 'F') {
            BMR = 655.1 + (4.35 * currentWeight) + (4.7 * currentHeight) - (4.7 * currentAge);
            printf("Your Basal Metabolic Rate is: %.0f", BMR);
            }
            printf("\n\nWould you like to go back to the main menu (Y / N)? ");
            scanf(" %c", &powerOn);
                if (powerOn == 'Y') {
                break;
                } else if (powerOn == 'N') {
                abort();
            }
        case 'E':
            printf("\nApplication ending, see you next time!\n");
            abort();
        default: 
            printf("%c is not a valid input, please try again. ", choice);
            break;
    }
    }
}