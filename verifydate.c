#include<stdio.h> //library
int isValidDate(int day, int month, int year) {
  //Function for date validation
  int max_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Array to store the number of days in each month
  //range for day, month and year
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    max_days[2] = 29;
  }
  if (year >= 0 && month >=1 && month <=12 && day>=1 && day <= max_days[month]) {
    return 1; //valid date
  } else {
    return 0; //Invalid date
  }
}

//main function to test the above function
int main() {
  int day, month, year;
  printf("Enter Date (DD MM YYYY): "); //user input
  scanf("%d %d %d", &day, &month, &year);
  //condition to print valid date or not
  if (isValidDate(day,month,year)) {
    printf("Valid date \n");
  } else {
    printf("Invalid date \n");
  }
  return 0;
}