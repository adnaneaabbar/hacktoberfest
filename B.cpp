#include <bits/stdc++.h>

using namespace std;
using vpss = vector<pair<string, string>>;

int main(int argc, char const *argv[])
{
    vpss v;
    string old, neww;

    int t, j;
    cin >> t;
    while (t--)
    {
        cin >> old >> neww;
        for (j = 0; j < v.size(); j++)
        {
            if (v[j].second == old)
            {
                v[j].second = neww;
                break;
            }
        }
        if (j == v.size())
        {
            v.push_back(make_pair(old, neww));
        }
    }

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }

    return 0;
}

