//Accept number from user and check whether that number is divisible by 3 and 5.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n;

cout<<"Enter The Number:\n";
cin>>n;

if(((n%3)==0) && ((n%5)==0)){
cout<<"Number is divisible by 3 and 5!\n";
}
else{
cout<<"Number is not divisible by 3 and 5 :(\n";
}

getch();
return 0;
}