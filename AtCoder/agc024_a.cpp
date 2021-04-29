#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef map<int, int> mpii;
typedef set<int> seti;

const int mxN = 2e5, iinf = 1e9 + 10, inf = 1e18 + iinf + 10, mod = 1000000007;
const ld pi = 4.0 * atanl(1.0), prec = .000001;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(c) c.begin(), c.end()
#define rall(c) c.end(), c.begin()
#define FOR(i, a, b) for (ull i = (a); i < (b); ++i)

int n, m, t, a[mxN];

void fast() { ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); }

int main() {
    fast();
    ll a, b, c, k;
    cin >> a >> b >> c >> k;
    if (k % 2 == 0) {
        cout << a - b;
        return 0;
    }
    cout << b - a;
}
