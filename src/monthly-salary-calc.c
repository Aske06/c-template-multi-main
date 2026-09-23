#include <stdio.h>

int STD_WORK_WEEK = 37;
double WEEKS_PER_HOURS = 30.00 / 7.00;
double OVERTIME_RATE = 1.5;

int main() {
  int workedHours;
  double hourlyRate, monthlySalary;

  // Initial input (unless -1 on EITHER)
  puts("<<Enter -1 to end program>>\nEnter number of worked hours: ");
  scanf("%d", &workedHours);
  puts("\nEnter hourly rate: ");
  scanf("%lf", &hourlyRate);

  while (workedHours != -1 && hourlyRate != -1) {
    // Calculate montly salary
    if (workedHours > STD_WORK_WEEK) { // If more than 37 hour work weeks
      monthlySalary =
          (STD_WORK_WEEK + (workedHours - STD_WORK_WEEK) * OVERTIME_RATE) *
          hourlyRate * WEEKS_PER_HOURS;

    } else { // if standard 37 hour work week
      monthlySalary = workedHours * hourlyRate * WEEKS_PER_HOURS;
    }
    // print calculated salary
    printf("\nMonthly salary is: %.2f\n\n", monthlySalary);

    // Repeat input and calculation
    puts("Enter number of worked hours: ");
    scanf("%d", &workedHours);
    puts("\nEnter hourly rate: ");
    scanf("%lf", &hourlyRate);
  }
}