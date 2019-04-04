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

int a[100];
int n;

void printResult(){
	_for(i,0,n) cout<<a[i];
	cout<<endl;
}

void solve(int i) {
	_for(j,0,2){
		a[i] = j;
		if(i == n- 1){
			printResult();
		}else{
			solve(i+1);
		}
	}
}

int main(){
//    #ifdef HieuNguyen
//    freopen("input.txt","r",stdin);
//	//freopen("output.txt","w",stdout);
//    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    solve(0);
}


