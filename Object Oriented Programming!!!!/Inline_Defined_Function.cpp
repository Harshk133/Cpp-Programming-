//Inline Defined Function
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

inline void circle::read(){
cout<<"Enter Radius:\n";
cin>>r;
}

inline void circle::compute(){
a = 3.14 * r * r;
}

inline void circle::display(){
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