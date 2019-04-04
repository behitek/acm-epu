#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))

/*
11: 11 10 9 8 7 6 5 4 3 2 1 	-> 1
10: 11 10 9 8 7 6 5 4 3 2 		-> 5 2
09: 11 10 9 8 7 6 4 3			-> 3
08: 11 10 9 8 7 6 4				-> 4
07: 11 10 9 8 7 6				-> null
06: 11 10 9 8 7 6				-> null
=> ans = 6;

20: 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 	-> 10 5 4 3 2 1
19: 20 19 18 17 16 15 14 13 12 11 9 8 7 6				-> null
18: 20 19 18 17 16 15 14 13 12 11 8 7 6	  				-> 9
17:
16: 20 19 18 17 16 15 14 13 12 11 7 6					-> 8
15: 
14: 20 19 18 17 16 15 14 13 12 11 6						-> 7
13: 
12: 20 19 18 17 16 15 14 13 12 11	 					-> 6
11: 
10:
09:
=>ans = 10;
*/

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

void solve() {
	int n;
	cin>>n;
	cout<<((n+1)>>1)<<endl;
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


