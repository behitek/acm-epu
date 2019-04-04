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

struct Num{
	int val;
	int pos;
};

bool compare( const Num a, const Num b){
	if(a.val == b.val) return a.pos < b.pos;
	return a.val < b.val;
}

void solve() {
	int n;
	cin>>n;
	Num a[n+5];
	for(int i = 0;i < n;i++){
		cin>>a[i].val;
		a[i].pos = i+1; 
	}
	sort(a,a+n,compare);
	int d = 0,c = 1;
	int ans[n][2],t = 0;
	while(c <= n){
		while(a[c].val == a[d].val) c++;
		if(c - d == 1){
			ans[t][0] = a[d].val;
			ans[t][1] = 0;
			t++;
		}else if(c - d == 2){
			ans[t][0] = a[d].val;
			ans[t][1] = a[c-1].pos - a[d].pos;
			t++;	
		}else if(c - d > 2){
			bool check = true;
			for(int j = d+1;j < c-1;j++){
				if(a[j].pos - a[j-1].pos != a[j+1].pos - a[j].pos){
					check = false;break;
				}
			}
			if(check){
				ans[t][0] = a[d].val;
				ans[t][1] = a[d+1].pos - a[d].pos;
				t++;
			}
		}
		d = c;c = c + 1;
	}
	cout<<t<<endl;
	for(int i = 0;i < t;i++){
		cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
	}
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

