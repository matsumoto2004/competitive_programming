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

struct UnionFind {
    //自身が親であれば、その集合に属する頂点数に-1を掛けたもの
    //そうでなければ親のid
    vector<int> r;
    vector<int> isng;
 
    UnionFind(int N) {
        r = vector<int>(N, -1);
        isng = vector<int>(N,-1);
    }
 
    int root(int x) {
        if (r[x] < 0) return x;
        return r[x] = root(r[x]);
    }
 
    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (r[x] > r[y]) swap(x, y);//xのサイズのほうが大きくなるように(if文は逆ではない)
        r[x] += r[y];
        r[y] = x;

        if(isng[x]||isng[y]) isng[x]=1;
        return true;
    }
 
    int size(int x) {
        return -r[root(x)];
    }

    bool ok(int x){
        ll a=isng[root(x)];
        if(a==-1) return true;
        else return false;
    }
};
 

int main(){
    ll n,m;
    cin >> n >> m;
    UnionFind uf(n+2005);
    priority_queue<tuple<ll,ll,ll,ll>> v;
    rep(i,m){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        a--;b--;c--;d--;
        if(d-c>b-a){
            rep(i,b-a){
            v.push({b-a-i,-1,a+i,c+i});
            }
        }
        else{
            rep(i,d-c){
            v.push({d-c-i,1,a+i,c+i});
            }
        }
        
    }
    rep(i,m){
        auto[x,y,a,b]=v.top();
        v.pop();
        
    }
    cout << "Yes" << endl;
}