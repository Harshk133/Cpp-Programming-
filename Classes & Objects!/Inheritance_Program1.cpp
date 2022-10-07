// Write a Program to find area of circe using single inheritance such that the base class function must accept the radius from the user and the derived class function must calculate and display the area. 

#include<iostream>
#include<conio.h>
using namespace std;

class Data{

protected:
int r;

public:
void read(){
cout<<"Enter the radius\n";
cin>>r;
}

};

class Area: public Data{

private:
float result;

public:
void compute(){
result = 3.14*r*r;
}

void display(){
cout<<"The area of the circle is "<<result;
}
};

int main(){
Area a;
a.read();
a.compute();
a.display();

getch();
return 0;
}