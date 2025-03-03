#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) // Main Function
{
    int hours = stoi(s.substr(0, 2));
    string minutes = s.substr(3, 2);
    string seconds = s.substr(6, 2);
    string period = s.substr(8, 2);

    if (period == "PM" && hours != 12)
    {
        hours += 12;
    }
    if (period == "AM" && hours == 12)
    {
        hours = 0;
    }
    return (hours < 10 ? "0" : "") + to_string(hours) + ":" + minutes + ":" + seconds;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
