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
using PQ = priority_queue <T, vector<T>, greater <T> >;

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

  int64_t count(){
    auto now = std::chrono::high_resolution_clock::now();
    auto passed_time_=std::chrono::duration_cast<std::chrono::milliseconds>(now-start_time_);
    auto time_diff=std::chrono::duration_cast<std::chrono::milliseconds>(now-before_time_);
    auto expected_time_= passed_time_+time_diff;
    before_time_=now;
    debug(expected_time_.count());
    return  expected_time_.count();
  }

};

TimeKeeper tk(1950);

template<typename T>
struct Compress{
    vl origin;
    vl v;
    vl rev;//id -> 元の数字
    map<ll,ll> mp;//元の数字 -> id
    
    Compress(vector<T> v_) : origin(v_) ,rev(v_) {
        sort(all(rev));
        rev.erase(unique(all(rev)),rev.end());
        rep(i,rev.size()) mp[rev[i]]=i;
        rep(i,origin.size()) v.pb(mp[origin[i]]);
    }

};

vl unite(vl v1,vl v2){
    for(auto x:v2) v1.pb(x);
    return v1;
}


std::random_device rd;
std::mt19937 gen(rd());
ll random(ll low, ll high)
{
    std::uniform_int_distribution<ll> dist(low, high-1);
    return dist(gen);
}


int main() {
    ll n;
    cin >> n;
    vl xx(2*n),yy(2*n);

    rep(i,2*n) cin >> xx[i] >> yy[i];
    rep(i,2*n){
        xx[i]/=30;
        yy[i]/=30;
    }

    Compress<ll> cpx(xx),cpy(yy);

    vl ax(n),ay(n),bx(n),by(n);

    rep(i,n){
        ax[i]=cpx.v[i];
        ay[i]=cpy.v[i];
        bx[i]=cpx.v[n+i];
        by[i]=cpy.v[n+i];
    }

    ll bigx=MAX(cpx.v),bigy=MAX(cpy.v);
    vvl rui(bigx+5,vl(bigy+5,0));
    rep(i,n){
        rui[ax[i]+1][ay[i]+1]++;
        rui[bx[i]+1][by[i]+1]--;
    }
    rep(i,bigx+2)rep(j,bigy+2){
        rui[i+1][j]+=rui[i][j];
    }
    rep(i,bigx+2)rep(j,bigy+2){
        rui[i][j+1]+=rui[i][j];
    }


    ll score=0;
    vl ans=vl{0,0,bigx-1,bigy-1};


    while(tk.update()){
        //辺をランダムに選ぶ
        ll dif=0;
        ll ax=random(dif,bigx-dif);
        ll ay=random(dif,bigy-dif);
        ll bx=random(dif,bigx-dif);
        ll by=random(dif,bigy-dif);

        if(ax>bx) swap(ax,bx);
        if(ay>by) swap(ay,by);
        if(ax==bx||ay==by) continue;

        ll nowscore=rui[bx+1][by+1]+rui[ax][ay]-rui[ax][by+1]-rui[bx][ay+1];

        if(nowscore<=score-30) continue;

        while(ax>0){
            ax--;
            ll nextscore=rui[bx+1][by+1]+rui[ax][ay]-rui[ax][by+1]-rui[bx][ay+1];
            if(nextscore<=nowscore){
                ax++;
                break;
            }
            else nowscore=nextscore;
        }
        while(bx<bigx-1){
            bx++;
            ll nextscore=rui[bx+1][by+1]+rui[ax][ay]-rui[ax][by+1]-rui[bx][ay+1];
            if(nextscore<=nowscore){
                bx--;
                break;
            }
            else nowscore=nextscore;
        }
        while(ay>0){
            ay--;
            ll nextscore=rui[bx+1][by+1]+rui[ax][ay]-rui[ax][by+1]-rui[bx][ay+1];
            if(nextscore<=nowscore){
                ay++;
                break;
            }
            else nowscore=nextscore;
        }
        while(by<bigy-1){
            by++;
            ll nextscore=rui[bx+1][by+1]+rui[ax][ay]-rui[ax][by+1]-rui[bx][ay+1];
            if(nextscore<=nowscore){
                by--;
                break;
            }
            else nowscore=nextscore;
        }

        if(chmax(score,nowscore)){
            ans=vl{ax,ay,bx,by};
        }

        

    }
    //print(ans);
    //print(cpx.rev[1300]);
    //print(cpx.rev.size(),cpy.rev.size());
    ans[0]=cpx.rev[ans[0]];
    ans[1]=cpy.rev[ans[1]];
    ans[2]=cpx.rev[ans[2]];
    ans[3]=cpy.rev[ans[3]];

    cout << 4 << endl;
    rep(i,4) ans[i]*=30;
    cout << ans[0] << " " << ans[1] << endl;
    cout << ans[2] << " " << ans[1] << endl;
    cout << ans[2] << " " << ans[3] << endl;
    cout << ans[0] << " " << ans[3] << endl;





}