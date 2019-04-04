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
	int r,c;
	cin>>r>>c;
	_for(i,0,r){
		_for(j,0,c){
			cout<<"#";
		}
		cout<<"\n";
		i++;
		if(i >= r) return;
		_for(j,0,c-1){
			cout<<".";
		}
		cout<<"#"<<endl;
		i++;
		if(i >= r) return;
		_for(j,0,c){
			cout<<"#";
		}
		cout<<endl;
		i++;
		if(i >= r) return;
		cout<<"#";
		_for(j,1,c){
			cout<<".";
		}
		cout<<endl;
	}
	
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef HIEUNGUYEN
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}




