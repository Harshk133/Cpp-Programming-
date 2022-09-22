#include<iostream>
#include<conio.h>
using namespace std;

class Interest{
private:
static float rate;
float principal, duration, sim_int;

public:
void accept(){
cout<<"Enter Principal amount and duration:\n";
cin>>principal>>duration;
}

void calculate(){
sim_int = principal * rate * duration / 100;
}

void display(){
cout<<"Simple Interest = "<<sim_int;
}

};

float Interest::rate = 10;


int main(){
Interest i;
i.accept();
i.calculate();
i.display();

getch();
return 0;
}