#include <iostream>
using namespace std;
int main()
{
    int n=1, temp ;
    int a[n] ;
    for (int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
    }
    cout << endl;
    for (int i = 0 ; i < n-1 ; i++ )
    {
        for (int j = i+1 ; j < n ; j++ )
        {
            if ( a[i] > a[j] )
            {
                temp = a[i] ;
                a[i] = a[j] ;
                a[j] = temp ;        
            }
        }
    }
    for (int i = 0 ; i < n ; i++ )
    {
        cout << a[i] << " " ;
    }
}
