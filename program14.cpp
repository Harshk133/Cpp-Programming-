//Write C++ Program which accept one number from user and print that number of even numbers on screen.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n;

cout<<"Enter the Number:\n";
cin>>n;

if(n<=0){
return 0;
}

for(int i=1;i<=n*2;i++){
if(i%2==0){
cout<<" "<<i;
}
}

getch();
return 0;
}