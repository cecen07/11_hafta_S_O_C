#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
    char s1[]= "D�nya";
    char s2[]= "D�nya";

    int sonuc=strcmp(s1,s2);
    if(sonuc==0)
        cout << "iki metin ayn�d�r";
    if(sonuc>0)
        cout << "birinci metin b�y�k";
    if(sonuc<0)
        cout << "�kinci metin b�y�k";
    return 0;
}
