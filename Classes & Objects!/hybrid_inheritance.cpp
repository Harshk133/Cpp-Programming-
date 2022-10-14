//Programmer ~ Harsh Moreshwar Kale
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Student{
protected:
char name[20];
int roll_no;
};

class Test: public Student{
protected:
int marks;

public:
void read(){
cout<<"Enter the Name, Roll Number & Marks Obtained:\n";
gets(name);
cin>>roll_no>>marks;
}
};

class Sports{
protected:
int score;

public:
void read(){
cout<<"1.Student has won in National Sports event\n2. Student has not won in any national sports event\nEnter YOur Choice:";
cin>>score;
}
};

class Result: public Test, public Sports{
int total;

public:
void calculate(){
if(score == 1)
total = marks + 15;
else
total = marks;
}

void display(){
cout<<"The total is "<<total;
}
};

int main(){
Result r;
r.Test::read();
r.Sports::read();
r.calculate();
r.display();

getch();
return 0;
}






