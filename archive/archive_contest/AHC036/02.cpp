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

  void get_time(){
    auto now = std::chrono::high_resolution_clock::now();
    auto passed_time_=std::chrono::duration_cast<std::chrono::milliseconds>(now-start_time_);
    auto time_diff=std::chrono::duration_cast<std::chrono::milliseconds>(now-before_time_);
    auto expected_time_= passed_time_+time_diff;
    debug(expected_time_.count());
  }

};

TimeKeeper time_keeper(2850);
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

std::random_device rd;
std::mt19937 gen(rd());
int random(int low, int high)
{
    std::uniform_int_distribution<int> dist(low, high-1);
    return dist(gen);
}


vi best_path;
vi best_seen;
int remain=la-n;

//同一の頂点はla-n回まで通って良いことを考えながら経路を作る
void init(){
    vi path;
    vi seen(n,0);
    
    //念の為
    best_seen.resize(n);
    //

    int remaining_search=5000000;

    auto dfs=[&](auto dfs,int v) -> void {

        if(remaining_search<=0) return;
        remaining_search--;

        seen[v]=1;
        path.pb(v);
        bool next_exist=false;
        for(auto u:graph[v]){
            if(seen[u]) continue;
            else{
                dfs(dfs,u);
                next_exist=true;
            }
        }
        if((!next_exist)&&path.size()>best_path.size()){
            best_path=path;
            best_seen=seen;
        }
        path.ppb();
        seen[v]=0;
    };
    dfs(dfs,0);


}

void solve(){
    //長さ10くらいの区間を取り、改善していく
    int len=random(2,8);
    if(len>=best_path.size()-2) return;

    int nn=best_path.size();
    int seed=random(1,nn-len);
    int s=best_path[seed],g=best_path[seed+len-1];
    


    vi long_path;
    vi path;

    vi seen=best_seen;
    vi long_seen;

    rep(i,seed,seed+len){
        seen[best_path[i]]=0;
    }

    int remaining_search=3*len;

    auto dfs=[&](auto dfs,int v) -> void {
        if(remaining_search<=0) return;
        remaining_search--;
        
        seen[v]=1;
        path.pb(v);


        if(v==g&&path.size()>long_path.size()){
            long_path=path;
            long_seen=seen;

        }
        if(v!=g){
            shuffle(all(graph[v]),gen);

            for(auto u:graph[v]){
                if(seen[u]) continue;
                dfs(dfs,u);
            }
        }
        path.ppb();
        seen[v]=0;

    };

    dfs(dfs,s);

    if(long_path.size()>len){
        vi new_path;
        rep(i,0,seed) new_path.pb(best_path[i]);
        for(auto i:long_path) new_path.pb(i);
        rep(i,seed+len,nn) new_path.pb(best_path[i]);
        best_path=new_path;
        best_seen=long_seen;
    }
}

vector<vector<pair<int,int>>> route;
vi id;

void makeRoute(vi path){

    route.resize(t);

    vector<map<int,int>> cango(n);

    rep(i,n){
        rep(mns,lb){
            ll mn=id[i]-mns;
            mx=mn+lb;//[mn,mx)
            if(mn<0) continue;
            if(mx>=n) continue;

            set<int> seen;
            auto dfs=[&](auto dfs,int v) -> void {
                seen.insert(v);
                cango[v]=mns;
                for(auto u:graph[v]){
                    if(seen.count(u)) continue;
                    if(id[u]<mn||id[u]>=mx) continue;
                    dfs(dfs,u);
                }
            };
            dfs(dfs,i);
        }
    }

    int pos=0;
    int mns=-1;
    rep(i,t){
        

        int mn=id[pos]-mns;
        int mx=id[pos]-mns+lb;

        deque<int> dq;
        vector<int> dist(n,inf);
        vector<int> from(n,-2);//どこからきたか
        vector<int> way(n,-2);//どうやってきたか

        //pos,mnsから行けるところを列挙
        if(mns>=0){
            set<int> start;
            auto dfs=[&](auto dfs,int v) -> void {
                seen.insert(v);
                for(auto u:graph[v]){
                    if(start.count(u)) continue;
                    if(id[u]<mn||id[u]>=mx) continue;
                    dfs(dfs,u);
                }
            }
            dfs(dfs,pos);
            for(auto i=start.first;i!=start.end();i++){
                dist[*i]=0;
                dq.push_front(*i);
                way[*i]=id[pos]-mns;
            }
        }
        else{
            for(auto [u,val]:cango){
                dist[u]=0;
                way[u]=id[pos]-val;
            }
        }
        
        while(!dq.empty()){
            int v=dq.front();
            dq.pop_front();

            if(v==vt[i]) break;

            for(auto [u,val]:cango[v]){
                if(dist[u]<=dist[v]) continue;
                dist[u]=dist[v];
                
                from[u]=v;
                way[u]=id[v]-mns;//信号の利用

                dq.push_front(u);
            }
            for(auto u:graph[v]){
                if(dist[u]<=dist[v]+1) continue;
                dist[u]=dist[v]+1;
                
                from[u]=v;
                way[u]=-1;//普通の移動
                
                dq.push_back(u);
            }
        }

        int nowpos=vt[i];
        while(dist[nowpos]!=0){
            route[i].eb(nowpos,way[nowpos]);
            nowpos=from[pos];   
        }
        route[i].eb(nowpos,way[nowpos]);
        reverse(all(route[i]));

        
        pos=vt[i];
        mns=way.back();
    }


    

    
}


vi final_path;

void complete(){
    vvi add(n);//ある数字の直後に付け加える

    rep(i,n){

        if(!best_seen[i]){
            set<int> st;
            bool finished=false;
            auto dfs=[&](auto dfs,int v) -> void {
                if(finished) return;
                st.insert(v);
                if(best_seen[v]){
                    add[v].pb(i);
                    finished=true;
                }
                else{
                    for(auto u:graph[v]){
                        if(!st.count(u)) dfs(dfs,u);
                    }
                }
            };
            dfs(dfs,i);
        }
    }
    
    for(auto x:best_path){
        final_path.pb(x);
        for(auto y:add[x]) final_path.pb(y);
    }

    rep(i,n) cout << final_path[i] << " ";
    rep(i,la-n) cout << 0 << " ";
    cout << endl;


    makeRoute(final_path);
    
}

void output(){
    int pos=0,id=-1;

    for(auto v:route){
        for(auto [x,y]:v){
            if(id==-1&&y!=-1){
                //posからxまでのルートを作る

                id=y;
            }
            if(id==-1&&)

            if(id!=-1){
                assert(y==-1);
            }
        }
    }

}

int main() {
    input();
    init();
    while(time_keeper.update()) solve();
    complete();
    output();
}