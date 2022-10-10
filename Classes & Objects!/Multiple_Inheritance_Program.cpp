#include<iostream>
#include<conio.h>
using namespace std;

class Polygon{

protected:
int height, width;

public:
void read(int a, int b){
height = a;
width = b;
}

};

class Output{

public:
void output(int x){
cout<<"Area is "<<x;
}

};

class Rectangle: public Polygon, public Output{

public:
int area(){
return (height * width);
}
};

class Triangle: public Polygon, public Output{

public:
int area(){
return (height * width / 2);
}

};

int main(){

int h, w, choice, a;

cout<<"1. Area Of Rectangle\n2. Area of Triangle \nEnter your choice:";
cin>>choice;
cout<<"Enter height and width:";
cin>>h>>w;

switch(choice){
case 1:
Rectangle r;
r.read(h, w);
a = r.area();
r.output(a);
break;

case 2:
Triangle t;
t.read(h,w);
a = t.area();
t.output(a);
break;
default: cout<<"Invalid Choice";
}

getch();
return 0;
}


