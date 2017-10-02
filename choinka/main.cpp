#include <iostream>
#include <cstdlib>  //w tym wypadku pozwala nam na dzia³anie komendy system("cls")

using namespace std;

int main()
{
    // n-liczba wierszy
    int n;
    int i;
    int j;
    cout<<"Podaj liczbe wierszy"<<endl;
    cin>>n;

    system("cls");

    // choinka
    //
    for (i=0; i<=n; i++)
    {
        for(j=0; j<=n-i; j++)
        {
          cout<<" ";
        }
        //for( int j = 1; j <= i * 1; j++ ) generuje tylko jedno polowke
        for(j = 1; j <= 1* i +1; j++ )
        {
        cout << "*";
        cout << " ";
        }
         cout<<endl;

    }
    //


    return 0;
}
