#include <iostream>
#include <string>
using namespace std;
int main()
{
string patt ;

cout<<"Enter pattern : ";

getline(cin,patt);

cout<<'\n';
int i = 1, p = 0;
const int length = patt.size();
int Arry[length];
for (int i=0;i<length;i++)
{Arry[i]=0;
}
while (i < patt.length()) {
while (patt[i] != patt[p] && p > 0) {
p = Arry[p - 1];
}
if (patt[i] == patt[p]) {
Arry[i] = p + 1;
i++;
p++;
} else {
Arry[i] = p;
i++;
}
}
for (int s = 0; s < length; s++) {
cout<<Arry[s];
}
return 0;
}