#include<iostream>
#include<conio.h>
using namespace std;

class Square{
int n;

public:

int square(){
cout<<"Enter A Number to show its square:\n";
cin>>n;

if(n == 0){
cout<<"Sorry :(\n";
cout<<"Zero is Unacceptable!!\n";
cout<<"----------------------\n";
cout<<"Enter A Number to show its square:\n";
cin>>n;
}

cout<<"The Square of "<<n<<" Number is "<<(n * n);

return 0;
}
};

int main(){
Square s;
s.square();

getch();
return 0;
}