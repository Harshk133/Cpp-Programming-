#include<iostream>
#include<conio.h>
using namespace std;

class calculator{
int a,b;

public:

void read(){
cout<<"HELLO TO CALCULATOR PROGRAM!\n";
cout<<"Enter the Two Numbers instead of \'0\'"<<endl;
cin>>a>>b;
}

void addition(){
cout<<"The Addition of two number is "<<(a+b)<<endl;
}

void substraction(){
cout<<"The Substraction of two number is "<<(a-b)<<endl;
}

void multiplication(){
cout<<"The Multiplication of two number is "<<(a*b)<<endl;
}

void division(){
cout<<"The Division of two number is "<<(a/b)<<endl;
}
};

int main(){
calculator c;
c.read();
c.addition();
c.substraction();
c.multiplication();
c.division();

getch();
return 0;
}