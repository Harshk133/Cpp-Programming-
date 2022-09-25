#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n, birth, Month_number, Adding_five, Multiplying_by_five, answer_zero, add_birth;

cout<<"Enter Your Birthday Month:\n";
cin>>n;
cout<<endl;

cout<<"Enter your birthday date:\n";
cin>>birth;

Month_number = (n * n);
Adding_five = Month_number + 5;
Multiplying_by_five = Adding_five * 5;
answer_zero = Multiplying_by_five + 0;
add_birth = answer_zero + birth;

cout<<answer_zero + birth;

getch();
return 0;
}