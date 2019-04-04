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

void solve() {
	float u,v,w,uu,vv,ww;
	cin>>u>>v>>w>>ww>>vv>>uu;
	LL _u = v*v + w*w - uu*uu;
	LL _v = w*w + u*u - vv*vv;
	LL _w = u*u + v*v - ww*ww;
	cout<<_u<<" "<<_v<<" "<<_w<<endl;
	LL ans = 1.0/12*sqrt(4u*u*v*v*w*w - u*u*_u*_u - v*v*_v*_v - w*w*_w*_w + _u*_v*_w);
	printf("%.4f\n",ans);
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
}


