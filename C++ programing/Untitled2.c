#include <stdio.h>

// Declare enum for day types
enum DayType { WORKING_DAY, HOLIDAY };

int main() {
  enum DayType day;
  int dayNum;

  // Prompt user to enter day number
  printf("Enter day number (1-7): ");
  scanf("%d", &dayNum);

  // Determine day type based on day number
  switch (dayNum) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      day = WORKING_DAY;
      break;
    case 6:
    case 7:
      day = HOLIDAY;
      break;
    default:
      printf("Invalid day number\n");
      return 1;
  }

  // Print day type to console
  switch (day) {
    case WORKING_DAY:
      printf("Day %d is a working day\n", dayNum);
      break;
    case HOLIDAY:
      printf("Day %d is a holiday\n", dayNum);
      break;
  }

  return 0;
}
