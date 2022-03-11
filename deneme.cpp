#include <iostream>
using namespace std;
int main()
{
 int sayi1,sayi2,kalan;
 cout<<"Iki Sayi Giriniz:";
 cin>>sayi1;
 cin>>sayi2;
 if(sayi1>=sayi2){
 kalan=sayi1%sayi2;
 cout<<kalan;
 }
 else{
   kalan=sayi2%sayi1;
   cout<<kalan;
 }
}
