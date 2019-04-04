#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))

/*Test case 
8
1 0 0 1 0 0 0 1

=> 7
*/


using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

int arr[200];

void solve() {
	int n,ans = 0,res = 0;
	cin>>n;
	_for(i,0,n){
		cin>>arr[i];
		if(arr[i] == 1) ans++;
	}
	int max = 0,dem,temp;
	_for(i,0,n) _for(j,i,n){
		temp = ans;
		_for(k,i,j+1){
			if(arr[k] == 1) temp--;
			else temp++;
		}
		if(temp > res) res = temp;
	}
	cout<<res<<endl;
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


