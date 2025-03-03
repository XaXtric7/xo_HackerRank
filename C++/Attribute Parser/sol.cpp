#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
#include <sstream>
using namespace std;

int main()
{
    map<string, map<string, string>> tags;

    stack<string> currentTags;

    string input;
    getline(cin, input);
    stringstream initSS(input);
    int line{};
    int query{};
    initSS >> line >> query;

    string fullPath = "";

    for (int i = 0; i < line; i++)
    {
        getline(cin, input);

        // remove the tag
        input = input.substr(1, input.length() - 2);

        stringstream ss(input);

        // work on tag
        string tag;
        ss >> tag;

        if (tag[0] == '/')
        {
            currentTags.pop();

            if (currentTags.size() > 0)
            {
                fullPath = currentTags.top();
            }
            else
            {
                fullPath.clear();
            }

            // skip to next line
            continue;
        }

        if (currentTags.size() > 0)
        {
            // add "." if already has path
            fullPath.append(".");
        }
        fullPath.append(tag);

        // if no previous tag
        currentTags.push(fullPath);

        if (tags.find(fullPath) == tags.end())
        {
            tags[fullPath] = map<string, string>();
        }

        // work on attribute, get all remain as one single string
        string attr, eq, value;

        while (ss >> attr >> eq >> value)
        {
            if (value[0] == '"')
            {
                value = value.substr(1, value.size() - 2);
            }

            tags[fullPath][attr] = value;
        }
    }

    for (int i = 0; i < query; i++)
    {
        getline(cin, input);

        int index = input.find('~');
        string tag = input.substr(0, index);
        string query = input.substr(index + 1, input.size());
        // indicate not found
        if (tags.count(tag) &&
            tags[tag].count(query))
        {
            cout << tags[tag][query] << "\n";
        }
        else
        {
            cout << "Not Found!\n";
        }
    }

    return 0;
}
