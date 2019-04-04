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

int arr[105][105];
int n,m;
int cell(int i,int j){
	if(i > n - 1 || i < 0 || j > n-1 || j < 0)
		return 100;
	return arr[i][j];
}

void solve() {
	/*Input*/
	cin>>n>>m;
	_for(i,0,n) _for(j,0,m)
		cin>>arr[i][j];
		
	/*Solve Bottom- up*/
	
	_for(i,1,n) _for(j,0,m){
		arr[i][j] += min(cell(i-1,j-1),min(cell(i-1,j),cell(i-1,j+1)));
	}
	
	int nMin = 100;
	
	_for(i,0,m){
		if(arr[n-1][i] < nMin) nMin = arr[n-1][i];
	}
	cout<<nMin<<endl;
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


