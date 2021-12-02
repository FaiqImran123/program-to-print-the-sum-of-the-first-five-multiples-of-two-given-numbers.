/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int num1;
int num2;
cout<<"Enter the first number:";
cin>>num1;
cout<<"Numbers are: "<<num1<<" "<<num1*2<<" "<<num1*3<<" "<<num1*4<<" "<<num1*5<<endl;
cout<<"Enter the second number: ";
cin>>num2;
cout<<num2<< " "<< num2*2<<" "<<num2*3<<" "<<num2*4<<" "<<num2*5<<endl;

int sum1;
int sum2;
int tot;

sum1 =num1+(num1*2)+(num1*3)+(num1*4)+(num1*5);
sum2 =num2+(num2*2)+(num2*3)+(num2*4)+(num2*5);
tot =sum1+sum2;
cout<<"Total sum of both multiples are: "<<tot;
}
