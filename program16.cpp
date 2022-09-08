//Write a Program Which Accept Number from user and display its factor i decreasing order.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n;

cout<<"Enter the Number:\n";
cin>>n;

if(n<=0){
n=-n;
for(int i=n/2;i>=1;i--){
if(n%i==0){
cout<<" "<<i;
}
}
}

getch();
return 0;
}