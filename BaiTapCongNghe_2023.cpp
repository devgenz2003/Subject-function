#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
void OddAndEvenNumbers(int Number){
	 if (Number % 2 == 0) {
        printf("%d is even number.\n", Number);
    } else {
        printf("%d is odd.\n", Number);
    }
}
void FindTheLargestNumberAmong4Numbers(int number1, int number2,int number3,int number4){
	printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);
    printf("Enter number 3: ");
    scanf("%d", &number3);
    printf("Enter number 4: ");
    scanf("%d", &number4);
    int max = number1;
    if (number2 > max) {
        max = number2;
    }
    if (number3 > max) {
        max = number3;
    }
    if (number4 > max) {
        max = number4;
    }
    printf("Largest number among 4 numbers: %d\n", max);
}
void QuadraticEquation2(){
	double a, b, c;
    double discriminant, root1, root2;
    printf("Enter the coefficient a: ");
    scanf("%lf", &a);                                                                     
    printf("Enter the coefficient b: ");
    scanf("%lf", &b);
    printf("Enter the coefficient c: ");
    scanf("%lf", &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The equation has two distinct solutions\n");
        printf("Solutions 1 = %.2lf\n", root1);
        printf("Solutions 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("The equation has a double solution\n");
        printf("Dual solution = %.2lf\n", root1);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Equation has no real solution\n");
        printf("Solutions 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Solutions 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}
void Time() {
    int hour, minute, second, secondsPlus;
    printf("Enter hours: ");
    scanf("%d", &hour);
    printf("Enter minute: ");
    scanf("%d", &minute);
    printf("Enter second: ");
    scanf("%d", &second);
    printf("Enter the number of seconds you want to increase: ");
    scanf("%d", &secondsPlus);

    second += secondsPlus;
    if (second >= 60) {
        minute += second / 60;
        second %= 60;
    }
    if (minute >= 60) {
        hour += minute / 60;
        minute %= 60;
    }
    printf("Time after adding seconds: %02d:%02d:%02d\n", hour, minute, second);
}
void CalculateTheNumberOfDaysOfTheMonth(){
	int month;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Month %d have 31 day.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Month %d have 30 day.\n", month);
            break;
        case 2:
            printf("Month %d have 28 or 29 day.\n", month);
            break;
        default:
            printf("Invalid month(1-12)).\n");
    }
}
void CalculateOperator(){
	double x, y, result;
    char operatorx;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);
     getchar();
    printf("Enter math (+, -, *, /): ");
    scanf("%c", &operatorx);
    switch (operatorx) {
        case '+':
            result = x + y;
            printf("%.2lf + %.2lf = %.2lf\n", x, y, result);
            break;
        case '-':
            result = x - y;
            printf("%.2lf - %.2lf = %.2lf\n", x, y, result);
            break;
        case '*':
            result = x * y;
            printf("%.2lf * %.2lf = %.2lf\n", x, y, result);
            break;
        case '/':
            if (y != 0) {
                result = x / y;
                printf("%.2lf / %.2lf = %.2lf\n", x, y, result);
            } else {
                printf("Cannot be divided by 0.\n");
            }
            break;
        default:
            printf("Invalid math operation.\n");
    }
}
void AverageScoresAndResults(){
	float mathScores, physicalPoint, chemicalPoint;
    printf("Enter math scores: ");
    scanf("%f", &mathScores);
    printf("Enter physical points: ");
    scanf("%f", &physicalPoint);
    printf("Enter chemistry scores: ");
    scanf("%f", &chemicalPoint);
    float totalScore = mathScores + physicalPoint + chemicalPoint;
    if (totalScore >= 15 && mathScores >= 4 && physicalPoint >= 4 && chemicalPoint >= 4) {
        if (mathScores >= 5 && physicalPoint >= 5 && chemicalPoint >= 5) {
            printf("Pass and study well in all subjects.\n");
        } else {
            printf("Do not study all subjects equally.\n");
        }
    } else {
        printf("Fail.\n");
    }
}

void CalculateDaysOfTheWeek() {
    struct tm date;
    char datetime[20]; getchar();

    printf("Enter date (dd/mm/yyyy hh:mm:ss): ");
    fgets(datetime, sizeof(datetime), stdin);
    if (sscanf(datetime, "%d/%d/%d %d:%d:%d",
               &date.tm_mday, &date.tm_mon, &date.tm_year,
               &date.tm_hour, &date.tm_min, &date.tm_sec) == 6) {
        			date.tm_mon -= 1;  
        			date.tm_year -= 1900;  
        	time_t timestamp = mktime(&date);
        struct tm *local_time = localtime(&timestamp);
        int day_of_week = local_time->tm_wday;
        switch (day_of_week) {
           case 0:
                printf("Sunday\n");
                break;
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
        }
    } else {
        printf("Invalid date.\n");
    }
}

void CheckValue(){
	 int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a) {
        int perimeter = a + b + c;
        double p = (double)perimeter / 2;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("The 3 values just entered are the 3 sides of the triangle.\n");
        printf("The area of the triangle is: %.2lf\n", area);
    } else {
        printf("The 3 values just entered are not the 3 sides of the triangle.\n");
    }
}

void CalculateElectricityBills(){
	int oldIndex, newIndex;
    int quota = 50;
    int normPrice = 230;
    int priceExceedsTheNorm;
    printf("Enter old index: ");
    scanf("%d", &oldIndex);
    printf("Enter new index: ");
    scanf("%d", &newIndex);
    int amountOfElectricityUsed = newIndex - oldIndex;
    int predeterminedAmount = 0;
    if (amountOfElectricityUsed <= quota) {
        predeterminedAmount = amountOfElectricityUsed * normPrice;
    } else {
        predeterminedAmount = quota * normPrice;
    }
    int moneyExceedsTheLimit = 0;
    if (amountOfElectricityUsed > quota) {
        priceExceedsTheNorm = (amountOfElectricityUsed > 100) ? 900 : 480;
        moneyExceedsTheLimit = (amountOfElectricityUsed - quota) * priceExceedsTheNorm;
    }
    int totalAmount = normPrice + moneyExceedsTheLimit + 1000; 
    printf("Old index: %d\n", oldIndex);
    printf("New index: %d\n", newIndex);
    printf("Standard payment: %d VND\n", predeterminedAmount);
    printf("Overpayment: %d VND\n", moneyExceedsTheLimit);
    printf("Total amount payable: %d VND\n", totalAmount);
}
int main() {
    int input;
    do {
        printf("======== MENU =======\n");
        printf("1. The program enters integers and prints even and odd numbers\n");
        printf("2. The program enters 4 integers and prints the largest number\n");
        printf("3. Program to solve quadratic equations\n");
        printf("4. The program enters hours, minutes, seconds. Calculate the total number of seconds(hh:mm:ss)\n");
        printf("5. Program to enter month and calculate number of days\n");
        printf("6. Operator processing program\n");
        printf("7. The program calculates the average score\n");
        printf("8. Program to enter day, month, year. Find the day of the week\n");
        printf("9. Program to determine whether 3 numbers are sides of a triangle or not\n");
        printf("10.Electricity bill calculation program\n");
        printf("0. Exit\n");
        printf("Enter your selection: ");
        scanf("%d", &input);

        switch (input) {
            case 1:
                printf("Please enter an integer\n");
                scanf("%d", &input);
                OddAndEvenNumbers(input);
                printf("End of session. We invite you to join the next session!\n");
                printf("=========================================================\n");
                break;
            case 2:
            	int number1, number2, number3, number4;
                printf("Please enter 4 numbers\n");
                FindTheLargestNumberAmong4Numbers(number1, number2,number3,number4);
                printf("End of session. We invite you to join the next session!\n");
                printf("=========================================================\n");
                break;
            case 3:
                printf("Quadratic equation 2\n");
                QuadraticEquation2();
                printf("End of session. We invite you to join the next session!\n");
                printf("=========================================================\n");
                break;
            case 4:
                printf("Please enter the time and number of seconds you want to add\n");
                Time();
                printf("End of session. We invite you to join the next session!\n");
                printf("=========================================================\n");
                break;
            case 5:
                printf("Calculate The Number Of Days Of The Month\n");
                CalculateTheNumberOfDaysOfTheMonth();
                printf("End of session. We invite you to join the next session!\n");
                printf("=========================================================\n");
                break;
            case 6:
                printf("Operator processing program\n");
                CalculateOperator();
                printf("End of session. We invite you to join the next session!\n");
                printf("=========================================================\n");
                break;
            case 7:
                printf("The program calculates the average score\n");
                AverageScoresAndResults();
                printf("End of session. We invite you to join the next session!\n");
                printf("=========================================================\n");
                break;
            case 8:
                printf("Program to enter day, month, year. Find the day of the week\n");
                CalculateDaysOfTheWeek();
                printf("End of session. We invite you to join the next session!\n");
                printf("=========================================================\n");
                break;
            case 9:
                printf("Program to determine whether 3 numbers are sides of a triangle or not\n");
                CheckValue();
                printf("End of session. We invite you to join the next session!\n");
                printf("=========================================================\n");
                break;
            case 10:
            	printf("10.Electricity bill calculation program\n");
            	CalculateElectricityBills();
            	 printf("End of session. We invite you to join the next session!\n");
                printf("=========================================================\n");
            	break;
            case 0:
                printf("Exit the program.\n");
                break;
            default:
                printf("Inappropriate choice.\n");
        }
    } while (input != 0);

    return 0;
}
