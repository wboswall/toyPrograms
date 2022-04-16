#include <cstdlib>
#include <iostream>

using namespace std;
//chapter 2 
//function declaration
int DemoConsoleOutput();
int main(int argc, char *argv[])
{
    cout<<"Hello World!\n";
    cout << "Press the enter key to continue ...";
    //chapter 1
    int x=8; int y=6; cout<<endl;
    cout<<x-y<<" "<<x*y<<" "<<x+y;cout<<endl;
    cout<<"Hello Buggy World\n";
    //chapter 2
    //preprocessor directive that includes header iostream
    //start of your program: function block main()
    /*Write to the screen */
    cout<<"Hello World"<<endl;
    //call i.e. invoke the funciton
    DemoConsoleOutput();
    //declar a variable to store an integer
    int InputNumber;
    cout<<"enter an integer: ";
    //store integer given user input
    cin>>InputNumber;
    //The same with text i.e. string data
    cout<<"Enter your name: ";
    string InputName;
    cin>>InputName;
    cout<<InputName <<" entered "<<InputNumber<<endl;
    //return a value to the OS    
    cin.get();
    cin.get();
    return EXIT_SUCCESS;
}
//function definition
int DemoConsoleOutput()
{
    cout<<"This is a simple string literal"<<endl;
    cout<<"Writing number five: "<<5<<endl;
    cout<<"Performing division 10/5= "<<10/5<<endl;
    cout<<"Pi when approximated is 22/7= "<<22/7<<endl;
    cout<<"Pi more accurately is 22/7 = "<<22.0/7<<endl;
    cout<<"Performing subtraction 10-5="<<10-5<<endl;
    cout<<"Performing multiplication 10*5="<<10*5<<endl;
    return 0;
}
