#include<iostream>
using namespace std;
#include"wektor.hh"
#include"macierz.hh"
int main()
{
    wektor a;
    
    a.Wpisz();
    cout<<"wektor : "<<endl;
    a.Wyswietl();
    macierz b;
    
    b.Wpisz();
    cout<<"macierz : "<<endl;
    b.Wyswietl();
}