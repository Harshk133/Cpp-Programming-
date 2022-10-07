// Program: Write a program to add two numbers using single inheritance such that the base class function must accept the two numbers from the user and the derived class function must add these numbers and display the sum.

#include<iostream>
#include<conio.h>
using namespace std;

class Data{

protected:
int a, b;

public:

void read(){
cout<<"Enter the two number:\n";
cin>>a>>b;
}

};

class Sum: public Data{

private:
int sum;

public:

void add(){
sum = a + b;
}

void display(){
cout<<"The Sum is "<<sum;
}

};

int main(){
Sum s;
s.read();
s.add();
s.display();

getch();
return 0;
}
