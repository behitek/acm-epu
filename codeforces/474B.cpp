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

struct Range{
	int minR,maxR;
};

int n;
Range a[100005];

int binarySearch(int key,int s, int e){
	int node = (s+e)/2;
	if(key >= a[node].minR && key <= a[node].maxR) return node;
	if(key < a[node].minR) return binarySearch(key,s,node-1);
	if(key > a[node].maxR) return binarySearch(key,node+1,e);
}

void solve() {
	cin>>n;
	int t;
	_for(i,0,n){
		cin>>t;
		if(i == 0){
			a[i].minR = 0;
			a[i].maxR = t;
		}else{
			a[i].minR = a[i-1].maxR + 1;
			a[i].maxR = a[i-1].maxR + t;
		}
	}
	
	int m;
	cin>>m;
	while(m--){
		cin>>t;
		cout<<binarySearch(t,0,n-1) + 1<<endl;	
	}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}


