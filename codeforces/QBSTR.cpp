#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))


/*
	http://vn.spoj.com/problems/QBSTR/
*/

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

int table[1000][1000];

int get(int x,int y){
	if(x < 0 || y < 0) return 0;
	return table[x][y];
}

void solve() {
	string s1;
	string s2;
	cin>>s1>>s2;
	_for(i,0,s1.length()){
		_for(j,0,s2.length()){
			if(s1[i] == s2[j]) table[i][j] = get(i-1,j-1)+1;
			else table[i][j] = max(get(i-1,j),get(i,j-1));
		}
	}
	cout<<table[s1.length()-1][s2.length()-1];
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


