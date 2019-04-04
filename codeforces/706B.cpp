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

#define MAX 100005

void solve() {
	int n;
	cin>>n;
	int a[n];
	int b[MAX];
	int max_price = 0;
	_for(i,0,n){
		cin>>a[i];	
		if(a[i] > max_price) max_price = a[i];
	}
	sort(a,a+n);
	int max_need = 0;
	int index = 0;
	b[0] = 0;
	int j=0,k=0;
        for(int i=0;i<n;i++)
        {
            while(j<a[i])
            {
                b[j++]=i;
            }
        }
	int m;
	cin>>m;
	int temp;
	while(m--){
		cin>>temp;
		if(temp >= max_price) cout<<n<<endl;
		else cout<<b[temp]<<endl;
	}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}


