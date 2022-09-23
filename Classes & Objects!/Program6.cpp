////Accept A Number From User And Print That Number of times Stars (*) on Screen by using classes and objects.
#include<iostream>
#include<conio.h>
using namespace std;

class Star{
int i, n;

public:

int star(){
cout<<"Enter a Number to print star (*) on the screen:\n";
cin>>n;
cout<<endl;

for(i=0; i<n; i++)
cout<<"*";
return 0;
}
};

int main(){
Star s;
s.star();

getch();
return 0;
}