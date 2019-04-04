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
	int n,_space,val = 0;
	cin>>n;
	int space = n*2;
	/*Top*/
	_for(r,0,n){
		_space = space - 1;
		val = 0;
		while(_space--){
			cout<<" ";
		}
		_for(c,0,r+1){
			cout<<" "<<(val++);
		}
		val-=2;
		_for(c,0,r){
			cout<<" "<<(val--);
		}
		cout<<"\n";
		space-= 2;
	}
	/*Middle*/
	val = 0;
	_for(r,0,n+1){
		if(r == 0){
			cout<<(val++);
		}else{
			cout<<" "<<(val++);
		}
	}
	val -= 2;
	_for(r,0,n){
		cout<<" "<<(val--);
	}
	cout<<"\n";
	/*Bottom*/
	space += 2;
	_fod(r,n,0){
		_space = space - 1;
		val = 0;
		while(_space--){
			cout<<" ";
		}
		_for(c,0,r){
			cout<<" "<<(val++);
		}
		val-=2;
		_for(c,0,r-1){
			cout<<" "<<(val--);
		}
		cout<<"\n";
		space+= 2;
	}
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


