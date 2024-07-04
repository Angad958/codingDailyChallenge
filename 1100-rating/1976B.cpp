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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vl v1, v2;
        fo(i,n)
        {
            ll a;
            cin >> a;
            v1.pb(a);
        }
        fo(i,n+1)
        {
            ll a;
            cin >> a;
            v2.pb(a);
        }
        bool f = false;
        ll ans = 0 , minD=INT_MAX;
        fo(i, n)
        {
            minD = min(minD, min(abs(v1[i] - v2[n]),abs(v2[i] - v2[n])));
            ans = ans + abs(v1[i] - v2[i]);
            if((v2[n]<=v1[i] && v2[n]>=v2[i]) || (v2[n]>=v1[i] && v2[n]<=v2[i]) )
            {
                f = true;
            }
        }
        if(f)
        {
            cout << ans + 1 << endl;
            continue;
        }
        cout << ans + minD + 1 << endl;
    }

    return 0;
}