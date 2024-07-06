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

int main(){
    int t; cin >> t;
    while (t--){
        int n, k; 
        cin >> n >> k; 
        k = 2 * k;
        
        vector <int> a(2 * n), occ(n + 1, 0);
        
        for (auto &x : a) cin >> x;
        for (int i = 0; i < n; i++) occ[a[i]]++;
        
        vector <int> g0, g1, g2;
        for (int i = 1; i <= n; i++){
            if (occ[i] == 0) g0.push_back(i);
            else if (occ[i] == 1) g1.push_back(i);
            else g2.push_back(i);
        }
        
        int v = 0;
        for (auto x : g2){
            if (v < k){
                v += 2;
                cout << x << " " << x << " ";
            }
        }
        for (auto x : g1){
            if (v < k){
                v++;
                cout << x << " ";
            }
        }
        cout << "\n";
        
        v = 0;
        for (auto x : g0){
            if (v < k){
                v += 2;
                cout << x << " " << x << " ";
            }
        }
        for (auto x : g1){
            if (v < k){
                v++;
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}