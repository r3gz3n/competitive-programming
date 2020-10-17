
// Problem: C - A x B + C
// Contest: AtCoder - AtCoder Beginner Contest 179
// URL: https://atcoder.jp/contests/abc179/tasks/abc179_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
 *
 * Author: r3gz3n
 *
 * 3b 13 12 9 56 4e
 * 6 56 a a 5f f
 * 6 56 47 18 56 d
 * 13 46 14 1f 13 27
 * 52 52 a 5a 47 1
 * 1d 13 b 1b 49 17
 *
 */

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define be begin()
#define en end()
#define all(x) (x).begin(),(x).end()
#define alli(a, n, k) (a+k),(a+n+k)
#define rep(i, a, b, k) for(__typeof(a) i = a;i < b;i += k)
#define repi(i, a, b, k) for(__typeof(a) i = a;i > b;i -= k)
#define repeach(i, a) for(auto i: a)
#define repiter(it, a) for(__typeof(a.begin()) it = a.begin();it != a.end(); ++it)
#define siz(x) ((int)x.size())
#define endl '\n'

#define y0 sdkfaslhagaklsldk
#define y1 aasdfasdfasdf
#define yn askfhwqriuperikldjk
#define j1 assdgsdgasghsf
#define tm sdfjahlfasfh
#define lr asgasgash
#define norm asdfasdgasdgsd
#define have adsgagshdshfhds

#define eps 1e-6
#define pi 3.141592653589793

template <class T=int> using order_statistics = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

template<class T=int> inline T gcd(T x, T y) { if (!y) return x; return gcd(y, x%y); }
template<class T=int> inline T mod(T x) { if(x < 0) return -x; else return x; }
template<typename T> bool chmax(T &m, const T q) { if (m < q) {m = q; return true;} else return false; }
template<typename T> bool chmin(T &m, const T q) { if (m > q) {m = q; return true;} else return false; }
template<typename T1, typename T2> pair<T1, T2> operator+(const pair<T1, T2> &l, const pair<T1, T2> &r) { return make_pair(l.first + r.first, l.second + r.second); }
template<typename T1, typename T2> pair<T1, T2> operator-(const pair<T1, T2> &l, const pair<T1, T2> &r) { return make_pair(l.first - r.first, l.second - r.second); }
template<typename T> istream &operator>>(istream &is, vector<T> &vec){ for (auto &v : vec) is >> v; return is; }
template<typename T> ostream &operator<<(ostream &os, const vector<T> &vec){ os << "["; for (auto v : vec) os << v << ","; os << "]"; return os; }
template<typename T> ostream &operator<<(ostream &os, const deque<T> &vec){ os << "deq["; for (auto v : vec) os << v << ","; os << "]"; return os; }
template<typename T> ostream &operator<<(ostream &os, const set<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T> ostream &operator<<(ostream &os, const unordered_set<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T> ostream &operator<<(ostream &os, const multiset<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T> ostream &operator<<(ostream &os, const unordered_multiset<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T1, typename T2> ostream &operator<<(ostream &os, const pair<T1, T2> &pa){ os << "(" << pa.first << "," << pa.second << ")"; return os; }
template<typename TK, typename TV> ostream &operator<<(ostream &os, const map<TK, TV> &mp){ os << "{"; for (auto v : mp) os << v.first << "=>" << v.second << ","; os << "}"; return os; }
template<typename TK, typename TV> ostream &operator<<(ostream &os, const unordered_map<TK, TV> &mp){ os << "{"; for (auto v : mp) os << v.first << "=>" << v.second << ","; os << "}"; return os; }
#define dbg(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ") " << __FILE__ << endl;

typedef vector<int> vii;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<int, pii> ppii;
typedef vector<pii> vpii;
typedef vector<ppii> vppi;




class Solution {
public:
    void solve() {
		int n;
		ll ans = 0;
		cin >> n;
		rep(i, 1, n, 1) {
			ans += (n-1) / i;
		}
		cout << ans << endl;
    }
};

void solve()
{
    cout << std::setprecision(12);
    Solution solution;
    solution.solve();
}


int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
