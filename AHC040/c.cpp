#include<bits/stdc++.h>
#include<cassert>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include<ext/pb_ds/tag_and_trait.hpp>
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
//using namespace __gnu_pbds;
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

//template<class T>
//using PQ = priority_queue <pair<T, int>, vector<pair < T, int>>, greater <pair<T, int>>>;

template<class T>
using PQ = priority_queue <T, vector<T>, greater <T>>;

template<class S, class T>
istream &operator>>(istream &is, pair <S, T> &p) { return is >> p.first >> p.second; }

template<class S, class T>
ostream &operator<<(ostream &os, const pair <S, T> &p) { return os << '{' << p.first << ", " << p.second << '}'; }

template<class S, class T, class U>
istream &operator>>(istream &is, tuple <S, T, U> &t) { return is >> get<0>(t) >> get<1>(t) >> get<2>(t); }

template<class S, class T, class U>
ostream &operator<<(ostream &os, const tuple <S, T, U> &t) {
    return os << '{' << get<0>(t) << ", " << get<1>(t) << ", " << get<2>(t) << '}';
}

template<class T>
istream &operator>>(istream &is, vector <T> &v) {
    for (T &t: v) { is >> t; }
    return is;
}

template<class T>
ostream &operator<<(ostream &os, const vector <T> &v) {
    os << '[';
    rep(i, v.size()) os << v[i] << (i == int(v.size() - 1) ? "" : ", ");
    return os << ']';
}

template<class T>
ostream &operator<<(ostream &os, const deque <T> &v) {
    os << '[';
    rep(i, v.size()) os << v[i] << (i == int(v.size() - 1) ? "" : ", ");
    return os << ']';
}

template<class T>
ostream &operator<<(ostream &os, const set <T> &st) {
    os << '{';
    auto it = st.begin();
    while (it != st.end()) {
        os << (it == st.begin() ? "" : ", ") << *it;
        it++;
    }
    return os << '}';
}

template<class T>
ostream &operator<<(ostream &os, const multiset <T> &st) {
    os << '{';
    auto it = st.begin();
    while (it != st.end()) {
        os << (it == st.begin() ? "" : ", ") << *it;
        it++;
    }
    return os << '}';
}

template<class T>
void vecout(const vector <T> &v, char div = '\n') {
    rep(i, v.size()) cout << v[i] << (i == int(v.size() - 1) ? '\n' : div);
}

template<class T>
bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

void scan() {}

template<class Head, class... Tail>
void scan(Head &head, Tail &... tail) {
    cin >> head;
    scan(tail...);
}

template<class T>
void print(const T &t) { cout << t << '\n'; }

template<class Head, class... Tail>
void print(const Head &head, const Tail &... tail) {
    cout << head << ' ';
    print(tail...);
}

template<class... T>
void fin(const T &... a) {
    print(a...);
    exit(0);
}

template<class T>
vector <T> &operator+=(vector <T> &v, T x) {
    for (T &t: v) t += x;
    return v;
}

template<class T>
vector <T> &operator-=(vector <T> &v, T x) {
    for (T &t: v) t -= x;
    return v;
}

template<class T>
vector <T> &operator*=(vector <T> &v, T x) {
    for (T &t: v) t *= x;
    return v;
}

template<class T>
vector <T> &operator/=(vector <T> &v, T x) {
    for (T &t: v) t /= x;
    return v;
}

struct Init_io {
    Init_io() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        cout << boolalpha << fixed << setprecision(15);
        cerr << boolalpha << fixed << setprecision(15);
    }
} init_io;

const string yes[] = {"no", "yes"};
const string Yes[] = {"No", "Yes"};
const string YES[] = {"NO", "YES"};
const int inf = 1001001001;
const ll linf = 1001001001001001001;

void rearrange(const vi &) {}

template<class T, class... Tail>
void rearrange(const vi &ord, vector <T> &head, Tail &...tail) {
    assert(ord.size() == head.size());
    vector <T> ori = head;
    rep(i, ord.size()) head[i] = ori[ord[i]];
    rearrange(ord, tail...);
}

template<class T, class... Tail>
void sort_by(vector <T> &head, Tail &... tail) {
    vi ord(head.size());
    iota(all(ord), 0);
    sort(all(ord), [&](int i, int j) { return head[i] < head[j]; });
    rearrange(ord, head, tail...);
}

template<class T, class S>
vector <T> cumsum(const vector <S> &v, bool shift_one = true) {
    int n = v.size();
    vector <T> res;
    if (shift_one) {
        res.resize(n + 1);
        rep(i, n) res[i + 1] = res[i] + v[i];
    } else {
        res.resize(n);
        if (n) {
            res[0] = v[0];
            rep(i, 1, n) res[i] = res[i - 1] + v[i];
        }
    }
    return res;
}

vvi graph(int n, int m, bool directed = false, int origin = 1) {
    vvi G(n);
    rep(_, m) {
        INT(u, v);
        u -= origin, v -= origin;
        G[u].pb(v);
        if (!directed) G[v].pb(u);
    }
    return G;
}

template<class T>
vector <vector<pair < int, T>>>

weighted_graph(int n, int m, bool directed = false, int origin = 1) {
    vector < vector < pair < int, T>>> G(n);
    rep(_, m) {
        int u, v;
        T w;
        scan(u, v, w);
        u -= origin, v -= origin;
        G[u].eb(v, w);
        if (!directed) G[v].eb(u, w);
    }
    return G;
}

class TimeKeeper {
 private:
  std::chrono::high_resolution_clock::time_point start_time_;
  std::chrono::high_resolution_clock::time_point before_time_;
  int64_t time_threshold_;
  int64_t turn_threshold_;

