//Accept One Number From User if Number is Less Than 10 Then Print "Hello" Otherwise "Demo" using classes & objects!
#include<iostream>
#include<conio.h>
using namespace std;

class condition{
int n;

public:

void read(){
cout<<"Enter a number:\n";
cin>>n;

if(n<10){
cout<<"Hello";
}
else{
cout<<"Demo";
}
}

};

int main(){
condition c;
c.read();

getch();
return 0;
}

