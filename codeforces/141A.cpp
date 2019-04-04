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

void solve() {
	int arr[91];
	__(arr);
	string s1,s2,s;
	cin>>s1>>s2>>s;
	_for(i,0,s.length()) arr[s[i]]++;
	_for(i,0,s1.length()){
		if(arr[s1[i]] == 0){
			cout<<"NO";return;
		}
		arr[s1[i]]--;
	}
	_for(i,0,s2.length()){
		if(arr[s2[i]] == 0){
			cout<<"NO";return;
		}
		arr[s2[i]]--;
	}
	_for(i,65,91){
		if(arr[i] != 0){
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
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

