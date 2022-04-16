/*
 *Program Name: Menu On The Go
 *Purpose: Point of sales that replaces order tickets and displays the orders in a text file
   so they can be displayed in the kitchen.
 *Date Created: 04/04/22
 *Date Modified: 04/15/22, 04/05/22 
 *Location Programmed: PEI, Canada
 *Version: 1.0.0.0
 *Compatible Operating Systems: Windows and Linux
 *Programming Language used: C Language
 *Date Released: 04/05/22
 *Programmed by: William EB Boswall
 *Licensed under the MIT License.  
 *People who have contributed to make this software better: 
 *This header must stay intact where ever this repository goes to.  
 */
 
 /*
  *Standard C libraries
 */
 #include <stdio.h>
 #include <string.h>
 
 /*
  * Custom Headers
  */
  
  /*
   *Declarations
   */
   char mealChoice[100];
   double total = 0;
   double subTotal = 0;
   double mealCost = 0;
   const double HST = .15;
   const double ECO_DEPOSIT = .10;
   //double mealCost = 0;
   
   //void calcTotal();
   //void displayMenu(void);
   //double getOrder();
   
  int main(int argc, char *argv[])
  {
  	   printf("There is one size of hot/cold beverage: 435ml\n\n");
	   printf("Choices for hot beverages are: tea, cappachino, coffee\n\n");
	   printf("Choices for cold beverages are: orange juice, milk, chocolate milk, bottled water\n\n");
	   printf("Food choices for Breakfast: eggs, ham, bacon, toast with jam, and hasbrowns");
	   printf("Food choices for Lunch: Pizza, lasagna, mac n cheese with bacon\n\n");
	   printf("Food Choices for Dinner: Fish n' chips, sub with onion rings, fries, poutine, shephards pie, chicken alfredo \n\n");
	   printf("Prices for Breakfast: $12.50, Lunch: $15.00 and Dinner $35.00\n");
	   printf("Enter the customer's choice of Meal \n\n");
	   gets(mealChoice);
	   printf("Enter the cost of meal: \n");
	   scanf("%d", &mealCost);
	   subTotal = mealCost + (mealCost * HST);
	   total = subTotal + ECO_DEPOSIT;
	   printf("\nYour order:  %s", mealChoice, "\n");
	   printf("\nTotal cost:  %d", total, "\n");
   	   printf("\nThank you for your support!\n");
	   printf("Come again! \n");
	   
	  return 0;
  }
  
  /*
    * Custom Functions  
    */
		
