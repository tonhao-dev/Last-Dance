/**
 * https://vjudge.net/contest/431956#problem/A
 * Ad hoc
 */

#include <bits/stdc++.h>

using namespace std;

#define SPEED cin.tie(0)->sync_with_stdio(0);
#define db(x) cout << #x << ": " << x << endl
#define db_pair(x) cout << #x << ": " << x.f << ", " << x.s << endl
#define cv(vector)        \
    for (auto x : vector) \
        cout << x << " "; \
    cout << endl
#define cm(map)                             \
    for (auto e : map)                      \
        cout << e.first << " " << e.second; \
    cout << endl
#define FOR(i, a, b) for (ll i = a; i < (b); ++i)
#define foreach(a, b) for (auto &(a) : (b))
#define rep(i, n) FOR(i, 0, n)
#define Rep(i, a, b) for (ll i = a; i >= (b); i--)
#define all(x) begin(x), end(x)
#define sz(x) (ll)(x).size()
#define pb push_back
#define pf push_front
#define endl "\n"
#define f first
#define s second

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

int main(int argc, char **argv) {
    SPEED;

    ll testes;
    cin >> testes;

    rep(teste, testes) {
        map<ll, vector<string>, greater<ll>> urls;

        rep(i, 10) {
            string url; ll rank;
            cin >> url >> rank;

            urls[rank].pb(url);
        }

        cout << "Case #" << teste + 1 << ":" << endl;
        for(auto url : urls.begin()->second) {
            cout << url << endl;
        }
    }

    return 0;
}