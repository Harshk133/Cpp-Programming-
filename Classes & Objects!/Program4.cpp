//Write a program for swaping the two number using classes and objects!
#include<iostream>
#include<conio.h>
using namespace std;

class swapNumbers{
int a, b, temp;

public:

int swap(){
cout<<"Enter The First Number:\n";
cin>>a;
cout<<endl;

cout<<"Enter The Second Number:\n";
cin>>b;
cout<<endl;

//Logic
temp = a;
a = b;
b = temp;

cout<<"The Swaping of first number a & second number b is "<<a<<" "<<b<<endl;

return 0;
}

};

int main(){
swapNumbers s;
s.swap();

getch();
return 0;
}