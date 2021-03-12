#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    string a;
    cin >> a;
    int l = a.length(), i, j, k;
    for ( i = 0 ; i < l ; i++)
    {
        for ( j = 0 ; j < l ; j++)
        {
            for ( k = 0 ; k < l+1 ; k++)
            {
                cout << a[i] << a[j];
                if ( k != 0 ) 
				cout << a[k-1];
                cout << " ";
            }
        }
    }
    return 0;
}































