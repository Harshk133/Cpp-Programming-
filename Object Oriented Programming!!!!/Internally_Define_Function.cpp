#include<iostream>
#include<conio.h>
using namespace std;

class circle{
float r, a;
public:
void read(){
cout<<"Enter the Radius:\n";
cin>>r;
}

void compute(){
a = 3.14 * r * r;
}

void display(){
cout<<"Area = "<<a;
}

};

int main(){
circle c;
c.read();
c.compute();
c.display();

getch();
return 0;
}




