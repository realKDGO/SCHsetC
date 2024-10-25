//School Lab Activity SET C if-else
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
 void menu() {
  printf("\n<------CHOOSE PROBLEM------>\n");
  printf("|1. Problem 1              |\n");
  printf("|2. Problem 2              |\n");
  printf("|3. Problem 3              |\n");
  printf("|4. Exit                   |\n");
  printf("|--------------------------|\n");
  printf(" Choose a problem: ");
}
//Problem 1.
 void prob1() {
  int age;
  float height;
  clrscr();

  printf("Enter your age: ");
  scanf("%d",&age);
  printf("Enter your height: ");
  scanf("%f",&height);

  if(age > 18 && height > 180.00) {
    printf("\nYou are eligible for the basketball team.\n");
} else {
    printf("\nYou are not eligible for the basketball team.\n");
 }
}

//Problem 2.
 void prob2() {
  int age;
  char job;
  clrscr();

  printf("Enter your age: ");
  scanf("%d",&age);
  printf("Do you have a job? (Y/N): ");
  scanf(" %c",&job);

  job=toupper(job);

  if(age >= 18 && age <= 65 && job == 'Y') {
    printf("\nYou are eligible for a loan.\n");
} else {
    printf("\nYou are not eligible for a loan.\n");
 }
}

//Problem 3.
 void prob3() {
  int choice;
  float farh, kel, cel;
  clrscr();

  printf("Enter temperature in Fahrenheit: ");
  scanf("%f",&farh);
  printf("Enter 1 to convert into Celsius or 2 to convert into Kelvin: ");
  scanf("%d",&choice);

  if(choice == 1) {
    cel=(farh - 32)*5.0/9.0;
    printf("\nThe temperature in Celsius is: %.2f\n",cel);
} else if(choice == 2) {
    kel=(farh + 459.67)*5/9;
    printf("\nThe temperature in Kelvin is: %.2f\n",kel);
} else {
    printf("\nError: Invalid Choice!\n");
 }
}

 void clrIB() {
  char ch;
  while((ch == getchar()) != '\n' && ch != EOF);
 }

 int main() {
  int option;
  clrscr();

  do{
   menu();
   if(scanf("%d",&option) != 1) {
    clrscr();
    printf("Error: Invalid Input! Letters, Strings, & Special Characters Are Not Allowed.\n");
    clrIB();
    continue;
  }

   switch(option) {
    case 1:
     prob1();
     break;
    case 2:
     prob2();
     break;
    case 3:
     prob3();
     break;
    case 4:
     printf("\nThank You! Goodbye.");
     sleep(2);
     printf("\nProgram Exiting...");
     sleep(1);
     break;
    default:
     clrscr();
     printf("Error: Invalid Option! Please Choose Between (1, 2, 3, & 4)\n");
 }
} while(option != 4);

 return 0;
}