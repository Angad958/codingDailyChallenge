#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <cstring>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

using namespace std;

const int MAX = 100'007;
const int MOD = 1'000'000'007;

vl binary_decimals;

bool ok(int n) {
	if (n == 1) {return true;}
	bool ans = false;
	for (int i : binary_decimals) {
		if (n % i == 0) {
			ans |= ok(n / i);
		}
	}
	return ans;
}

void solve() {
	int n;
	cin >> n;
	cout << (ok(n) ? "YES\n" : "NO\n");	
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	for (int i = 2; i < MAX; i++) {
		int curr = i;
		bool bad = false;
		while (curr) {
			if (curr % 10 > 1) {bad = true; break;}
			curr /= 10;
		}
		if (!bad) {binary_decimals.push_back(i);}
	}
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}