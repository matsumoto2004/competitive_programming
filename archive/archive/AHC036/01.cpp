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
using PQ = priority_queue <T>;

template<class T>
using rPQ = priority_queue <T, vector<T>, greater <T>>;

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
    //debug(expected_time_.count());
    return  expected_time_.count() <= time_threshold_;
  }

};

TimeKeeper time_keeper(2950);
int n,m,t,la,lb;
vvi graph;
vector<pair<int,int>> edges;
vi vt;
vi vx,vy;

void input(){
    cin >> n >> m >> t >> la >> lb;
    graph.resize(n);
    vt.resize(t);
    vx.resize(n);
    vy.resize(n);
    rep(i,m){
        ll x,y;
        cin >> x >> y;
        if(x>y) swap(x,y);
        graph[x].pb(y);
        graph[y].pb(x);
        edges.push_back({x,y});
    }
    rep(i,t) cin >> vt[i];
    rep(i,n) cin >> vx[i] >> vy[i];
}


vvi adj_list;
int adj_count;

vi id;
vvi route;

int nid;
vi idcnt;
vi idsum;
int ans=inf;

void makeRoute(vi n_id){
    int whe=0;
    int n_ans=1;
    vvi n_route(t);
    rep(i,t){
        vi dist(n,inf);
        vi from(n,-1);
        dist[whe]=0;
        rPQ<pair<int,int>> pq;
        pq.push({0,whe});
        while(!pq.empty()){
            auto [y,x]=pq.top();
            pq.pop();
            if(dist[x]<y) continue;
            
            for(int nx:graph[x]){
                int ny=y+(n_id[x]!=n_id[y]);
                if(dist[nx]<=ny) continue;
                dist[nx]=ny;
                from[nx]=x;
                pq.push({ny,nx});
            }
        }
        n_ans+=dist[vt[i]];

        int pos=vt[i];
        while(pos!=whe){
            n_route[i].pb(pos);
            pos=from[pos];
        }
        reverse(all(n_route[i]));

        whe=vt[i];
    }
    if(n_ans<ans){
        swap(id,n_id);
        swap(route,n_route);
        swap(ans,n_ans);
    }
}


void init(){
    nid=(n-1)/lb+1;
    id.resize(n);
    route.resize(t);
    idcnt.resize(nid);
    idsum.resize(nid+1);
    rep(i,nid) idcnt[i]=lb-1+(n%nid==0);
    rep(i,n%nid) idcnt[i]++;
    rep(i,nid) idsum[i+1]=idsum[i]+idcnt[i];

    debug(idcnt);


    auto comp=[&](const int &i,const int &j) -> bool {
        return pair(vx[i],vy[i]) < pair(vx[j],vy[j]);
    };

    auto dist=[&](int x0,int y0,int x1,int y1){
        return sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0));
    };

    set<int,decltype(comp)> st(comp);
    rep(i,n) st.insert(i);

    
    rep(ii,nid){
        rPQ<pair<double,int>> pq; 
        int x0=vx[*st.begin()],y0=vy[*st.begin()];


        for(auto i=st.begin();i!=st.end();i++){
            pq.push({dist(x0,y0,vx[*i],vy[*i]),*i});
        }

        rep(i,idcnt[ii]){
            int j=pq.top().second;
            pq.pop();
            id[j]=ii;
            st.erase(j);
        }
    }

    adj_list.resize(nid,vi(nid));
    for(auto [x,y]:edges){
        if(id[x]!=id[y]){
            adj_list[min(id[x],id[y])][max(id[x],id[y])]++;
            if(adj_list[id[x]][id[y]]==1) adj_count++;
            adj_edges.insert({x,y});
        }
    }


}

std::random_device rd;
std::mt19937 gen(rd());
int random(int low, int high)
{
    std::uniform_int_distribution<int> dist(low, high);
    return dist(gen);
}

void solve(){
    //抜いても
}

vector<pair<int,int>> final_va;
void output(){
    makeRoute(id);
    rep(i,n) final_va.pb({id[i],i});
    sort(all(final_va));
    rep(i,n) cout << final_va[i].second << " ";
    rep(i,la-n) cout << 0 << " ";
    cout << endl;

    //まずは初期位置へ
    ll now=id[0];
    cout << "s " << idcnt[now] << " " << idsum[now] << " " << 0 << endl;
    for(auto v:route){
        for(auto i:v){
            if(id[i]!=now){
                now=id[i];
                cout << "s " << idcnt[now] << " " << idsum[now] << " " << 0 << endl;
            }
            cout << "m " << i << endl;
        }
    }
}

int main() {
    input();
    init();
    while(time_keeper.update()) solve();
    output();
}