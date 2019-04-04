#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))

/*Use binary Search*/

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

bool bSearch(int a[],int val,int n){
	int start = 0,end = n-1,mid;
	while(start <= end){
		mid = (start+end)/2;
		if(a[mid] > val){
			end = mid-1;
		}else if(a[mid] < val){
			start = mid+1;
		}else{
			return true;
		}
	}	
	return false;
}

void solve() {
	int n,k;
	cin>>n>>k;
	int a[n];
	_for(i,0,n){
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	int dem = 0;
	_for(i,0,n)
		if(bSearch(a,a[i]+k,n)) ++dem;
	cout<<dem<<endl;
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
