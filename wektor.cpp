#include"wektor.hh"
using namespace std;
void wektor:: Wyswietl() 
    {
      cout<<"wpisz wektor   ";
        for(int i = 0;i<SIZE;i++)
        {
        
        cout<<arr[i]<<endl;
        }
        cout<<endl;
    }
    void wektor:: Wpisz()
    {
      for(int i = 0;i<SIZE;i++)
        {
        cin>>arr[i];
        }
        cout<<endl;  
    }
    