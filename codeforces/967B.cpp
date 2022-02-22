#pragma GCC optimize("O3")
#pragma GCC target("sse4")

#include <bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;

const int MXN = 2e5, IINF = 1e9 + 10, INF = 1e18 + IINF + 10, MOD = 1000000007;
const ld PI = 4.0 * atanl(1.0), PREC = .000001;
const char nl = '\n';

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.end(), x.begin()
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)(x).size()
#define ins insert

int a[MXN], n;

void fast() { ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); }

int main() {
  fast();
  int A, B, s = 0;
  cin >> n >> A >> B;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    s += x;
    a[i] = x;
  }

  double v = (A * a[0]) / s;
  if (v >= B) {
    cout << 0;
    return 0;
  }
  // new arr
  vector<int> lol;
  for (int i = 1; i < n; ++i)
    lol.pb(a[i]);
  sort(lol.rbegin(), lol.rend());

  int ans = 0, st = a[0], idx = 0;
  while (1) {
    s -= lol[idx], ++ans;
    v = (A * st) / s;
    if (v >= B)
      break;
    ++idx;
  }

  cout << ans;
  return 0;
}
