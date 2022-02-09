/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() { //main program begins program execution

  float distance, extraDis, total; //assing variables
  
  printf("Please enter the distance : "); //promt
  scanf("%f", &distance); //read

  if(distance <= 30)
  {
    total = distance * 50; //calculation
  }
  else
    {
    extraDis = distance - 30 ; //calculation
    total= 30 * 50 + extraDis * 40; //calculation
    }
  printf("Total price is : Rs.%.2f", total); //print total
  
  return 0;
}
