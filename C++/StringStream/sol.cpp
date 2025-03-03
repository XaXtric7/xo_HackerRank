#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> result;
    stringstream ss(str);
    int temp;
    char ch;

    // Extract integers from the stream while ignoring commas
    while (ss >> temp)
    {
        result.push_back(temp);
        ss >> ch; // Read and discard the comma
    }

    return result;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
