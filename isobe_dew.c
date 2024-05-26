// Programmer Name: Jennifer Isobe 
// Program Name: Extra Credit Dew Point Calculator Program
// Date: 05/07/2024

#include <stdio.h>

int main(void) {

  // Declare and initialize variables
  float DewPoint = 0.0;
  float AirTemperature = 0.0;
  float RelativeHumidity =0.0;

  // Introduction and instructions for program
  printf("It is another hot Oklahoma summer!\n");
  printf("\nWelcome to the Dew Point Calculator Program.\n");
  printf("\nDew point directly coorelates to how comfortable it is outside.\n");

  // Get current temp from user
  printf("\nPlease enter current tempurature in Degree Fahrenheit (example 81.0): ");
  scanf("%f", &AirTemperature);

  // Get current humidity from user
  printf("\nPlease enter current relative humidity percentage (example 84.0): ");
  scanf("%f", &RelativeHumidity);

  // Calculate dew point
  DewPoint = AirTemperature - ((100 - RelativeHumidity)/5);

  printf("\nThe dew point is %f fahrenheit.", DewPoint);


}