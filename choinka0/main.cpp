#include <iostream>
#include <cstdlib>  //w tym wypadku pozwala nam na dzia�anie komendy system("cls")

using namespace std;

int main()
{
    // n-liczba wierszy
    int n;

    cout<<"Podaj liczbe wierszy"<<endl;
    cin>>n;

    system("cls");

    // choinka
    //
    for (int i=0; i<=n; i++)
    {
        for(int j=0; j<=n-i; j++)
        {
          cout<<" ";
        }
        //for( int j = 1; j <= i * 1; j++ ) generuje tylko jedno polowke
        for( int j = 1; j <= 2* i +1; j++ )
        {
        cout << "*";
        }
         cout<<endl;
    }
    //


    return 0;
}
