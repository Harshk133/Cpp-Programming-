#include<iostream>
#include<conio.h>
using namespace std;

class test{

int *p;

public:
test(){
p = new int;
}

void read(){
cout<<"Enter a Number\n";
cin>>*p;
}

void display(){
cout<<"Value = \n"<<*p<<endl; 
}

~test(){
delete p;
cout<<"Destroyed!";
}
};

int main(){
test t;
t.read();
t.display();

getch();
return 0;
}