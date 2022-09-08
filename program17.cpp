//Write A C++ Program which Accept Number From User and Display All its non-factors.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n;
int sum=0;

cout<<"Enter The Number:\n";
cin>>n;

if(n<=0){
n=-n;
}

for(int i=1;i<=n;i++){
if(n%i!=0){
cout<<" "<<i;
sum=sum+i;
}
}
cout<<"\nAddition is: "<<sum;

getch();
return 0;
}