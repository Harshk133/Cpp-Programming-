//Accept Number From User And Check Whether Number Is Even Or Odd.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n;

cout<<"Enter A Number:\n";
cin>>n;

if(n%2 == 0){
cout<<"The Number is Even!";
}
else{
cout<<"The Number is Odd!";
}

getch();
return 0;
}