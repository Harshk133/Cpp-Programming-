//Write a Program to declare a class mobile having data members as price and model number. Accept and display this data for ten objects.
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Mobile{
private:
char model[20];
int price;

public:
void accept(){
cout<<"Enter model name and price:\n";
cin>>model>>price;
}

void display(){
cout<<model<<"\t"<<price<<"\n";
}

};

int main(){
int i;
Mobile s[10];

for(i=0; i<=9; i++){
s[i].accept();
}

cout<<"Model\tprice\n";

for(i=0; i<=9; i++){
s[i].display();
}

getch();
return 0;
}