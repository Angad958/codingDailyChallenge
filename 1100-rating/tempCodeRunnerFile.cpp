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
vl findDivisor(ll a)
{
    vl ans;
    for (ll i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            ans.pb(i);
            if (i != a / i)
            {
                ans.pb(a / i);
            }
        }
    }
    return ans;
}
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
        ll n, x, y;
        cin >> n >> x >> y;
        if(y==1)
        {
            fo(i,n)
            {
                cout << 1 << " ";
            }
            cout << endl;
            continue;
        }
        else if(x==y)
        {
            fo(i,n)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            vl v(n + 1);
            int curr = -1;
            for (int i = 0; i < x; i++)
            {
                v[i] = curr;
                curr = -curr;
            }
            curr = -1;
            for (int i = y; i < n; i++)
            {
                v[i] = curr;
                curr = -curr;
            }
            for (int i = x; i <= y;i++)
            {
                v[i] = 1;
            }
            for(auto x:v)
            {
                cout << x << " " ;
            }
            cout << endl;
        }
    }
    return 0;
}