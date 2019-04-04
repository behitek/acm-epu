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

/*
	n	8^n
	1	8
	2	64
	3	512
	4	4096
	5	32768
	6	262144
	7	2097152
	8	16777216
	9	134217728
	10	1073741824
	11	8589934592
	12	68719476736
	13	549755813888


*/

void solve() {
	int n;
	cin>>n;
	if(n == 0) {
		cout<<1;
		return;
	}
	int a = n % 4;
	switch(a){
		case 0: {cout<<6; break;}
		case 1: {cout<<8; break;}
		case 2: {cout<<4; break;}
		case 3: {cout<<2; break;}
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


