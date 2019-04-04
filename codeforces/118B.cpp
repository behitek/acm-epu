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
	int n;
	cin>>n;
	int rows = 2*(n+1);
	int spaces = 2*n;
	int max_in_row = 1;
	_for(row,0,rows){
		if(row < n){
			_for(space,0,spaces) cout<<" ";
			_for(data,0,max_in_row) if(max_in_row == 1) cout<<data; else cout<<data<<" ";
			_fod(data,max_in_row-2,-1) if(data == 0) cout<<data; else cout<<data<<" ";
			
			cout<<endl;
			spaces -= 2;
			max_in_row++;
		}else if(row == n){
			_for(data,0,max_in_row) cout<<data<<" ";
			_fod(data,max_in_row-2,-1) if(data == 0) cout<<data; else cout<<data<<" ";
			
			cout<<endl;
			spaces += 2;
			max_in_row--;
		}else{
			_for(space,0,spaces) cout<<" ";
			_for(data,0,max_in_row) if(max_in_row == 1) cout<<data; else cout<<data<<" ";
			_fod(data,max_in_row-2,-1) if(data == 0) cout<<data; else cout<<data<<" ";
			
			cout<<endl;
			spaces += 2;
			max_in_row--;
		}
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


