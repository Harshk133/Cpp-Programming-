#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n1, n2;

cout<<"Enter The First Number:\n";
cin>>n1;

cout<<"Enter The Second Number:\n";
cin>>n2;

if((n1 % n2) == 0){
cout<<"Number is Divisible\n";
}
else{
cout<<"Number is Not Divisible!\n";
}

getch();
return 0;
}