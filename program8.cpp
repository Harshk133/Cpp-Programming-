//Write C++ Program to Swap Two Numbers.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int a, b, temp;

cout<<"Enter the First Number:\n";
cin>>a;

cout<<"Enter the Second Number:\n";
cin>>b;

//Logic
temp = a;
a = b;
b = temp;

cout<<"After Swapping The Value a = "<<a<<" and b = "<<b;


getch();
return 0;
}