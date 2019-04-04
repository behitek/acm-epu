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
	 The problem can be reversed as follows: 
	 we should get the number n starting from m using the operations 
	 "add 1 to the number" and 
	 "divide the number by 2 if it is even".
*/

void solve() {
	int n,m;
	cin>>n>>m;
	if(n >= m){
		cout<<(n-m);
	}else{
		int c = 0;
		while (m > n){
			if(m % 2 != 0) m++,c++;
			m /= 2;
			c++;
		}
		cout<<c + (n - m);
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


