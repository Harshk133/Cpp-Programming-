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