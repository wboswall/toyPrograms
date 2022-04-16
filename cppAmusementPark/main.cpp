#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int age;
    const double PARK_TICKET = 200.00;
    const double couponAdmission=15.00;
    char coupond;
    double discountPrice=0.00;
    cout<<"Enter apge of person\n";
    cin>>age;
    while(age!=0)
    {
		if (age<15)
		{
			cout<<"You are too young to learn C++ "<<endl;
		}
		else (age >=15);
		{
			cout<<"Do you have a coupon? Enter Y or N  "<<endl;
			cin>>coupond;
		}
		if(toupper(coupond)=='Y')
		{
			discountPrice=PARK_TICKET-couponAdmission;
			cout<<"The discount Price is " <<discountPrice<<endl;
		}
		else
		{
			cout<<"The price for admission is " <<PARK_TICKET<<endl;
		}
		cout<<"Enter age of person\n";
		cin>>age;
	}//end while

	cin.get();
    return 0;
}
