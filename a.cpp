#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;

int main ()
{
    int a,b;
    cin >> a;
    for ( int i = 1; i <= a; i ++ )
    {
        cout << endl;
        for ( int j = 2; j <= 10; j ++ )
        {
            cout << j <<" * " << j <<" = "<< i * j <<endl;
        }
    }

}
