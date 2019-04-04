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

/*Bai toan phan tich so su dung giai thuat Quay lui*/
int x[100],t[100];
int n;

void Init(){
	cin>>n;
	x[0] = 1;
	t[0] = 0;
}

void printResult(int k){
	_for(i,0,k-1) cout<<x[i]<<" + ";
	cout<<x[k-1]<<endl;
}

void solve(int i) {	
	for(int j = x[i-1];j <= (n - t[i-1])/2;j++){
		x[i] = j;
		t[i] = t[i-1] + j;
		solve(i+1);
	}
	x[i] = n - t[i-1];
	printResult(i+1);
}

int main(){
//    #ifdef HieuNguyen
//    freopen("input.txt","r",stdin);
//	//freopen("output.txt","w",stdout);
//    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Init();
    solve(0);
}


