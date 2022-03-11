#include <iostream>
using namespace std;

int ders_toplami(int notlar[5])
{
    int toplam;
for(int i=0;i<5;i++){
    if(notlar[i]>0){
        toplam+=notlar[i];
    }
    else{
     toplam=toplam;
    }
}
return toplam;
}

int main()
{
int notlar[5]={100,50,80,60,70};
int toplam;
cout<<ders_toplami(notlar);
}
