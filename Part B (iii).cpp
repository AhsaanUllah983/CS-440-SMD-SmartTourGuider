#include<iostream>
#include <sstream>#include <string>
using namespace std;
int main()
{
string txt,P;
int E1,E2,Patte;
int m,hits=0;
cout<<"Enter the text : ";
cin>>txt;
cout<<endl;
cout<<"Enter Pattern : ";
cin>>P;
cout<<endl;
cout<<"Enter the modulo : ";
cin>>m;
cout<<endl;
E1=P[0]-48;
E2=P[1]-48;
Patte=E1*10+E2;
for(int i=0;i<txt.size()-1;i++){
E1=txt[i]-48;
E2=txt[i+1]-48;
if(((E1*10+E2)%m)==Patte%m)
{
hits++;
}
}
cout<<hits;
return 0;}