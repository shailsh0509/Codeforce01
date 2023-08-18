#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define int ll
#define neg_inf LLONG_MIN
#define all(x) x.begin(), x.end()
#define all2(x) x, x + sizeof(x) / sizeof(x[0])
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_font
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vll vector<vl>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define irep(i, a, b) for (int i = a; i > b; i--)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define inf 1000000000000000000ll
#define mod 1000000007ll
#define mod2 100000009ll
#define sqr(a) a * 1ll * a
#define mpi map<int, int>
#define mpl map<ll, ll>
using namespace std;
using namespace __gnu_pbds;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    rep(i, 0, n)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        int dp = a * 1ll * a - 4 * 1ll * b;
        if (dp < 0)
        {
            cout << 0 << " ";
        }
        else if (dp == 0)
        {
            int r = a / 2;
            if (2 * r != a || r * r != b)
            {
                cout << 0 << " ";
            }
            else
            {
                r = mp[r];
                cout << (r * (r - 1)) / 2 << " ";
            }
        }
        else
        {
            int root1 = (a + sqrt(dp)) / 2;
            int root2 = (a - sqrt(dp)) / 2;
            if (root1 + root2 != a || root1 * root2 != b)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << mp[root1] * mp[root2] << " ";
            }
        }
    }
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
