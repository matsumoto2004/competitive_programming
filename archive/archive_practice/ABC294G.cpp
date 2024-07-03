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

/* SegTree<X>(n,fx,ex): モノイド(集合X, 二項演算fx, 単位元ex)についてサイズnで構築
    set(int i, X x), build(): i番目の要素をxにセット。まとめてセグ木を構築する。O(n)
    update(i,x): i 番目の要素を x に更新。O(log(n))
    query(a,b): [a,b) 全てにfxを作用させた値を取得。O(log(n))
*/
template <typename X>
struct SegTree {
    using FX = function<X(X, X)>; // X•X -> X となる関数の型
    int n;
    FX fx;
    const X ex;
    vector<X> dat;
    SegTree(int n_, FX fx_, X ex_) : n(), fx(fx_), ex(ex_), dat(n_ * 4, ex_) {
        int x = 1;
        while (n_ > x) {
            x *= 2;
        }
        n = x;
    }
    void set(int i, X x) { dat[i + n - 1] = x; }
    void build() {
        for (int k = n - 2; k >= 0; k--) dat[k] = fx(dat[2 * k + 1], dat[2 * k + 2]);
    }
    void update(int i, X x) {
        i += n - 1;
        dat[i] = x;
        while (i > 0) {
            i = (i - 1) / 2;  // parent
            dat[i] = fx(dat[i * 2 + 1], dat[i * 2 + 2]);
        }
    }
    X query(int a, int b) { return query_sub(a, b, 0, 0, n); }
    X query_sub(int a, int b, int k, int l, int r) {
        if (r <= a || b <= l) {
            return ex;
        } else if (a <= l && r <= b) {
            return dat[k];
        } else {
            X vl = query_sub(a, b, k * 2 + 1, l, (l + r) / 2);
            X vr = query_sub(a, b, k * 2 + 2, (l + r) / 2, r);
            return fx(vl, vr);
        }
    }
};

auto fx = [](ll x1, ll x2) -> ll { return min(x1,x2); };
ll ex = inf;

auto fx2 = [](ll x1, ll x2) -> ll { return x1+x2; };
ll ex2 = 0;

struct Edge{
    ll to,cost,id;
    Edge(ll to,ll cost,ll id): to(to),cost(cost),id(id){}

};

int main(){
    ll n;
    cin >> n;
    vector<vector<Edge>> graph(n);
    rep(i,n-1){
        ll a,b,c;
        cin >> a >> b >> c;
        a--;b--;
        graph[a].emplace_back(b,c,i);
        graph[b].emplace_back(a,c,i);
    }

    Vl et;
    Vl in(n);
    Vl ein(n-1),eout(n-1),ecost(n-1);

    auto dfs=[&](auto dfs,ll v,ll p=-1)->void{
        in[v]=et.size();
        et.PB(v);
        for(auto e:graph[v]){
            if(e.to==p) continue;

            ein[e.id]=et.size()-1;
            ecost[e.id]=e.cost;

            dfs(dfs,e.to,v);
            eout[e.id]=et.size()-1;

            et.PB(v);
        }
    };
    dfs(dfs,0);

    SegTree<ll> seg(3*n,fx,ex);
    SegTree<ll> seg2(3*n,fx2,ex2);

    rep(i,et.size()) seg.set(i,in[et[i]]);
    rep(i,n-1){
        seg2.set(ein[i],seg2.query(ein[i],ein[i]+1)+ecost[i]);
        seg2.set(eout[i],seg2.query(eout[i],eout[i]+1)-ecost[i]);
    }
    seg.build();
    seg2.build();
    ll q;
    cin >> q;
    rep(qi,q){
        ll type,a,b;
        cin >> type >> a >> b;
        if(type==1){
            a--;
            seg2.update(eout[a],0);
            seg2.update(ein[a],b);
            seg2.update(eout[a],seg2.query(eout[a],eout[a]+1)-b);
        }
        else{
            a--;b--;
            ll l=in[a],r=in[b];
            if(l>r) swap(l,r);
            ll c=seg.query(l,r+1);

            cout << seg2.query(c,l)+seg2.query(c,r)<< endl;

        }
    }

}