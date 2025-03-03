#include <iostream>
using namespace std;

int main()
{
    int numbers[4];
    int max_num;

    for (int i = 0; i < 4; ++i)
    {
        cin >> numbers[i];
    }

    max_num = numbers[0];
    for (int i = 1; i < 4; ++i)
    {
        if (numbers[i] > max_num)
        {
            max_num = numbers[i];
        }
    }
    cout << max_num;

    return 0;
}
