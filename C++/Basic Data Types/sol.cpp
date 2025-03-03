#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(5) << d << endl;
    cout << fixed << setprecision(10) << e << endl;

    return 0;
}
// Input : 3 12345678912345 a 334.23 14049.30493
// Output : 3
//  12345678912345
//  a
//  334.230
//  14049.304930000
