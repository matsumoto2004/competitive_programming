#include<bits/stdc++.h>
#include<cassert>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include<ext/pb_ds/tag_and_trait.hpp>
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(i, n) for (int i = 0; i < ll(n); ++i)
#define rep2(i, s, n) for (int i = ll(s); i < ll(n); ++i)
#define rep3(i, s, n, d) for(int i = ll(s); i < ll(n); i+=d)
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


bool arg_cmp(const pair<int,int> &a, const pair<int,int> &b) {
    int ua = a.second > 0 or (a.second == 0 and a.first >= 0);
    int ub = b.second > 0 or (b.second == 0 and b.first >= 0);
    if (ua == ub) {
        ll tmp = a.first * b.second - a.second * b.first;
        if (tmp != 0) return tmp > 0;
        else return a.first ? abs(a.first) < abs(b.first) : abs(a.second) < abs(b.second);
    } else return ua < ub;
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

  int now(){
    auto now = std::chrono::high_resolution_clock::now();
    auto passed_time_=std::chrono::duration_cast<std::chrono::milliseconds>(now-start_time_);
    auto time_diff=std::chrono::duration_cast<std::chrono::milliseconds>(now-before_time_);
    auto expected_time_= passed_time_+time_diff;
    return expected_time_.count();
  }

};


std::random_device rd;
std::mt19937 gen(rd());
double myrandom()
{
    std::uniform_real_distribution<double> dist(0, 1);
    return dist(gen);
}



int main() {
    TimeKeeper tk(700);

    int n;
    cin >> n;
    vector<int> a(n+1,0),b(n+1,0);
    rep(i,1,n+1) cin >> a[i] >> b[i];

    n++;//n=1001

    //上位存在を省く
    vvi graph(n);
    vi deg(n,0);
    rep(i,n){
        rep(j,n){
            if(i==j) continue;
            if(a[i]<a[j]&&b[i]<b[j]){
                graph[j].pb(i);
                deg[i]++;
            }
        }
    }

    queue<int> que;
    rep(i,n) if(deg[i]==0) que.push(i);

    vvi ans(n);
    ll score=0;
    vi from(n,-1);

    vector<int> vp;

    while(!que.empty()&&tk.update()){
        int i=que.front();
        que.pop();
        if(i==0)continue;

        for(auto j:graph[i]){
            deg[j]--;
            if(deg[j]==0) que.push(j);
        }

        int f=-1;
        int scor=inf;
        rep(j,n){
            if(a[j]<=a[i]&&b[j]<=b[i]&&i!=j){
                if(chmin(scor,a[i]-a[j]+b[i]-b[j])){
                    f=j;
                }
            }
        }

        assert(f!=-1);
        ans[f].pb(i);
        from[i]=f;

        score+=a[i]-a[f]+b[i]-b[f];
        //debug(score);
    }





    rep(i,n) que.push(i);

    int cnt=n;

    while(!que.empty()&&cnt<5*(n-1)&&tk.update()){
        int x=que.front();
        que.pop();
        vector<int> nxt;
        vector<int> save;

        int mna=inf,mnb=inf;
        for(auto y:ans[x]){
            if(a[y]>a[x]&&b[y]>b[x]){
                nxt.pb(y);
                chmin(mna,a[y]);
                chmin(mnb,b[y]);
            }
            else{
                save.pb(y);
            }
        }

        if(nxt.size()>=2){
            a.pb(mna);
            b.pb(mnb);
            
            ans[x]=save;
            ans[x].pb(cnt);
            ans.pb(nxt);
            que.push(cnt);
            from.pb(x);

            score-=(a[cnt]-a[x]+b[cnt]-b[x])*(ans[cnt].size()-1);
            

            for(auto i:nxt) from[i]=cnt;

            cnt++;
        }
    }


    

    double start_temp=2000000,end_temp=10000;
    double start_time=tk.now();


    while(tk.update()){
        rep(i,1,cnt) que.push(i);

        while(!que.empty()&&tk.update()&&cnt<5*(n-1)){
            int x=que.front();
            que.pop();

            int now=a[x]-a[from[x]]+b[x]-b[from[x]];

            rep(y,cnt){
                //右下にある
                if(a[y]>a[x]&&b[y]<b[x]){

                    if(a[x]==0&&b[y]==0) continue;
                    
                    ll delta=now-(b[x]-b[y]);
                    double prob=0;
                    if(delta>0) prob=1;
                    else{
                        int temp=start_temp + (end_temp - start_temp) * (tk.now()-start_time)/2000;
                        prob=exp(delta/temp);
                    }

                    if(a[from[y]]<a[x]&&prob>=myrandom()){
                        
                        a.pb(a[x]);
                        b.pb(b[y]);

                        //from[x]->xを削除
                        vi nx;
                        for(auto i:ans[from[x]]){
                            if(i!=x) nx.pb(i);
                        }
                        ans[from[x]]=nx;

                        //from[y]->yを削除
                        vi ny;
                        for(auto i:ans[from[y]]){
                            if(i!=y) ny.pb(i);
                        }
                        ans[from[y]]=ny;

                        ans[from[y]].pb(cnt);
                        ans.pb({x,y});

                        from.pb(from[y]);
                        from[x]=cnt;
                        from[y]=cnt;

                        que.push(cnt);
                        cnt++;
                        score-=delta;
                        break;
                    }
                }
                //左上にある
                if(a[y]<a[x]&&b[y]>b[x]){
                    if(a[y]==0&&b[x]==0) continue;

                    ll delta=now-(a[x]-a[y]);
                    double prob=0;
                    if(delta>0) prob=1;
                    else{
                        int temp=start_temp + (end_temp - start_temp) * (tk.now()-start_time)/2000;
                        prob=exp(delta/temp);
                    }



                    if(b[from[y]]<prob>=myrandom()){
                        a.pb(a[y]);
                        b.pb(b[x]);

                        //from[x]->xを削除
                        vi nx;
                        for(auto i:ans[from[x]]){
                            if(i!=x) nx.pb(i);
                        }
                        ans[from[x]]=nx;

                        //from[y]->yを削除
                        vi ny;
                        for(auto i:ans[from[y]]){
                            if(i!=y) ny.pb(i);
                        }
                        ans[from[y]]=ny;

                        ans[from[y]].pb(cnt);
                        ans.pb({x,y});

                        from.pb(from[y]);
                        from[x]=cnt;
                        from[y]=cnt;

                        que.push(cnt);
                        cnt++;
                        score-=delta;
                        break;
                    }
                }
            }
        
        }
    }

    //debug(score);
    cout << cnt-1 << endl;

    auto dfs=[&](auto dfs,int v) -> void {
        for(auto u:ans[v]){
            cout << a[v] << " " << b[v] << " " << a[u] << " " << b[u] << endl;
            dfs(dfs,u);
        }
    };

    dfs(dfs,0);

    debug(tk.now());



}