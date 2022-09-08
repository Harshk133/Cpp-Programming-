//Accept Numbers from User and Display First Number in Second Number of Times.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n1, n2, i;

cout<<"Enter The First Number:\n";
cin>>n1;

cout<<"Enter The Second Number:\n";
cin>>n2;

for(i=0;i<n2;i++){
cout<<n1<<endl;
}

getch();
return 0;
}