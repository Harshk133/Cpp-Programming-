//Accept Numbers from User and Display First Number in Second Number of Times using classes and objects.
#include<iostream>
#include<conio.h>
using namespace std;

class DisplayingNumber{
int n1, n2, i;

public:

int displayNumber(){
cout<<"Enter the First Number:\n";
cin>>n1;
cout<<endl;

cout<<"Enter the Second Number:\n";
cin>>n2;

for(i=0; i<n2; i++)
cout<<n1;

return 0;
}

};

int main(){
DisplayingNumber d;
d.displayNumber();

getch();
return 0;
}