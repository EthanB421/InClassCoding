/*#include <stdio.h>
create four different float variables: salad, soup, sandwich, pizza
create another float variable: tax (7.25%)
create another float varaible: tip (15%)
Main method is going to be of type float*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float salad = 9.95;
float soup = 4.55;
float sandwich = 13.25;
float pizza = 22.35;
float tax;
float tip;
float totalCost;
float tempVar;
time_t t;
int main(){
    srand((unsigned) time(&t));
    int randInt = rand() % 4;
printf("What percent of tax is added in your area?");
scanf("%f", &tax);
tax++;
printf("What percent of tip would you like to give?");
scanf("%f", &tip);
tip++;
if (randInt==0){
  totalCost = salad * tax;
  tempVar = salad * tip;
  totalCost = totalCost + tempVar - 9.95;
printf("Your salad cost $9.95, %.2f percent will be multiplied to the cost of the salad, %.2f percent will also be multiplied to the cost of the salad for tip. Your total is going to be %.2f", tax, tip, totalCost );
}else if(randInt==1){
  totalCost = soup * tax;
  tempVar = soup * tip;
  totalCost = totalCost + tempVar - 4.55;
  printf("Your soup cost $4.55, %.2f percent will be multiplied to the cost of the soup, %.2f percent will also be multiplied to the cost of the soup for tip. Your total is going to be %.2f", tax, tip, totalCost);  
}else if(randInt==2){
  totalCost = sandwich * tax;
  tempVar = sandwich * tip;
  totalCost = totalCost + tempVar - 13.25;
  printf("Your sandwich cost $13.25, %.2f percent will be multiplied to the cost of the sandwich, %.2f percent will also be multiplied to the cost of the sandwich for tip. Your total is going to be %.2f", tax, tip, totalCost);
}else{
  totalCost = pizza * tax;
  tempVar = pizza * tip;
  totalCost = totalCost + tempVar - 22.35;
  printf("Your pizza cost $22.35, %.2f percent will be multiplied to the cost of the pizza, %.2f percent will also be multiplied to the cost of the pizza for tip. Your total is going to be %.2f", tax, tip, totalCost);    
}
return 0;
}

