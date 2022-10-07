// Write a program to calculate volume of sphere using multi level inheritance. The base class function will accept the radius from user. A class will be derived from the above mentioned class that will have a function to find the area of a circle and another class derived from this will have functions to calculate and display the volume of the sphere.

#include<iostream>
#include<conio.h>
using namespace std;

class Data{

protected:
float r;

public:
void read(){
cout<<"Enter the radius of circle:\n";
cin>>r;
}
};

class Area: public Data{

protected:

float area;

public:
void compute(){
area = 3.14*r*r;
}

};

class Volume: public Area{

private:
float volume;

public:
void calculate(){
volume = 4*area*r/3;
}

void display(){
cout<<"The volume of the sphere is "<<volume;
}
};

int main(){

Volume v;
v.read();
v.compute();
v.calculate();
v.display();

getch();
return 0;
}