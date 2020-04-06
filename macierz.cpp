#include"macierz.hh"
using namespace std;
void macierz :: Wyswietl()
    {
        
        for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;i<SIZE;j++)
        cout<<arr[i][j];
        }
        cout<<endl;
    }
    void macierz :: Wpisz()
    {
        
      for(int i = 0;i<SIZE;i++)
        {
            cout<<"wpisz "<<++i<<" wiersz ";
        for(int j = 0;i<SIZE;j++)
        cin>>arr[i][j];
        }
        cout<<endl;  
    }