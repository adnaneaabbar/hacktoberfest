#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    int flag = 0;
    ((bx < ax && cx < ax) || (bx > ax && cx > ax)) && ((by < ay && cy < ay) || (by > ay && cy > ay)) ? cout << "YES" : cout << "NO";

    return 0;
}
