/*	Created on: 31 Nov 2016
	Revised Date:
	Project Name: Party On Co.
    Description: Calculates and displays the total cost.
	Coded by: WB
*/
#include <iostream>
using namespace std;
int main()
{
    //declare variables
    double cupPrice=0.0;
    double platePrice=0.0;
    double cupsPurchased=0.0;
    double platesPurchased=0.0;
    double salesTaxRate=0.0;
    double subTotal=0.0;
    double totalCupsCost=0.0;
    double totalPlatesCost=0.0;
    double totalCost=0.0;
    //get input
    cout<<"cup price: "<<endl;
    cin>>cupPrice;
    cout<<"plate price: "<<endl;
    cin>>platePrice;
    cout<<"cups purchased: "<<endl;
    cin>>cupsPurchased;
    cout<<"plates purchased: "<<endl;
    cin>>platesPurchased;
    cout<<"sales tax rate: "<<endl;
    cin>>salesTaxRate;
    //calculate totalCupCost and TotalPlatesCost
    totalCupsCost=cupsPurchased*cupPrice;
    totalPlatesCost=platesPurchased*platePrice;
    subTotal=(totalCupsCost + totalPlatesCost)*(salesTaxRate);
    totalCost=subTotal+salesTaxRate;
    //display totalCost
    cout<<"Total Cost is: $"<<totalCost<<endl;    
    system("pause");
	return 0;
