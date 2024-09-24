//Grade Evaluation using switch
#include <stdio.h>
int main() {
    char grade;
    
    // Input grade
    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade); // Added space before %c to avoid newline issue

    // Switch case for grades
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Well done!\n");
            break;
        case 'C':
            printf("Good job!\n");
            break;
        case 'D':
            printf("You passed.\n");
            break;
        case 'F':
            printf("Better luck next time.\n");
            break;
        default:
            printf("Error! Invalid grade.\n");
    }

    return 0;
}

