#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

struct Diamond{
	int val;
	int w;
	bool operator<(const Diamond& d) const{
		return w < d.w;
	}
};

void solve() {
	priority_queue<int> q;
	int n,k;
	cin>>n>>k;
	Diamond c[n+5];
	int t[k+5];
	for(int i = 0;i < n;i++){
		cin>>c[i].w>>c[i].val;
	}
	for(int i = 0;i < k;i++){
		cin>>t[i];
	}
	sort(c,c+n);
	sort(t,t+k);
	LL ans = 0;
	for(int i = 0,j = 0;i < k;i++){
		while(j < n && c[j].w <= t[i]){
			q.push(c[j].val);
			j++;
		}
		if(!q.empty()){
			ans += q.top();
			q.pop();
		}
	}
	cout<<ans<<endl;
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}

