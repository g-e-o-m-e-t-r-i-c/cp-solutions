#include <bits/stdc++.h>
using namespace std;
typedef long int li;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
#define pa pair
#define vc vector
#define dq deque
#define qu queue
#define pq priority_queue
#define rep(x, start, end)                                                   \
	for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); \
			 ((start) < (end) ? x++ : x--))
#define each(i, v) for (auto i : (v))
#define io()                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL)
#define nl '\n'
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define sz(c) (ll)(c.size())
#define pb push_back
#define pp pop_back
#define mp make_pair
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

ll h, w, k, x, s(0);

int main() {
	io();
	cin >> h >> w >> k;

	rep(i, 0, h * w) {
		cin >> x;
		s += x;
	}

	cout << s - (2 * h * w - h - w) * k << nl;
}
