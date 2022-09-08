//Accept A Number From User And Print That Number of times Stars (*) on Screen.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int n;

cout<<"Enter the Number Want To Print * On Screen:\n";
cin>>n;

for(int i=1;i<=n;i++){
cout<<"*";
}

getch();
return 0;
}