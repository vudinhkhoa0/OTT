#include <bits/stdc++.h>
using namespace std;
using st = char;
st check(st a, st b)
{
    if ((a == 'S' && b == 'P') || (a == 'R' && b == 'S') || (a == 'P' && b == 'R')) return 'A';
    else if (a == b) return 'D';
    else return 'B';
}
int main()
{
    st a, b;
    cin >> a >> b;
    cout << check(a, b);
    return 0;
}
