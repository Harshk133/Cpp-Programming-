// Write a program to calculate percentage of a student using multilevel inheritance. The base class function will accept the marks in three subjects from user. A class will be derived from the above mentioned class that will have a function to find the total marks obtained and another class derived from this will have functions to calculate and display the percentage scored.

#include<iostream>
#include<conio.h>
using namespace std;

class Data{

protected:
int p, c, m;

public:
void read(){
cout<<"Enter the marks obtained in Physics, Chemistry & Maths:\n";
cin>>p>>c>>m;
}

};

class Sum: public Data{

protected:
int total;

public:
void sum(){
total = p + c + m;
}
};

class Percent: public Sum{

private:
float percent;

public:
void calculate(){
percent = total/300.0*100;
}

void display(){
cout<<"The Percentage is "<<percent;
}
};

int main(){

Percent a;
a.read();
a.sum();
a.calculate();
a.display();


getch();
return 0;
}