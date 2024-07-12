#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    cout << fixed << setprecision(10);
    long double n, k, a;
    cin >> n >> k >> a;

      double subject = n*k/a;
      double x = subject - (long long)subject;
    //cout<<x;
    if(x != 0.0)
        cout << "double\n";
    else if(subject >= -2147483648 and subject <= 2147483647)
        cout << "int\n";
    else
        cout << "long long\n";

    return 0;
}