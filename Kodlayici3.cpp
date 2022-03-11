#include <iostream>

using namespace std;

int main()
{
int sayi;
int asal=1;
cout << "Sayi giriniz =";
cin>>sayi;
for(int i=2;i<sayi;i++)
{
if(sayi%i==0)
{
asal=0;
break;
}
}
cout<<asal;

return 0;
}
