#include <bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

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

const ll mxN = 1e9 + 1, iinf = 1e9 + 10, inf = 1e18 + iinf + 10,
         mod = 1000000007;
const ld pi = 4.0 * atanl(1.0), prec = .000001;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(c) c.begin(), c.end()
#define rall(c) c.end(), c.begin()
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

ll n, m, t;

void fast() { ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); }

int main() {
  fast();
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; ++i) cin >> a[i];
  sort(a.begin(), a.end());
  ll ret = 0, j = 0;
  for (int i = 0; i < n; ++i)
    while (j < n && a[j++] - a[i] <= 5) ret = max(ret, j - i);
  cout << ret;
  return 0;
}