 public:
  TimeKeeper(const int64_t &time_threshold)
      : start_time_(std::chrono::high_resolution_clock::now()),
        time_threshold_(time_threshold){
    before_time_ = start_time_;
  }

  // 各ターンに割り振られた制限時間を超過したか判定する。
  bool update() {
    auto now = std::chrono::high_resolution_clock::now();
    auto passed_time_=std::chrono::duration_cast<std::chrono::milliseconds>(now-start_time_);
    auto time_diff=std::chrono::duration_cast<std::chrono::milliseconds>(now-before_time_);
    auto expected_time_= passed_time_+time_diff;
    before_time_=now;
    debug(expected_time_.count());
    return  expected_time_.count() <= time_threshold_;
  }

};



struct mypair
{
    ll h;
    ll w;
    vl idlist;
    vl rlist;
    ll sz=1;
    mypair(ll _h,ll _w,vl _idlist,vl _rlist):h(_h),w(_w),idlist(_idlist),rlist(_rlist) {
        //assert(ids.size()==r.size());
        sz=idlist.size();
    }
    bool operator< (const mypair &other) const{
        return idlist[0]<other.idlist[0];
    }
};

TimeKeeper tk(1750);

int main() {
    int n,t,sigma;
    cin >> n >> t >> sigma;
    int t0=t;
    vector<ll> vh(n),vw(n),vr(n,0);
    rep(i,n) cin >> vw[i] >> vh[i];
    rep(i,n){
        chmin(vw[i],1000000LL);
        chmin(vh[i],1000000LL);
    }
    rep(i,n){
        if(vh[i]<vw[i]){
            swap(vh[i],vw[i]);
            vr[i]=1;
        }
    }
    set<mypair> st;
    rep(i,n){
        st.insert(mypair(vh[i],vw[i],{i},{vr[i]}));
    }
    
    ll bestscore=linf;
    auto solve=[&]() -> bool {
        ll score=linf;
        vector<vector<vector<ll>>> ids;//
        ll border=0;

        for(int n_border=100;n_border<=10000000;n_border+=100){
            vector<vector<vector<ll>>> nowids;
            nowids.pb({});
            ll sumh=0,maxw=0;
            ll nowh=0,noww=0;
            for(auto it=st.begin();it!=st.end();it++){
                if(noww>=n_border){
                    sumh+=nowh;
                    chmax(maxw,noww);
                    nowh=0;
                    noww=0;
                    nowids.pb({});
                }
                auto [h,w,idlist,rlist,sz]=*it;
                chmax(nowh,h);
                noww+=w;
                nowids.back().pb(idlist);
            }
            sumh+=nowh;
            chmax(maxw,noww);

            if(chmin(score,sumh+maxw)){
                ids=nowids;
                border=maxw;
                if(ids.back().empty()){
                    ids.ppb();
                }
            }
        }

        ll cnt=ids.size();



        cout << n << endl;

        ll past=-1;

        rep(i,0,cnt){
            rep(j,ids[i].size()){
                ll next=ids[i][j][0];
                rep(k,ids[i][j].size()){
                    ll val=ids[i][j][k];
                    if(j==0) cout << val << " " << vr[val] << " " << 'U' << " " << -1 << endl;
                    else cout << val << " " << vr[val] << " " << 'U' << " " << past << endl;
                    if(vw[next]<vw[val]) next=val;
                }
                past=next;
            }            
        }
        t--;

        ll x,y;
        cin >> x >> y;
        return chmin(bestscore,x+y);
    };

    //とりあえずマージせず一度試す
    solve();

    //一部をマージしてsolveしたい
    //ランダムな場所のマージを繰り返し、改善されるかみる
    ll h_border=80000;
    while(t){
        bool finished=true;
        for(auto it=st.begin();it!=st.end();it++){
            
            auto [h0,w0,idlist0,rlist0,sz0]=*it;
            it++;
            if(it==st.end()) break;
            auto [h1,w1,idlist1,rlist1,sz1]=*it;
            it--;
            
            ll n_h=linf,n_w=linf;
            vl n_idlist,n_rlist;
            ll n_sz= sz0 +sz1;
            rep(i,1)rep(j,1){
                ll h2 = (i == 0) ? h0 : w0;
                ll w2 = (i == 0) ? w0 : h0;
                ll h3 = (j == 0) ? h0 : w0;
                ll w3 = (j == 0) ? w0 : h0;

                if(h2+h3<=h_border){
                    if(h2+h3+max(w2,w3)<=n_h+n_w){
                        n_h=h2+h3;
                        n_w=max(w2,w3);

                        n_idlist={};
                        for(ll ii:idlist0){
                            n_idlist.pb(ii);
                        }
                        for(ll ii:idlist1){
                            n_idlist.pb(ii);
                        }
                        n_rlist={};
                        for(ll ii:rlist0){
                            n_rlist.pb(ii^i);
                        }
                        for(ll ii:rlist1){
                            n_rlist.pb(ii^j);
                        }
                    }
                }
            }

            debug(n_h,n_w,n_idlist,n_rlist);
            
            if(n_h!=linf){
                auto it2=it;
                it2++;
                st.erase(it);
                st.erase(it2);
                st.insert(mypair(n_h,n_w,n_idlist,n_rlist));
                finished=false;
                break;
            }
        }

        if(solve()){
            //スコアが改善したら
        }
        else{
            //しなかったら

        }
        if(finished) break;
    }

    rep(i,t){
        cout << 0 << endl;
    }
}