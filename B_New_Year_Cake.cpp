/**
 *  ███╗   ██╗ █████╗ ██╗   ██╗ █████╗ ███╗   ██╗
 *  ████╗  ██║██╔══██╗╚██╗ ██╔╝██╔══██╗████╗  ██║
 *  ██╔██╗ ██║███████║ ╚████╔╝ ███████║██╔██╗ ██║
 *  ██║╚██╗██║██╔══██║  ╚██╔╝  ██╔══██║██║╚██╗██║
 *  ██║ ╚████║██║  ██║   ██║   ██║  ██║██║ ╚████║
 *  ╚═╝  ╚═══╝╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═══╝
 *
 *                    N A Y A N
 *            NIT Allahabad | MNNIT
 *
 */

#include <bits/stdc++.h>
using namespace std;

/* ---------- Macros ---------- */
#define sza(x) ((int)(x).size())
#define all(a) (a).begin(), (a).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define gcd(a, b) __gcd(a, b)

/* ---------- Types ---------- */
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using vc = vector<char>;
using umii = unordered_map<int, int>;
using umci = unordered_map<char, int>;
using umsi = unordered_map<string, int>;
using si = set<int>;
using sc = set<char>;

/* ---------- Constants ---------- */
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

/* ---------- Math Utilities ---------- */
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll mod_add(ll a, ll b, ll m = MOD) { return (a % m + b % m) % m; }
ll mod_sub(ll a, ll b, ll m = MOD) { return ((a % m - b % m) + m) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return (a % m * b % m) % m; }

ll mod_exp(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

ll binpow(ll b, ll n) {
    ll result = 1;
    while (n > 0) {
        if (n & 1) result *= b;
        b *= b;
        n >>= 1;
    }
    return result;
}

bool prime(ll a) {
    if (a <= 1) return false;
    for (ll i = 2; i * i <= a; ++i)
        if (a % i == 0) return false;
    return true;
}

/* ---------- Output Helpers ---------- */
inline void yes() { cout << "YES\n"; }
inline void no()  { cout << "NO\n"; }

/* ---------- IO Helpers ---------- */
template <typename T>
void read(vector<T>& v) { for (auto& x : v) cin >> x; }

template <typename T>
void print(const vector<T>& v) { for (const auto& x : v) cout << x << ' '; cout << '\n'; }

/* ---------- Solve ---------- */
ll check(ll a, ll b, bool start) {
    long long size = 1;
    int ans = 0;
    bool flag = start;

    while(true){
        if(flag){
            if(a < size) break;
            a -= size;
        }else{
            if(b < size) break;
            b -= size;
        }
        ans++;
        size *= 2;
        flag = !flag;
    }
    return ans;
}

void solve(){
    ll a, b;
    cin >> a >> b;
    int ans1 = check(a, b, true); 
    int ans2 = check(a, b, false);  

    cout << max(ans1, ans2) << endl;
}

/* ---------- Main ---------- */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}