//Write C++ Program which accept one number from user and print that number of even numbers on screen using the concept of classes and objects.
#include<iostream>
#include<conio.h>
using namespace std;

class PrintNumber{
int n;

public:

int func(){
cout<<"Enter the Number:\n";
cin>>n;

if(n<=0){
return 0;
}

for(int i=1; i<=n*2; i++){
if(i%2 == 0){
cout<<" "<<i;
}
}
return 0;
}

};

int main(){
PrintNumber p;
p.func();

getch();
return 0;
}