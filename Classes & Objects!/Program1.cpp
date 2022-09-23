//Addition, Substraction, Multiplication and Division Program using classes and Objects.
#include<iostream>
#include<conio.h>
using namespace std;

class calculator{
int a, b;

public:

int addition(){
cout<<"Enter The Two Numbers For Addition:\n";
cin>>a>>b;

cout<<"The Addition of two numbers is "<<(a+b)<<endl;
cout<<"----------------------------------------\n";
return 0;
}

int substraction(){
cout<<"Enter The Two Numbers For Substraction:\n";
cin>>a>>b;

cout<<"The Substraction of two numbers is "<<(a-b)<<endl;
cout<<"----------------------------------------\n";
return 0;
}

int multiplication(){
cout<<"Enter The Two Numbers For Multiplication:\n";
cin>>a>>b;

cout<<"The Multiplication of two numbers is "<<(a*b)<<endl;
cout<<"----------------------------------------\n";
return 0;
}

int division(){
cout<<"Enter The Two Numbers For Division:\n";
cin>>a>>b;

cout<<"The Division of two numbers is "<<(a/b)<<endl;
cout<<"----------------------------------------\n";
return 0;
}

};

int main(){
calculator c;

c.addition();
c.substraction();
c.multiplication();
c.division();

getch();
return 0;
}
