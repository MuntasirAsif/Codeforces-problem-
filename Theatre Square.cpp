#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, n, m, temp;
    
    cout.precision(22);
    cin >> n >> m >> a;
    if(m < n)
    {
        swap(m,n);
    }
   
    if(a >= m)
    {
        cout << ceil(n/a) << endl;
    }
    else
    {
        cout << ceil(m/a)*ceil(n/a) << endl;
    }
    return 0;
}