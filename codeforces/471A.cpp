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
	int t;
	map <int,int> a;
	_for(i,0,6){
		cin>>t;
		a[t]++;
	}
	if(a.size() == 1){
		cout<<"Elephant";
		return;
	}
	else if(a.size() == 2){
		for(auto &i : a){
			if(i.second == 4) {
				cout<<"Elephant";
				return;
			}else if(i.second == 5){
				cout<<"Bear";
				return;
			}
		}
	}else if(a.size() == 3){
		for(auto &i : a){
			if(i.second == 4) {
				cout<<"Bear";
				return;
			}
		}
	}
	cout<<"Alien";
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


