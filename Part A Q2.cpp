#include<string>
#include<string.h>
#include<iostream>
using namespace std;
void NAlg(char* , char* ,int,int ) ;
int main()
{
char OrigStr[1000]="World-Is-Like-A-Dream";
char Patter[1000]="Is";
int StrLen = strlen(OrigStr);
int PtrLen=strlen(Patter);
NAlg(OrigStr,Patter,StrLen,PtrLen );
return 0;
}
void NAlg(char* OrigStr, char* Patter,int StrLen,int PtrLen )
{
int integernumber=0;
while(integernumber<=StrLen-PtrLen)
{
int p;
for ( p = 0; p < PtrLen; p++)
{
if ( OrigStr[p + integernumber] !=Patter [p])
{
break;
}
}
if (p == PtrLen)
{
cout << "Matches At : " <<integernumber<< endl;
integernumber= integernumber + PtrLen;
} else if(p==0)
{
integernumber=integernumber+1;
}
else
{integernumber=integernumber+p;
}
}
}