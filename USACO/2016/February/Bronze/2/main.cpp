/**
 * USACO 2016 February Contest, Bronze
 * Problem 2. Circular Barn
 * Adhoc, Simulação
 */

#include <bits/stdc++.h>

using namespace std;

#define SPEED cin.tie(0)->sync_with_stdio(0);
#define DEBUG true
#define db(x) \
    if (DEBUG) cout << #x << ": " << x << endl
#define dbpair(x) \
    if (DEBUG) cout << #x << ": " << x.f << ", " << x.s << endl
#define dbvector(vector)                           \
    {                                              \
        cout << #vector << " = ";                  \
        for (auto& it : vector) cout << it << " "; \
        cout << endl;                              \
    }
#define dbmap(map)                          \
    for (auto e : map)                      \
        cout << e.first << " " << e.second; \
    cout << endl
#define all(x) begin(x), end(x)
#define pb push_back
#define pf push_front
#define endl "\n"
#define f first
#define s second
#define MOD 1e9 + 7
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void setIO(string s) {
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

int main(int argc, char** argv) {
    SPEED;

    setIO("cbarn");
    int n; cin >> n;
    vector<int> vacas(n);

    for(auto &i : vacas) cin >> i;

    int total = 0;
    for(auto v : vacas) total += v;

    int ans = INF;
    for(int i = 0; i < n; i++) {
        int j = i;
        int rep = n;

        int atual = 0;
        int restantes = total;
        while(rep--) {
            restantes -= vacas[j];
            atual += restantes;
            j = (j + 1) % n;
        }

        ans = min(ans, atual);
    }

    cout << ans << endl;

    return 0;
}