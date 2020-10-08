#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    int s = a + b + c;
    if (!(s % 2))
    {
        s /= 2;
        int x = s - c;
        int y = s - a;
        int z = s - b;

        if (x >= 0 && y >= 0 && z >= 0)
            cout << x << " " << y << " " << z << " " << endl;
        else
            cout << "Impossible" << endl;
    }
    else
        cout << "Impossible" << endl;

    return 0;
}
