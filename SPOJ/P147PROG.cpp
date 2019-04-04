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

int n;
int ii = 0;

void solve() {
	double x,y,m,sum = 0,val1 = 0,val2 = 0;
	_for(i,0,n){
		cin>>x>>y>>m;
		sum += m;
		val1 += m*x;
		val2 += m*y;
	}
	if(sum == 0) printf("Case %d: %.2lf %.2lf\n",++ii,0.00,0.00);
	else
	printf("Case %d: %.2lf %.2lf\n",++ii,val1/sum,val2/sum);
}

int main(){
//    #ifdef HieuNguyen
//    freopen("input.txt","r",stdin);
//	//freopen("output.txt","w",stdout);
//    #endif
    ios_base::sync_with_stdio(0);
    while(1){
    	cin>>n;
    		if(n < 0) return 0;
	    	solve();	
	}
}


