#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(x, start, end)                                                   \
	for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
			 ((start) < (end) ? x++ : x--))
#define each(i, v) for (auto i : (v))
#define fast                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
#define nl '\n'
#define pr pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define mp map
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pub push_back
#define pob pop_back
#define mpr make_pair
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

ll n;
string s, w;

bool v(char x) {
	return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y';
}

int main() {
	fast;

	cin >> n >> s;
	ll ans(0);

	while (n--) {
		cin >> w;
		bool f(1);
		if (s.length() != w.length()) {
			f = 0;
			continue;
		}
		for (ll i(0); i < w.length(); i++) {
			if ((v(w[i]) && s[i] == 'C') || (!v(w[i]) && s[i] == 'V')) f = 0;
		}
		if (f) ans++;
	}

	cout << ans << '\n';
}
