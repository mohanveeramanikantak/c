//Days of the Week using switch
#include <stdio.h>
int main() {
    int day;
    
    // Input day number
    printf("Enter a number (1-7) to represent the day of the week: ");
    scanf("%d", &day);

    // Switch case for days
    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Error! Invalid day number.\n");
    }

    return 0;
}

