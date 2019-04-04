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



/*Use bottom - up approach*/
LL arr[100][100];
int w,h;

int cell(int i,int j){
	if(i < 0 || i > h - 1 || j < 0 || j > w - 1)
		return 0;
	return arr[i][j];
}

void solve() {
	cin>>h>>w;
	_for(i,0,h) _for(j,0,w){
		cin>>arr[i][j];
	}
	_for(i,1,h) _for(j,0,w){
		arr[i][j] += max(cell(i-1,j-1),max(cell(i-1,j),cell(i-1,j+1)));
	}
	LL ans = 0;
	_for(i,0,w){
		ans = max(ans,arr[h-1][i]);
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
    int t;
    cin>>t;
    while(t--)
	    solve();
}


