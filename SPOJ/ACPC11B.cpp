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

int _abs(int a){
	return (a>0)?a:-a;
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
    while(t--){
    	int m,n;
    	cin>>m;
    	int a[m+2];
    	for(int i = 0;i < m;i++){
    		cin>>a[i];
		}
		cin>>n;
    	int b[n+2];
    	for(int i = 0;i < n;i++){
    		cin>>b[i];
		}
		sort(b,b+n);
		int diff = 1000000;
		for(int i = 0;i < m;i++){
			int j = 0;
			while(b[j] < a[i] && j < n-1) j++;
			diff = min(diff,min(_abs(b[j]-a[i]),_abs(b[j-1]-a[i])));
		}
		cout<<diff<<endl;
	}
}

