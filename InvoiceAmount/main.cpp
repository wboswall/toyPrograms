#include <iostream>

using namespace std;

int main(void)
{
    double unit, totalOwed;
    cout<<"Please enter the unit.\n";
    cin>>unit;
    if(unit <=0)
	{
		cout<<"Entry error"<<endl;
	}
	else
	{
		totalOwed=unit*5;
		cout<<"You total invoice amount is $"<<totalOwed<<endl;
	}
    return 0;
}
