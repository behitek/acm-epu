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

char a[1000],b[1000];
char c[1000];

void solve() {
	int u = 0;
	map<char,int> M;
	int l1 = strlen(a),l2 = strlen(b);
	_for(i,0,l1) M[a[i]]++;
	_for(i,0,l2){
		if(M[b[i]] > 0){
			c[u++] = b[i];
			M[b[i]]--;
		}
	}
	sort(c,c+u);
	_for(i,0,u) cout<<c[i];
	cout<<endl;
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin>>a && cin>>b)
    	solve();
}


