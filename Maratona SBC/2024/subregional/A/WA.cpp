#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    if (a == 1) {
        cout << b << endl;
    } else {
        cout << (int)((b - a) / a) << endl;
    }

    return 0;
}
