//Write A Program which Accept Number from User And Print Even Factors of that Number.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n;

cout<<"Enter The Number:\n";
cin>>n;

if(n<=0){
n=-n;
}

for(int i=1;i<=n/2;i++){
if(i%2==0&&n%i==0){
cout<<" "<<i;
}
}

getch();
return 0;
}