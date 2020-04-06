#include"macierz.hh"
void Wyswietl()
    {
        for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;i<SIZE;j++)
        cout<<arr[i][j];
        }
        cout<<endl;
    }
    void Wpisz()
    {
      for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;i<SIZE;j++)
        cin>>arr[i][j];
        }
        cout<<endl;  
    }