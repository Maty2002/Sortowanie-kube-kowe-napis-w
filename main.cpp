#include <sstream>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

string stringSort(string s){
	
    int t[256]; //dane wejsciowe
        string wynik;
	
    //przypisanie kazdej komurce wartosci
    for (int i=0; i<=256; i++)
       	   t[i]=0;

    //zapelnienie tablicy t[i] danymi
    for (int i=0; i<=s.length()-1; i++)
        t[i]=(int)s[i];

    int l[256]; //licznik

    //zerowanie tablicy
    for (int i=0; i<=255; i++)
        l[i]=0;

    //podliczenie wynikow
    for (int i=0; i<=255; i++)
    	l[t[i]]++;

    //przypisanie uporzadkowanych wynikow
    for (int i=0; i<=255; i++){
        if (l[i]>0){
           for (int j=1; j<=l[i]; j++){
           	if(i>0)
               	    wynik+=(char)i;
	   }
        }
    }
	
	
	return wynik;
	
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout<<stringSort("lol");//brak czasu na zmiane duzych liter na male 
	
	return 0;
}
