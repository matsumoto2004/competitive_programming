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

using Real = double;
using Point = complex< Real >;
const Real EPS = 1e-8, PI = acos(-1);

inline bool eq(Real a, Real b) { return fabs(b - a) < EPS; }

Point operator*(const Point &p, const Real &d) {
  return Point(real(p) * d, imag(p) * d);
}

istream &operator>>(istream &is, Point &p) {
  Real a, b;
  is >> a >> b;
  p = Point(a, b);
  return is;
}

ostream &operator<<(ostream &os, Point &p) {
  return os << fixed << setprecision(10) << p.real() << " " << p.imag();
}

// 点 p を反時計回りに theta 回転
Point rotate(Real theta, const Point &p) {
  return Point(cos(theta) * p.real() - sin(theta) * p.imag(), sin(theta) * p.real() + cos(theta) * p.imag());
}

Real radian_to_degree(Real r) {
  return (r * 180.0 / PI);
}

Real degree_to_radian(Real d) {
  return (d * PI / 180.0);
}

// a-b-c の角度のうち小さい方を返す
Real get_angle(const Point &a, const Point &b, const Point &c) {
  const Point v(a - b), w(c - b);
  Real alpha = atan2(v.imag(), v.real()), beta = atan2(w.imag(), w.real());
  if(alpha > beta) swap(alpha, beta);
  Real theta = (beta - alpha);
  return min(theta, 2 * acos(-1) - theta);
}

namespace std {
  bool operator<(const Point &a, const Point &b) {
    return a.real() != b.real() ? a.real() < b.real() : a.imag() < b.imag();
  }
}


struct Line {
  Point a, b;

  Line() = default;

  Line(Point a, Point b) : a(a), b(b) {}

  Line(Real A, Real B, Real C) // Ax + By = C
  {
    if(eq(A, 0)) a = Point(0, C / B), b = Point(1, C / B);
    else if(eq(B, 0)) b = Point(C / A, 0), b = Point(C / A, 1);
    else a = Point(0, C / B), b = Point(C / A, 0);
  }

  friend ostream &operator<<(ostream &os, Line &p) {
    return os << p.a << " to " << p.b;
  }

  friend istream &operator>>(istream &is, Line &a) {
    return is >> a.a >> a.b;
  }
};

struct Segment : Line {
  Segment() = default;

  Segment(Point a, Point b) : Line(a, b) {}
};

struct Circle {
  Point p;
  Real r;

  Circle() = default;

  Circle(Point p, Real r) : p(p), r(r) {}
};

using Points = vector< Point >;
using Polygon = vector< Point >;
using Segments = vector< Segment >;
using Lines = vector< Line >;
using Circles = vector< Circle >;

Real cross(const Point &a, const Point &b) {
  return real(a) * imag(b) - imag(a) * real(b);
}

