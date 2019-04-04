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

struct Pair{
	int pos;
	float val;
	bool operator<(const Pair& c) const{
		return (val < c.val);
	}
};

Pair p[1000000];
string s;

void solve() {
	cin>>s;
	int i = 0,u = 0;
	double l = 0.0,r = 1.0;
	double d,k;
	
	while(i < s.length()){
		k = (l+r)/2.0;
		d = r - k;
		p[u].pos = i+1;
		p[u].val = k;
		++u;
		if(s[i] == 'l'){
			l = k - d;
			r = k;
		}else{
			l = k;
			r = k+d;
		}
		++i;
	}
	sort(p,p+u);
	_for(i,0,u-1){
		cout<<p[i].pos<<" ";
	}
	cout<<p[u-1].pos<<endl;
}

int main(){
//    #ifdef HieuNguyen
//    freopen("input.txt","r",stdin);
//	//freopen("output.txt","w",stdout);
//    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}


