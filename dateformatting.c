#include<stdio.h>
#include<time.h>

//Functioin converts number to words'
const char* getMonthName(int month) {
  const char* monthNames[] = {"January", "February", "March", "April", "May", "June", "july", "August", "September", "October", "November", "December"};
  
  if (month>=1 && month <=12) {
    return monthNames[month - 1];
  } else {
    return "enter valid month";
  }
}

int main() {
  //main function to store data
  int day, month, year;

  //user input
  printf("Enter the date (format: DD MM YYYY): ");

  //reading user input
  scanf("%d %d %d", &day, &month, &year);

  //input date validating using condition
  if (month < 1 || month > 12 || day < 1 || day > 31 || year < 0) {
    printf("Date is Invalid. \n");
    return 1; 
  }

  printf("Date is: %s %d, %d\n", getMonthName(month), day, year);
  return 0;
}