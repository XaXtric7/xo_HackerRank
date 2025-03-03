#include <iostream>
using namespace std;

int main()
{
    int n, i;

    // Read the number of elements
    cin >> n;

    // Declare the array after reading n
    int arr[n];

    // Read the elements into the array
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Print the elements in reverse order
    for (i = n - 1; i >= 0; i--)
    {
        cout << arr[i];
        if (i > 0)
        {
            cout << " "; // Add a space between numbers
        }
    }

    return 0;
}
