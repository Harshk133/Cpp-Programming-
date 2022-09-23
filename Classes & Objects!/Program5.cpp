//Write A Program To Find the Factorial Of a Number using Concept of Classes and Objects.
#include<iostream>
#include<conio.h>
using namespace std;

class Factorial{
int n, fact, i;

public:

int factorial(){
cout<<"Enter a Number to show its factorial:\n";
cin>>n;

//Logic
for(i=1, fact=1; i<=n; i++){
fact = fact*i;
}

cout<<"The Factorial of give Number "<<n<<" is "<<fact<<endl;


return 0;
}
};

int main(){
Factorial f;
f.factorial();

getch();
return 0;
}