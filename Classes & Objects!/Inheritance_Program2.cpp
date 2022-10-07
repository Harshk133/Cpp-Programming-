// Program Write a program to implement single inheritance from following accept and display the data for one table.

#include<iostream>
#include<conio.h>
using namespace std;

class Furniture{
protected:
char material[20];
int price;

};

class Table: public Furniture{
private:
int height, area;

public:
void accept(){
cout<<"Enter Material, price, height and area:\n";
cin>>material>>price>>height>>area;
}

void display(){
cout<<"Material:"<<material<<"\nPrice:"<<price<<"\nHeight: "<<height<<"\nArea:"<<area;

}

};

int main(){
Table t;
t.accept();
t.display();

getch();
return 0;
}