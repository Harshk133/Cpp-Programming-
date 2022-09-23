//Accept Number From User And Check Whether Number Is Even Or Odd.
#include<iostream>
#include<conio.h>
using namespace std;

class even_odd{
int n;

public:

int decision(){
cout<<"Enter a Number:\n";
cin>>n;

if(n%2 == 0){
cout<<"The Given number is even :)";
}
else{
cout<<"The Given number is odd :(";
}

return 0;
}

};

int main(){
even_odd e;
e.decision();

getch();
return 0;
}