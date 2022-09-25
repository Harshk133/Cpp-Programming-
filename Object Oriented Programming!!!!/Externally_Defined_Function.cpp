//Externally_Defined_Function
#include<iostream>
#include<conio.h>
using namespace std;

class circle{
float r, a;
public:
void read();
void compute();
void display();
};

void circle::read(){
cout<<"Enter the Radius:\n";
cin>>r;
}

void circle::compute(){
a = 3.14 * r * r;
}

void circle::display(){
cout<<"Area = "<<a;
}

int main(){
circle c;
c.read();
c.compute();
c.display();

getch();
return 0;
}