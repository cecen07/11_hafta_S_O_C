#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
    char s1[]= "Dünya";
    char s2[]= "Dünya";

    int sonuc=strcmp(s1,s2);
    if(sonuc==0)
        cout << "iki metin aynýdýr";
    if(sonuc>0)
        cout << "birinci metin büyük";
    if(sonuc<0)
        cout << "Ýkinci metin büyük";
    return 0;
}
