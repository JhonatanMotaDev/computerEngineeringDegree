#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("    ______            _______          ___   ____ ___   __ __\n");
  printf("   / ____/___  ____ _/ ____(_)___     |__ \\ / __ \\__ \\ / // /\n");
  printf("  / __/ / __ \\/ __ `/ /_  / / __ \\    __/ / / / / /_/ / // /_\n");
  printf(" / /___/ / / / /_/ / __/ / / /_/ /   / __/ / /_/ / __/__  __/\n");
  printf("/_____/_/ /_/\\__, /_/   /_/ .___/   /____/ \\____/____/ /_/\n");
  printf("            /____/       /_/\n");

  printf("\n            C activities by Jhonatan Mota, 2024 \n \n");

  printf("****************************************************\n");
  printf("****************************************************\n");
  printf("**                                                **\n");
  printf("**                 Available Codes                **\n");
  printf("**                                                **\n");
  printf("****************************************************\n");
  printf("**                                                **\n");
  printf("**     1. Calculation of 3 Numbers Average        **\n");
  printf("**     2. Calculate the circle area               **\n");
  printf("**     3. Calculate wall tiles                    **\n");
  printf("**     4. Check elegebility for Campus Party      **\n");
  printf("**     5. Check gender and military enlistment    **\n");
  printf("**     6. Check 100-200 interval numbers          **\n");
  printf("**     7. Majority age check                      **\n");
  printf("**     8. Equal, different or 2 equals at least   **\n");
  printf("**     9. Loan approval                           **\n");
  printf("**    10. 4 Notes average check                   **\n");
  printf("**    11. 3 numbers inserted in ascendent         **\n");
  printf("**    12. Fibonacci's series 20 first numbers     **\n");
  printf("**    13. Numbers between initial and final input **\n");
  printf("**    14. Calculate multiplication table          **\n");
  printf("**    15. Display Odd Numbers between 100-200     **\n");
  printf("**    16. Student's Grades Calculator             **\n");
  printf("**    17. Integers inserted and their sum         **\n");
  printf("**    18. Integers input sum untill 0             **\n");
  printf("**    19. Average numbers untill 0                **\n");
  printf("**    20. Integer values untill 0                 **\n");
  printf("**    21. Gender check                            **\n");
  printf("**    22. Prime Number Checker                    **\n");
  printf("**    23. Prime Numbers Sum                       **\n");
  printf("**    24. Height-average Calculation              **\n");
  printf("**    25. Exponentiation Calculator               **\n");
  printf("**                                                **\n");
  printf("****************************************************\n");
  printf("****************************************************\n\n");

    int numberChoosed = 0;

    //  Average calculator
      float averageCalculation;
      int   number1;
      int   number2;
      int   number3;

      //  Radius to area calculator
      const double PI = 3.141592;
      double       radius;

      //  Wall tiles variables

      float wallHeight;
      float wallWidth;
      float tileHeight;
      float tileWidth;
      int   numTiles;

      //  Campus party verifier
      char partyMoney;
      char partyPermission;

      //  Military enlistment
      char gender;
      char health;

      //  Interval 100-200
      int numberInterval;

      //  Majority check
      int ageCheck;

      //  Equal numbers check
      int numInsert1;
      int numInsert2;
      int numInsert3;

      //  Loan Qualifier
      float loanAmount;
      float salary;
      int   numParcels;


      //  Ascendding order numbers
      int numberA;
      int numberB;
      int numberC;
      int temp;

      //	Fibonacci's Series 
      int i;
      int n = 20;
      int t1 = 0, t2 = 1;
      int nextTerm = t1 + t2;


      // 	Initial number to final number
      int initialNumber;
      int finalNumber;
      int index;

      // Multiplication table
      int numberMultiplied;

      //	Odd numbers between the '100-200' range
      int numberVerify;

      int sumNumbers = 0;
      int numbers[10]; 
      int y;

      // Sum untill 0
      int numberInput;
      int numbersSum = 0;

      //	Average untill 0
      int numberEntry1, count = 0;
      float sumEntry1 = 0, averageEntry1;

      //	Greater X Lower
      int numberInserted;
      int max = -2147483647;
      int min = 2147483647;

      //	Military Enlistment
      int genderInput;

      //	Real numbers untill 0
      float value1;
      float value2;
      int	  isValidInput = 0;

      //	Factorial code
     int number = 0, factorial = 1, z;

      //	Volleyball team average height calculator
     int numPlayers, a;
     float playerHeight, totalHeight = 0, teamAverageHeight;

     //	Miss contest notes
     int numParticipants, c, winnerIndex = 0;
     int maxScore = -1;

    // Enlistment
    char genderInput2;

      //              //              //

    printf("Welcome, which code do you want to try first? ");
      scanf("%d", &numberChoosed);

    switch (numberChoosed) {
      case 1:
        printf("\nCalculation of 3 numbers average\n");

        printf("Insert the first number to be calculated: ");
           scanf("%d", &number1);

        printf("Insert the second number to be calculated: ");
           scanf("%d", &number2);
        printf("Insert the third number to be calculated: ");
           scanf("%d", &number3);

        averageCalculation = (number1 + number2 + number3) / 3.0;

        printf("Your average is equal to: %.2f", averageCalculation);  
      break;

      case 2:
        printf("Input the circumference radius (in centimeters - cm): ");
          scanf("%lf", &radius);

          if (radius >= 0) {
              double area = PI * radius * radius;
                printf("The circumference area is equal to: %.2lf cm\n", area);
          } else {
            printf("The value inserted is invalid, try again");
          }
      break;

      case 3:
        printf("\nWall tiles calculator:\n");

          printf("Enter the height of the wall (in meters): ");
            scanf("%f", &wallHeight);

          printf("Enter the width of the wall (in meters): ");
            scanf(" %f", &wallWidth);

          printf("Enter the height of the tile (in meters): ");
            scanf(" %f", &tileHeight);

          printf("Enter the width of the tile (in meters): ");
            scanf("%f", &tileWidth);

          numTiles = (int)((wallHeight / tileHeight) * (wallWidth / tileWidth));

          printf("Number of tiles needed to cover the wall: %d", numTiles);
      break;

      case 4:
        printf("\nCampus Party 2024\n");

          printf("Do you have enough money? (y - yes | n - no): ");
            scanf(" %c", &partyMoney);

          printf("Do you have your parents permission? (y - yes | n - no): ");
            scanf(" %c", &partyPermission);

          if (partyMoney == 'y' && partyPermission == 'y') {
              printf("You can go to the Campus Party!!! Welcome UniFipMOC!!!");
          } else {
              printf("You can't go to the Campus Party, i'm sorry!");
          }
      break;

      case 5:
        printf("What's your gender? (Male - M | Female - F): ");
            scanf(" %c", &gender);

          printf("Do you have any health issue? (yes - Y | no - N): ");
            scanf(" %c", &health);

          if (gender == 'M' && health == 'N') {
              printf("You can enroll at the military enlistment! Welcome!");
          } else {
              printf("You can't enroll at the miliary enlistment! So sorry!");
          }
      break;

      case 6:
        printf("\nChoose a number and i'll tell you if he belongs to the '100-200' range: ");
            scanf("%d", &numberInterval);

          if (numberInterval >= 100 && numberInterval <= 200) {
              printf("Your number belongs to the '100-200' range");
          } else {
              printf("Your number didn't belongs to the '100-200' range!");
          }
      break;

      case 7:
        printf("\nInsert your age (More than 18 - Majority age | Less than 18 - Under Majority age): ");
            scanf("%d", &ageCheck);

          if (ageCheck >= 18) {
              printf("You're over the age of majority");
          } else {
              printf("You're under the age of majority");
          }	
      break;

      case 8:
        printf("\nInsert your number, and we'll guess if there's only equal numbers, only different numbers or 2 equal numbers and 1 different!\n");

          printf("Insert the first number: ");
            scanf("%d", &numInsert1);

          printf("Insert the second number: ");
            scanf("%d", &numInsert2);

          printf("Insert the third number: ");
            scanf("%d", &numInsert3);

          if (numInsert1 == numInsert2 && numInsert2 == numInsert3) {
              printf("The three values are equal");
          } else if (numInsert1 == numInsert2 || numInsert2 == numInsert3 || numInsert1 == numInsert3) {
              printf("There are two equal values and one different");
          } else {
              printf("There are no equal values");
          }
      break;



      case 9:
        printf("\nEnter the loan amount: ");
          scanf("%f", &loanAmount);

        printf("Enter the number of parcels: ");
          scanf("%d", &numParcels);

        printf("Enter the applicant's salary: ");
          scanf("%f", &salary);

        float installmentAmount = loanAmount / numParcels;

        if (installmentAmount <= 0.3 * salary) {
            printf("Loan approved!\n");
        } else {
          printf("Loan not approved. The amount of parcels exceeds 30%% of the salary.\n");
        }
        break;

        case 10:
          printf("\nStudent's grades calculator\n");

        float grade1, grade2, grade3, grade4;

          printf("Insert the first grade: ");
            scanf("%f", &grade1);

          printf("Insert the second grade: ");
            scanf("%f", &grade2);

          printf("Insert the third grade: ");
            scanf("%f", &grade3);

          printf("Insert the fourth grade: ");
            scanf("%f", &grade4);

          float average = (grade1 + grade2 + grade3 + grade4) / 4.0;

          if (average >= 7.0) {
              printf("Approved\n");
          } else {

            float recoveryGrade;

            printf("Insert the recovery grade: ");
                scanf("%f", &recoveryGrade);

              float newAverage = (average + recoveryGrade) / 2.0;

              if (newAverage >= 5.0) {
                printf("Approved after recovery\n");
              } else {
                printf("Failed\n");
              }
          }
        break;

      case 11:
        printf("\nInsert your 3 numbers, and we'll put them in ascending order!\n");

          printf("Enter the first number: ");
            scanf("%d", &numberA);

          printf("Enter the second number: ");
            scanf("%d", &numberB);

          printf("Enter the third number: ");
            scanf("%d", &numberC);

          if (numberA > numberB) {
              temp = numberA;
              numberA = numberB;
              numberB = temp;
          }

          if (numberB > numberC) {
              temp = numberB;
              numberB = numberC;
              numberC = temp;
          }

          if (numberA > numberB) {
              temp = numberA;
              numberA = numberB;
              numberB = temp;
          }

          printf("Numbers in ascending order: %d, %d, %d\n", numberA, numberB,numberC);
      break;

      case 12:
         printf("\nThe 20 first number on the Fibonacci's Series: %d, %d, ", t1, t2);

          for (i = 3; i <= n; ++i) {
              printf("%d, ", nextTerm);
              t1 = t2;
              t2 = nextTerm;
              nextTerm = t1 + t2;
          }
        break;

        case 13:
        printf("\nEnter a minimum and a maximum number, and we'll show all the numbers in between them: ");
          printf("\nEnter the initial number: ");
            scanf("%d", &initialNumber);

          printf("Enter the final number: ");
            scanf("%d", &finalNumber);

          printf("Numbers from %d to %d: ", initialNumber, finalNumber);

          if (initialNumber < finalNumber) {
                for (index = initialNumber; index <= finalNumber; index++) {
                printf(" %d, ", index);
            }
          } else {
              for (index = initialNumber; index >= finalNumber; index--) {
                  printf(" %d, ", index);
              }
          }			
        break;

        case 14:
          printf("\nEnter a number to see his multiplication table: ");
            scanf("%d", &numberMultiplied);

          printf("Multiplication table of %d:\n", numberMultiplied);

          for (i = 1; i <= 10; i++) {
              printf("%d x %d = %d\n", numberMultiplied, i, numberMultiplied * i);
          }
      break;

      case 15:
        printf("Odd numbers between 100 and 200:\n");
            for (numberVerify = 101; numberVerify <= 199; numberVerify += 2) {
                printf("%d, ", numberVerify);
          }			
      break;

      case 16:
        printf("Calculating the average of 10 students\n");

          float grades[10][2];
          float studentAverage;

          for (i = 0; i < 10; i++) {
              printf("\nEnter the first grade of student %d: ", i + 1);
                scanf("%f", &grades[i][0]);

            printf("Enter the second grade of student %d: ", i + 1);
              scanf("%f", &grades[i][1]);

            studentAverage = (grades[i][0] + grades[i][1]) / 2.0;
              printf("The average of student %d is: %.2f\n", i + 1, studentAverage);
          }
        break;

      case 17:
          printf("Enter 10 integers:\n");

          for (y = 0; y < 10; y++) {
              printf("Enter integer %d: ", y + 1);
                scanf("%d", &numbers[y]);
          }

          for (y = 0; y < 10; y++) {
              sumNumbers += numbers[y];
          }

          printf("\nThe sum of the numbers is: %d\n", sumNumbers);

          return 0;
      break;

      case 18:
        do {
              printf("\nInsert your numbers (0 to close) ");
                scanf("%d", &numberInput);

            numbersSum += numberInput;
          } while (numberInput != 0);
            printf("\nThe sum of the inputed numbers is: %d\n", numbersSum);
      break;

      case 19:
        printf("Enter numbers (enter 0 to finish):\n");

          while (1) {
            printf("Enter a number: ");
            scanf("%d", &numberEntry1);

            if (numberEntry1 == 0) {
                break;
            }

            if (numberEntry1 % 2 == 0) {
                sumEntry1 += numberEntry1;
                  count++;
              }
          }

          if (count > 0) {
              averageEntry1 = sumEntry1 / (float)count; 
                printf("Average of even numbers entered: %.2f\n", averageEntry1);
          } else {

        printf("No even numbers were entered.\n");
          }
        break;

        case 20:
          do {
              printf("Enter an integer value (0 to finish): ");
                scanf("%d", &numberInserted);

            if (numberInserted != 0) {

        if (numberInserted > max) {
                max = numberInserted;
              }

              if (numberInserted < min) {
                min = numberInserted;
                }
            }

        } while (numberInserted != 0);

          printf("\nThe greatest number entered: %d\n", max);
          printf("The lowest number entered: %d\n", min);
        break;

        case 21:
          printf("\nWhat's your gender? (Male - M | Female - F): ");
              scanf(" %c", &genderInput2);

          if (genderInput2 == 'M') {
            printf("You can enroll at the military enlistment! Welcome!");
          } else if (genderInput2 == 'F') {
              printf("You can't enroll at the miliary enlistment! So sorry!");
          }
        break;

      case 22:
          while (!isValidInput) {
              printf("\nEnter the first real value (between 1 and 100): ");
                scanf("%f", &value1);
              printf("Enter the second real value (between 1 and 100): ");
                scanf("%f", &value2);

            if (value1 >= 1 && value1 <= 100 && value2 >= 1 && value2 <= 100) {
                isValidInput = 1; 
            } else {
                printf("Both values must be between 1 and 100. Please try again.\n");
              }
          }

          float sum = value1 + value2;
            printf("The sum of the two values is: %.2f\n", sum);

        return 0;	
      break;

      case 23:
          printf("Enter a number to calculate its factorial: ");
            scanf("%d", &number);

          for (z = 1; z <= number; z++) {
              factorial *= z;
          }

          printf("The factorial of %d is: ", number);

          for (z = number; z >= 1; z--) {
              printf("%d", z);
            if (z != 1) {
                printf(" * ");
              }
          }

        printf(" = %d\n", factorial);
        break;

        case 24:
          printf("\nEnter the number of volleyball players: ");
              scanf("%d", &numPlayers);

          for (a = 1; a <= numPlayers; a++) {
              printf("Enter height of player %d (in meters): ", a);
                scanf("%f", &playerHeight);

              totalHeight += playerHeight;
          }

            teamAverageHeight = totalHeight / numPlayers;

            printf("The average height of the volleyball team is: %.2f meters\n",

            teamAverageHeight);
          break;

          case 25:	
          printf("Enter the number of participants: ");
            scanf("%d", &numParticipants);

          char names[numParticipants][100];
          int scores[numParticipants];

          printf("Enter the names and scores of the participants:\n");

          for (c = 0; c < numParticipants; c++) {
              printf("\nEnter the name of participant %d: ", c + 1);
                scanf("%s", &names[c][0]);

              printf("Enter the score of participant %d (From 0 to 10): ", c + 1);
                scanf("%d", &scores[c]);

            if (scores[c] > maxScore) {
                maxScore = scores[c];
                  winnerIndex = c;
              }
          }	

          printf("The winner is: %s with a score of %d\n", names[winnerIndex], scores[winnerIndex]);

          break;
    }
    return 0;
  }
