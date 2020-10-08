#include <bits/stdc++.h>
#define N 100000 + 5
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    bool used[N];
    for (int i = 1; i <= n; i++)
    {
        if (used[a[i]])
            continue;

        ans++;
        used[a[i]] = true;
        used[a[a[i]]] = true;
    }

    cout << ans << endl;

    return 0;
}
