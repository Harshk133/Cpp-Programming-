#include<iostream>
#include<conio.h>
using namespace std;

class hello{

public:
hello(){
cout<<"Hi I am Constructor!\n";
}

void function1(){
cout<<"Jay Ganesh!\n";
}

void function2(){
cout<<"Harsh Moreshwar Kale the Software Engineer!\n";
}

};

int main(){

hello h;
h.function1();
h.function2();

getch();
return 0;
}