#include<iostream>
#include<conio.h>
using namespace std;

class circle{
float r, a;
public:
circle(float x){
r = x;
}
void compute();
void display();

};

inline void circle::compute(){
a = 3.14*r*r;
}

inline void circle::display(){
cout<<"Area = "<<a;
}

int main(){
float p;
cout<<"Enter the radius of the cirlce: \n";
cin>>p;

circle c(p);
c.compute();
c.display();

getch();
return 0;
}