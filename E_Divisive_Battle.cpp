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
#define gcd(a,b) __gcd(a,b)

/* ---------- Types ---------- */
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;

/* ---------- Constants ---------- */
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

const int MAXA = 1000005;

/* ---------- Globals ---------- */
int minp[MAXA];
int maxp[MAXA];

/* ---------- Math Utilities ---------- */
ll lcm(ll a,ll b){ return (a/gcd(a,b))*b; }
ll mod_add(ll a,ll b,ll m=MOD){ return (a%m+b%m)%m; }
ll mod_sub(ll a,ll b,ll m=MOD){ return ((a%m-b%m)+m)%m; }
ll mod_mul(ll a,ll b,ll m=MOD){ return (a%m*b%m)%m; }

ll mod_exp(ll a,ll b,ll m=MOD){
    ll r=1;
    while(b){
        if(b&1) r=mod_mul(r,a,m);
        a=mod_mul(a,a,m);
        b>>=1;
    }
    return r;
}

/* ---------- Sieve ---------- */
void sieve(){
    minp[1]=1;
    maxp[1]=1;
    for(int i=2;i<MAXA;i++){
        if(minp[i]==0){
            for(int j=i;j<MAXA;j+=i){
                if(minp[j]==0) minp[j]=i;
                maxp[j]=i;
            }
        }
    }
}

/* ---------- Solve ---------- */
void solve(){
    int n;
    cin>>n;
    vi a(n);
    bool sorted=true;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0 && a[i-1]>a[i]) sorted=false;
    }

    if(sorted){
        cout<<"Bob" << endl;
        return;
    }

    bool good=false;
    for(int i=0;i<n;i++){
        if(minp[a[i]]!=maxp[a[i]]){
            good=true;
            break;
        }
    }

    if(good){
        cout<<"Alice" << endl;
        return;
    }

    bool ok=true;
    for(int i=1;i<n;i++){
        if(minp[a[i-1]]>minp[a[i]]){
            ok=false;
            break;
        }
    }
    if(ok) cout<<"Bob" << endl;
    else cout<<"Alice" << endl;;
}

/* ---------- Main ---------- */
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    sieve();   // IMPORTANT

    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}