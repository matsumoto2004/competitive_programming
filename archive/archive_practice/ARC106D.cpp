#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, k, n) for (int i = k; i < (int)(n); i++)
#define repd(i, n) for (int i = n-1; i >= 0; i--)
#define rrepd(i, k, n) for (int i = n-1; i >= (int)(k); i--)
#define all(x) (x).begin(),(x).end()
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
#define F first //pairの一つ目の要素  //遅延セグ木使うときは注意
#define S second //pairの二つ目の要素  //遅延セグ木使うときは注意
#define PB push_back //挿入
#define MP make_pair //pairのコンストラクタ
//V,Pは大文字i,l,bは小文字
using ll = long long;
using Vi = vector<int>;
using VVi = vector<Vi>;
using Vl = vector<ll>;
using VVl = vector<Vl>;
using Vb = vector<bool>;
using VVb = vector<Vb>;
using P = pair<int,int>;
using Pl = pair<ll, ll>;
using Vs = vector<string>;
const ll mod = 998244353;
const ll inf = 4000000000000000000;//10の18乗*4
#define yn {puts("Yes");}else{puts("No");}
#define dame { puts("-1"); return 0;}

//modint構造体

struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};

// //combination//mint,modが必要
// struct combination {
//   vector<mint> fact, ifact;
//   combination(int n):fact(n+1),ifact(n+1) {
//     assert(n < mod);
//     fact[0] = 1;
//     for (int i = 1; i <= n; ++i) fact[i] = fact[i-1]*i;
//     ifact[n] = fact[n].inv();
//     for (int i = n; i >= 1; --i) ifact[i-1] = ifact[i]*i;
//   }
//   mint operator()(int n, int k) {
//     if (k < 0 || k > n) return 0;
//     return fact[n]*ifact[k]*ifact[n-k];
//   }
// };

vector<ll> fac(3000001); //n!(mod M)
vector<ll> ifac(3000001); //k!^{M-2} (mod M)
//a,bの範囲的にこれだけ配列を用意していけば十分

ll mpow(ll x, ll n){ //x^n(mod M) ←普通にpow(x,n)では溢れてしまうため，随時mod計算
    ll ans = 1;
    while(n != 0){
        if(n&1) ans = ans*x % mod;
        x = x*x % mod;
        n = n >> 1;
    }
    return ans;
}

ll comb(ll a, ll b){ //aCbをmod計算
    if(a == 0 && b == 0)return 1;
    if(a < b || a < 0)return 0;
    ll tmp = ifac[a-b]* ifac[b] % mod;
    return tmp * fac[a] % mod;
}


int main(){
    // mainに入れる
    fac[0] = 1;
    ifac[0] = 1;
    for(ll i = 0; i<3000000; i++){
        fac[i+1] = fac[i]*(i+1) % mod; // n!(mod M)
        ifac[i+1] = ifac[i]*mpow(i+1, mod-2) % mod; // k!^{M-2} (mod M) ←累乗にmpowを採用
    }

    ll n,k;
    cin >> n >> k;
    Vl v(n);
    rep(i,n) cin >> v[i];
    vector<vector<mint>> power(305,vector<mint>(n));
    rep(i,n) power[0][i]=1;
    rep(i,300)rep(j,n) power[i+1][j]=power[i][j]*v[j];
    vector<mint> sum(305);
    rep(i,301)rep(j,n) sum[i]+=power[i][j];
    rrep(x,1,k+1){
        mint ans=0;
        rep(i,x+1){
            mint pls=comb(x,i);
            pls*=sum[i]*sum[x-i];
            ans+=pls;
        }
        rep(i,n) ans-=mpow(2*v[i],x);
        ans/=2;
        cout << ans.x << endl;
    }
}
