//Write A Program To Find the Factorial Of a Number.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int i, n, fact;

cout<<"Enter a Number:\n";
cin>>n;

for(i=1,fact=1;i<=n;i++){
fact=fact*i; //Logic
}

cout<<"The Factorial of give Number "<<n<<" is "<<fact<<endl;

getch();
return 0;
}