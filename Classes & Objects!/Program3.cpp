#include<iostream>
#include<conio.h>
using namespace std;

class printJayGanesh{
int n;

public:

int jayganesh(){
cout<<"---------------------\n";
cout<<"-Jay-Ganesh-Program!-\n";
cout<<"---------------------\n";
cout<<endl;

cout<<"Enter the Number Want to print \'Jay Ganesh\' On the Screen:\n";
cin>>n;

for(int i=1; i<=n; i++){
cout<<"-------------\n";
cout<<"-Jay-Ganesh--\n";
cout<<"-------------\n";
cout<<"\n";
}

return 0;
}
};

int main(){
printJayGanesh G;
G.jayganesh();

getch();
return 0;
}