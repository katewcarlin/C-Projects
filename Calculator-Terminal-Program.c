

#include <stdio.h>
#include <stdlib.h>

int main() {
// we are first declaring the variables that we need. 

char operator;
double num1;
double num2;
double result;
char userAnswer;

    printf("\nWelcome to the calculator application in your terminal!\n");
    printf("\nWould you like to use the Calculator? Y or N? \n");
    scanf("%c", &userAnswer);
        if (userAnswer == 'Y') {
        printf("Launching calculator...\n");
    // Asking the user what they would like to use.

    printf("Enter an operator (+ - * /): ");
    scanf(" %c", &operator);

    //input for the first number.
    printf("Enter first number: ");
    scanf("%lf", &num1);

    //input for the second number.
    printf("Enter second number: ");
    scanf("%lf", &num2);    

    /* We are going to use a switch to examine 
    our operator for any matching cases, if there is a matching case, 
    the answer to the equation will print, then the program will end. */
switch(operator) {
    case '+':
        result = num1 + num2;
        printf("\nWhen you add %.2lf and %.2lf, the sum is %.2lf.\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nWhen you subtract %.2lf from %.2lf, the difference is %.2lf.\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nThe product of %.2lf times %.2lf is %.2lf.\n", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nThe quotient of %.2lf divided by %.2lf is %.2lf.\n", num1, num2, result);
        break;
    // If there is no case match
    default:
        printf("%c is not valid, please run the program again.\n", operator);
        break;
    }
    // If user answers 'N', the program ends. 
    } else if (userAnswer == 'N')
    ; {
        printf("\nEnding application... Goodbye!\n\n");
        abort();
    
    }
}   
