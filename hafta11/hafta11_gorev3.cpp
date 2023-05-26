#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char mesaj[] = "Bugun hava cok guzel!";
    int kelimeSayisi = 1;
    for(int i=0; i<strlen(mesaj);i++)
    {
        if(mesaj[i] == ' ')
            kelimeSayisi++;
    }
    cout << "Bu cumlede " << kelimeSayisi << " kelime bulunmaktadir.";
    return 0;
}
