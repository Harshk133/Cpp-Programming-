//Accept number from user and return the addition of all numbers till that number.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n;
int sum = 0;
int i = 0;

cout<<"Enter The Number:\n";
cin>>n;

//Filter
if(n == 0){
return 0;
}

//Filter (if the number is negative then it become positive.)
if(n<0){
n = -n;
}
// 1 2 3 
for(i=1;i<=n;i++){
sum = sum + i;
}
cout<<sum;

getch();
return 0;
}