Real dot(const Point &a, const Point &b) {
  return real(a) * real(b) + imag(a) * imag(b);
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_1_C
// 点の回転方向
int ccw(const Point &a, Point b, Point c) {
  b = b - a, c = c - a;
  if(cross(b, c) > EPS) return +1;  // "COUNTER_CLOCKWISE"
  if(cross(b, c) < -EPS) return -1; // "CLOCKWISE"
  if(dot(b, c) < 0) return +2;      // "ONLINE_BACK"
  if(norm(b) < norm(c)) return -2;  // "ONLINE_FRONT"
  return 0;                         // "ON_SEGMENT"
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_A
// 平行判定
bool parallel(const Line &a, const Line &b) {
  return eq(cross(a.b - a.a, b.b - b.a), 0.0);
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_A
// 垂直判定
bool orthogonal(const Line &a, const Line &b) {
  return eq(dot(a.a - a.b, b.a - b.b), 0.0);
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_1_A
// 射影
// 直線 l に p から垂線を引いた交点を求める
Point projection(const Line &l, const Point &p) {
  double t = dot(p - l.a, l.a - l.b) / norm(l.a - l.b);
  return l.a + (l.a - l.b) * t;
}

Point projection(const Segment &l, const Point &p) {
  double t = dot(p - l.a, l.a - l.b) / norm(l.a - l.b);
  return l.a + (l.a - l.b) * t;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_1_B
// 反射
// 直線 l を対称軸として点 p  と線対称にある点を求める
Point reflection(const Line &l, const Point &p) {
  return p + (projection(l, p) - p) * 2.0;
}

bool intersect(const Line &l, const Point &p) {
  return abs(ccw(l.a, l.b, p)) != 1;
}

bool intersect(const Line &l, const Line &m) {
  return abs(cross(l.b - l.a, m.b - m.a)) > EPS || abs(cross(l.b - l.a, m.b - l.a)) < EPS;
}

bool intersect(const Segment &s, const Point &p) {
  return ccw(s.a, s.b, p) == 0;
}

bool intersect(const Line &l, const Segment &s) {
  return cross(l.b - l.a, s.a - l.a) * cross(l.b - l.a, s.b - l.a) < EPS;
}

Real distance(const Line &l, const Point &p);

bool intersect(const Circle &c, const Line &l) {
  return distance(l, c.p) <= c.r + EPS;
}

bool intersect(const Circle &c, const Point &p) {
  return abs(abs(p - c.p) - c.r) < EPS;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_B
bool intersect(const Segment &s, const Segment &t) {
  return ccw(s.a, s.b, t.a) * ccw(s.a, s.b, t.b) <= 0 && ccw(t.a, t.b, s.a) * ccw(t.a, t.b, s.b) <= 0;
}

int intersect(const Circle &c, const Segment &l) {
  if(norm(projection(l, c.p) - c.p) - c.r * c.r > EPS) return 0;
  auto d1 = abs(c.p - l.a), d2 = abs(c.p - l.b);
  if(d1 < c.r + EPS && d2 < c.r + EPS) return 0;
  if(d1 < c.r - EPS && d2 > c.r + EPS || d1 > c.r + EPS && d2 < c.r - EPS) return 1;
  const Point h = projection(l, c.p);
  if(dot(l.a - h, l.b - h) < 0) return 2;
  return 0;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_A&lang=jp
int intersect(Circle c1, Circle c2) {
  if(c1.r < c2.r) swap(c1, c2);
  Real d = abs(c1.p - c2.p);
  if(c1.r + c2.r < d) return 4;
  if(eq(c1.r + c2.r, d)) return 3;
  if(c1.r - c2.r < d) return 2;
  if(eq(c1.r - c2.r, d)) return 1;
  return 0;
}

Real distance(const Point &a, const Point &b) {
  return abs(a - b);
}

Real distance(const Line &l, const Point &p) {
  return abs(p - projection(l, p));
}

Real distance(const Line &l, const Line &m) {
  return intersect(l, m) ? 0 : distance(l, m.a);
}

Real distance(const Segment &s, const Point &p) {
  Point r = projection(s, p);
  if(intersect(s, r)) return abs(r - p);
  return min(abs(s.a - p), abs(s.b - p));
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_D
Real distance(const Segment &a, const Segment &b) {
  if(intersect(a, b)) return 0;
  return min({distance(a, b.a), distance(a, b.b), distance(b, a.a), distance(b, a.b)});
}

Real distance(const Line &l, const Segment &s) {
  if(intersect(l, s)) return 0;
  return min(distance(l, s.a), distance(l, s.b));
}

Point crosspoint(const Line &l, const Line &m) {
  Real A = cross(l.b - l.a, m.b - m.a);
  Real B = cross(l.b - l.a, l.b - m.a);
  if(eq(abs(A), 0.0) && eq(abs(B), 0.0)) return m.a;
  return m.a + (m.b - m.a) * B / A;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_C
Point crosspoint(const Segment &l, const Segment &m) {
  return crosspoint(Line(l), Line(m));
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_D
pair< Point, Point > crosspoint(const Circle &c, const Line l) {
  Point pr = projection(l, c.p);
  Point e = (l.b - l.a) / abs(l.b - l.a);
  if(eq(distance(l, c.p), c.r)) return {pr, pr};
  double base = sqrt(c.r * c.r - norm(pr - c.p));
  return {pr - e * base, pr + e * base};
}

pair< Point, Point > crosspoint(const Circle &c, const Segment &l) {
  Line aa = Line(l.a, l.b);
  if(intersect(c, l) == 2) return crosspoint(c, aa);
  auto ret = crosspoint(c, aa);
  if(dot(l.a - ret.first, l.b - ret.first) < 0) ret.second = ret.first;
  else ret.first = ret.second;
  return ret;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_E
pair< Point, Point > crosspoint(const Circle &c1, const Circle &c2) {
  Real d = abs(c1.p - c2.p);
  Real a = acos((c1.r * c1.r + d * d - c2.r * c2.r) / (2 * c1.r * d));
  Real t = atan2(c2.p.imag() - c1.p.imag(), c2.p.real() - c1.p.real());
  Point p1 = c1.p + Point(cos(t + a) * c1.r, sin(t + a) * c1.r);
  Point p2 = c1.p + Point(cos(t - a) * c1.r, sin(t - a) * c1.r);
  return {p1, p2};
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_F
// 点 p を通る円 c の接線
pair< Point, Point > tangent(const Circle &c1, const Point &p2) {
  return crosspoint(c1, Circle(p2, sqrt(norm(c1.p - p2) - c1.r * c1.r)));
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_G
// 円 c1, c2 の共通接線
Lines tangent(Circle c1, Circle c2) {
  Lines ret;
  if(c1.r < c2.r) swap(c1, c2);
  Real g = norm(c1.p - c2.p);
  if(eq(g, 0)) return ret;
  Point u = (c2.p - c1.p) / sqrt(g);
  Point v = rotate(PI * 0.5, u);
  for(int s : {-1, 1}) {
    Real h = (c1.r + s * c2.r) / sqrt(g);
    if(eq(1 - h * h, 0)) {
      ret.emplace_back(c1.p + u * c1.r, c1.p + (u + v) * c1.r);
    } else if(1 - h * h > 0) {
      Point uu = u * h, vv = v * sqrt(1 - h * h);
      ret.emplace_back(c1.p + (uu + vv) * c1.r, c2.p - (uu + vv) * c2.r * s);
      ret.emplace_back(c1.p + (uu - vv) * c1.r, c2.p - (uu - vv) * c2.r * s);
    }
  }
  return ret;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_3_B
// 凸性判定
bool is_convex(const Polygon &p) {
  int n = (int) p.size();
  for(int i = 0; i < n; i++) {
    if(ccw(p[(i + n - 1) % n], p[i], p[(i + 1) % n]) == -1) return false;
  }
  return true;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_4_A
// 凸包
Polygon convex_hull(Polygon &p) {
  int n = (int) p.size(), k = 0;
  if(n <= 2) return p;
  sort(p.begin(), p.end());
  vector< Point > ch(2 * n);
  for(int i = 0; i < n; ch[k++] = p[i++]) {
    while(k >= 2 && cross(ch[k - 1] - ch[k - 2], p[i] - ch[k - 1]) < EPS) --k;
  }
  for(int i = n - 2, t = k + 1; i >= 0; ch[k++] = p[i--]) {
    while(k >= t && cross(ch[k - 1] - ch[k - 2], p[i] - ch[k - 1]) < EPS) --k;
  }
  ch.resize(k - 1);
  return ch;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_3_C
// 多角形と点の包含判定
enum {
  OUT, ON, IN
};

int contains(const Polygon &Q, const Point &p) {
  bool in = false;
  for(int i = 0; i < Q.size(); i++) {
    Point a = Q[i] - p, b = Q[(i + 1) % Q.size()] - p;
    if(a.imag() > b.imag()) swap(a, b);
    if(a.imag() <= 0 && 0 < b.imag() && cross(a, b) < 0) in = !in;
    if(cross(a, b) == 0 && dot(a, b) <= 0) return ON;
  }
  return in ? IN : OUT;
}


// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1033
// 線分の重複除去
void merge_segments(vector< Segment > &segs) {

  auto merge_if_able = [](Segment &s1, const Segment &s2) {
    if(abs(cross(s1.b - s1.a, s2.b - s2.a)) > EPS) return false;
    if(ccw(s1.a, s2.a, s1.b) == 1 || ccw(s1.a, s2.a, s1.b) == -1) return false;
    if(ccw(s1.a, s1.b, s2.a) == -2 || ccw(s2.a, s2.b, s1.a) == -2) return false;
    s1 = Segment(min(s1.a, s2.a), max(s1.b, s2.b));
    return true;
  };

  for(int i = 0; i < segs.size(); i++) {
    if(segs[i].b < segs[i].a) swap(segs[i].a, segs[i].b);
  }
  for(int i = 0; i < segs.size(); i++) {
    for(int j = i + 1; j < segs.size(); j++) {
      if(merge_if_able(segs[i], segs[j])) {
        segs[j--] = segs.back(), segs.pop_back();
      }
    }
  }
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1033
// 線分アレンジメント
// 任意の2線分の交点を頂点としたグラフを構築する
vector< vector< int > > segment_arrangement(vector< Segment > &segs, vector< Point > &ps) {
  vector< vector< int > > g;
  int N = (int) segs.size();
  for(int i = 0; i < N; i++) {
    ps.emplace_back(segs[i].a);
    ps.emplace_back(segs[i].b);
    for(int j = i + 1; j < N; j++) {
      const Point p1 = segs[i].b - segs[i].a;
      const Point p2 = segs[j].b - segs[j].a;
      if(cross(p1, p2) == 0) continue;
      if(intersect(segs[i], segs[j])) {
        ps.emplace_back(crosspoint(segs[i], segs[j]));
      }
    }
  }
  sort(begin(ps), end(ps));
  ps.erase(unique(begin(ps), end(ps)), end(ps));

  int M = (int) ps.size();
  g.resize(M);
  for(int i = 0; i < N; i++) {
    vector< int > vec;
    for(int j = 0; j < M; j++) {
      if(intersect(segs[i], ps[j])) {
        vec.emplace_back(j);
      }
    }
    for(int j = 1; j < vec.size(); j++) {
      g[vec[j - 1]].push_back(vec[j]);
      g[vec[j]].push_back(vec[j - 1]);
    }
  }
  return (g);
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_4_C
// 凸多角形の切断
// 直線 l.a-l.b で切断しその左側にできる凸多角形を返す
Polygon convex_cut(const Polygon &U, Line l) {
  Polygon ret;
  for(int i = 0; i < U.size(); i++) {
    Point now = U[i], nxt = U[(i + 1) % U.size()];
    if(ccw(l.a, l.b, now) != -1) ret.push_back(now);
    if(ccw(l.a, l.b, now) * ccw(l.a, l.b, nxt) < 0) {
      ret.push_back(crosspoint(Line(now, nxt), l));
    }
  }
  return (ret);
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_3_A
// 多角形の面積
Real area(const Polygon &p) {
  Real A = 0;
  for(int i = 0; i < p.size(); ++i) {
    A += cross(p[i], p[(i + 1) % p.size()]);
  }
  return A * 0.5;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_H
// 円と多角形の共通部分の面積
Real area(const Polygon &p, const Circle &c) {
  if(p.size() < 3) return 0.0;
  function< Real(Circle, Point, Point) > cross_area = [&](const Circle &c, const Point &a, const Point &b) {
    Point va = c.p - a, vb = c.p - b;
    Real f = cross(va, vb), ret = 0.0;
    if(eq(f, 0.0)) return ret;
    if(max(abs(va), abs(vb)) < c.r + EPS) return f;
    if(distance(Segment(a, b), c.p) > c.r - EPS) return c.r * c.r * arg(vb * conj(va));
    auto u = crosspoint(c, Segment(a, b));
    vector< Point > tot{a, u.first, u.second, b};
    for(int i = 0; i + 1 < tot.size(); i++) {
      ret += cross_area(c, tot[i], tot[i + 1]);
    }
    return ret;
  };
  Real A = 0;
  for(int i = 0; i < p.size(); i++) {
    A += cross_area(c, p[i], p[(i + 1) % p.size()]);
  }
  return A;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_4_B
// 凸多角形の直径(最遠頂点対間距離)
Real convex_diameter(const Polygon &p) {
  int N = (int) p.size();
  int is = 0, js = 0;
  for(int i = 1; i < N; i++) {
    if(p[i].imag() > p[is].imag()) is = i;
    if(p[i].imag() < p[js].imag()) js = i;
  }
  Real maxdis = norm(p[is] - p[js]);

  int maxi, maxj, i, j;
  i = maxi = is;
  j = maxj = js;
  do {
    if(cross(p[(i + 1) % N] - p[i], p[(j + 1) % N] - p[j]) >= 0) {
      j = (j + 1) % N;
    } else {
      i = (i + 1) % N;
    }
    if(norm(p[i] - p[j]) > maxdis) {
      maxdis = norm(p[i] - p[j]);
      maxi = i;
      maxj = j;
    }
  } while(i != is || j != js);
  return sqrt(maxdis);
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_5_A
// 最近点対
Real closest_pair(Points ps) {
  if(ps.size() <= 1) throw (0);
  sort(begin(ps), end(ps));

  auto compare_y = [&](const Point &a, const Point &b) {
    return imag(a) < imag(b);
  };
  vector< Point > beet(ps.size());
  const Real INF = 1e18;

  function< Real(int, int) > rec = [&](int left, int right) {
    if(right - left <= 1) return INF;
    int mid = (left + right) >> 1;
    auto x = real(ps[mid]);
    auto ret = min(rec(left, mid), rec(mid, right));
    inplace_merge(begin(ps) + left, begin(ps) + mid, begin(ps) + right, compare_y);
    int ptr = 0;
    for(int i = left; i < right; i++) {
      if(abs(real(ps[i]) - x) >= ret) continue;
      for(int j = 0; j < ptr; j++) {
        auto luz = ps[i] - beet[ptr - j - 1];
        if(imag(luz) >= ret) break;
        ret = min(ret, abs(luz));
      }
      beet[ptr++] = ps[i];
    }
    return ret;
  };
  return rec(0, (int) ps.size());
}

double pi=3.1415926535899793238;

int main() {
    ll n;
    cin >> n;
    Points v;
    map<Point,ll> id;
    vector<Real> ans(n);
    rep(i,n){
        double x,y;
        cin >> x >> y;
        v.pb({x,y});
        id[{x,y}]=i;
    }
    Polygon ch=convex_hull(v);
    ll nn=ch.size();
    rep(i,nn){
        ans[id[ch[i]]]=(pi-get_angle(ch[(i+nn-1)%nn],ch[i],ch[(i+1)%nn]))/(pi*2);
    }
    rep(i,n) cout << ans[i] << endl;

}