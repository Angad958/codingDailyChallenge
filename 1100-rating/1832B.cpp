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
        int indS = k * 2;
        ll sum = 0;
  
        for (int i = 2 * k; i < n; i++)
        {
            sum += v[i];
        }
        if(sum==0)
           {
             cout << 0 << endl;
            continue;
         }
        ll ans = sum;
        int indL = n - 1;
        for (int i = 2 * k-1; i >= 0; i -= 2)
        {
          if(i>=1){
              sum = sum + v[i] +v[i - 1];
          }
          if(indL>0)
          {
              sum -= v[indL];
              indL--;
          }
          ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}