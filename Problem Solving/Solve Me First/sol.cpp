#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b)
{
    int n = a + b;
    return n;
}

int main()
{
    int num1, num2;
    int sum;
    cin >> num1 >> num2;
    sum = solveMeFirst(num1, num2);
    cout << sum;
    return 0;
}
