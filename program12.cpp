//Accept One Number From User if Number is Less Than 10 Then Print "Hello" Otherwise "Demo".
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n;

cout<<"Enter a Number:\n";
cin>>n;

if(n <= 10){
cout<<"HELLO WORLD!";
}
else{
cout<<"DEMO";
}

getch();
return 0;
}