#include<bits/stdc++.h>
#include<cassert>
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(i, n) for (ll i = 0; i < ll(n); ++i)
#define rep2(i, s, n) for (ll i = ll(s); i < ll(n); ++i)
#define rep3(i, s, n, d) for(ll i = ll(s); i < ll(n); i+=d)
#define rep(...) overload4(__VA_ARGS__,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(i, n) for (ll i = ll(n)-1; i >= 0; i--)
#define rrep2(i, n, t) for (ll i = ll(n)-1; i >= (ll)t; i--)
#define rrep3(i, n, t, d) for (ll i = ll(n)-1; i >= (ll)t; i-=d)
#define rrep(...) overload4(__VA_ARGS__,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define SUM(a) accumulate(all(a),0LL)
#define MIN(a) *min_element(all(a))
#define MAX(a) *max_element(all(a))
#define SORT(a) sort(all(a));
#define REV(a) reverse(all(a));
#define SZ(a) int(a.size())
#define popcount(x) __builtin_popcountll(x)
#define pf push_front
#define pb push_back
#define ef emplace_front
#define eb emplace_back
#define ppf pop_front
#define ppb pop_back
#ifdef __LOCAL
#define debug(...) { cout << #__VA_ARGS__; cout << ": "; print(__VA_ARGS__); cout << flush; }
#else
#define debug(...) void(0);
#endif
#define INT(...) int __VA_ARGS__;scan(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;scan(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;scan(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;scan(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;scan(__VA_ARGS__)
#define LD(...) ld __VA_ARGS__;scan(__VA_ARGS__)
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int, int>;
using LP = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vvvl = vector<vvl>;
using vd = vector<double>;
using vvd = vector<vd>;
using vs = vector<string>;
using vc = vector<char>;
using vvc = vector<vc>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vp = vector<P>;
using vvp = vector<vp>;


struct mypair{
    ll x=0;
    ll y=0;
    ll z=0;
    mypair(ll _x,ll _y,ll _z){
        ll nx=min({_x,_y,_z});
        ll nz=max({_x,_y,_z});
        ll ny=_x+_y+_z-nx-nz;
        x=nx,y=ny,z=nz;
    }
    bool operator<(const mypair& other) const {
        if(x!=other.x) return x<other.x;
        else if(y!=other.y) return y<other.y;
        else return z<other.z;
    }
};


void print_v(const vector<vector<set<ll>>>& v) {
    cout << "     ";
    // 列番号を表示 (1から始まる)
    rep(j, 1, 10) {
        cout << setw(20) << j;
    }
    cout << endl;
    
    rep(i, 1, 10) {
        // 行番号を表示
        cout << setw(3) << i << " | ";
        rep(j, 1, 10) {
            stringstream ss;
            ss << "{";
            // セットの中身をカンマ区切りで表示
            for(auto it = v[i][j].begin(); it != v[i][j].end(); ++it) {
                if(it != v[i][j].begin()) ss << ", ";
                ss << *it;
            }
            ss << "}";

            // セットを15文字幅で表示
            cout << setw(20) << ss.str();
        }
        cout << endl;
    }
}

int main(){

    set<mypair> st;
    rep(i,1,10)rep(j,1,10)rep(k,1,10){
        if(i==j||j==k||k==i) continue;
        if(i+j+k==24){
            st.insert(mypair(i,j,k));
        }
        if(i*j*k==24){
            st.insert(mypair(i,j,k));
        }
        if(i*j+k==24){
            st.insert(mypair(i,j,k));
        }
        if(i*(j+k)==24){
            st.insert(mypair(i,j,k));
        }
        if(i*j-k==24){
            st.insert(mypair(i,j,k));
        }
        if(i*(j-k)==24){
            st.insert(mypair(i,j,k));
        }
        if(i*j==24*k){
            st.insert(mypair(i,j,k));
        }
    }
    cout << st.size() << endl;

    vector<vector<set<ll>>> v(10,vector<set<ll>>(10));

    for(auto [x,y,z]:st){
        vl order={x,y,z};

        do{
            v[order[0]][order[1]].insert(order[2]);
        }while(next_permutation(all(order)));
    }

    print_v(v);
    
}