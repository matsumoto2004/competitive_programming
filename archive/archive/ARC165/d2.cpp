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

#include <bits/stdc++.h>
using namespace std;

// 辺を表す構造体
template<class T> struct Edge {
    int from, to;
    T val;
    Edge(int f = -1, int t = -1, T v = -1) : from(f), to(t), val(v) {}
};

// グラフを表す型
template<class T> using Graph = vector<vector<Edge<T>>>;

// サイクル検出ソルバー
template<class T> struct CycleDetection {
    // 入力されたグラフ
    Graph<T> G;
    
    // 探索の様子
    vector<bool> seen, finished;
    vector<Edge<T>> history;
    
    // コンストラクタ
    CycleDetection() { }
    CycleDetection(const Graph<T> &graph) { init(graph); }
    void init(const Graph<T> &graph) {
        G = graph;
        seen.assign(G.size(), false);
        finished.assign(G.size(), false);
    }
    
    // サイクル検出
    // return the vertex where cycle is detected
    int dfs(int v, const Edge<T> &e, bool is_prohibit_reverse = true) {
        seen[v] = true;    // 行きがけ時に true になる
        history.push_back(e);    // 履歴を残す
        for (const Edge<T> &e2 : G[v]) {
            // 逆流を禁止する場合は逆流を禁止する
            if (is_prohibit_reverse && e2.to == e.from) continue;
            
            // 頂点 v2 がすでに探索済みの場合はスキップ
            if (finished[e2.to]) continue;

            // サイクルが検出された
            if (seen[e2.to] && !finished[e2.to]) {
                history.push_back(e2);
                return e2.to;
            }

            // 頂点 v2 を再帰的に探索する
            int pos = dfs(e2.to, e2, is_prohibit_reverse);
            if (pos != -1) return pos;
        }
        finished[v] = true;    // 帰りがけ時に true になる
        history.pop_back();    // 探索が完全に終了した頂点 (赤色) は履歴から除去する
        return -1;
    }
    
    // 履歴からサイクルのみを抽出する関数 (pos：サイクルを検出した頂点)
    vector<Edge<T>> reconstruct(int pos) {
        vector<Edge<T>> cycle;
        
        // 履歴を遡ってサイクルを形作る
        while (!history.empty()) {
            const Edge<T> &e = history.back();
            cycle.push_back(e);
            history.pop_back();
            if (e.from == pos) break;
        }
        
        // サイクルの向きを正順にする
        reverse(cycle.begin(), cycle.end());
        return cycle;
    }
    
    // サイクルを返す関数 (is_prohibit_reverse は逆流を許さないかどうか)
    vector<Edge<T>> detect(bool is_prohibit_reverse = true) {
        int pos = -1;
        for (int v = 0; v < (int)G.size() && pos == -1; ++v) {
            if (seen[v]) continue;
            history.clear();
            pos = dfs(v, Edge<T>(), is_prohibit_reverse);
            if (pos != -1) return reconstruct(pos);
        }
        return vector<Edge<T>>();
    }
};

int main() {
    // 有向グラフの受け取り
    int N, M;
    cin >> N >> M;
    Graph<int> G(N);
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(Edge(u, v, i));
    }
    
    // cycle detection
    CycleDetection<int> cd(G);
    const vector<Edge<int>> &res = cd.detect(false);
    
    // 出力
    if (res.empty()) cout << -1 << endl;
    else {
        cout << res.size() << endl;
        for (const Edge<int> &e : res) {
            cout << e.val << endl;
        }
    }
}

int main(){

}