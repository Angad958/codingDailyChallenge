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
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vl v;
        fo(i, n)
        {
            ll a;
            cin >> a;
            v.pb(a);
        }
        sortall(v);
        vl pref(n, 0);
        pref[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = v[i] + pref[i - 1];
        }
        int ind = 1;
        int indL = n - 1;
        while (k--)
        {
            if(ind< n)
            {
              if(pref[ind]<=pref[indL]-pref[indL-1])
              {
                  for (int i = 0; i <= ind; i++)
                  {
                      v[i] = 0;
                  }
                  ind += 2;
              }
              else
              {
                  v[indL] = 0;
                  indL--;
              }
            }
        }
        ll ans = 0;
        fo(i,n)
        {
            ans += v[i];
        }

        cout << ans << endl;
    }
    return 0;
}