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
	int n,m,h;
	cin>>n>>m>>h;
	int arr[n+5];
	
	_for(i,0,n) arr[i] = 2*n;
	int a;
	_for(i,0,m){
		cin>>a;
		arr[a] = 0;
	}
	int conn[h+1][2];
	_for(i,0,h){
		cin>>conn[i][0]>>conn[i][1];
	}
	int con = 0,dem;
	do{
		dem = 0;
		_for(i,0,n){
			if(arr[conn[i][0]] == con && arr[conn[i][1]] == 2*n){
				arr[conn[i][1]] = con +1;
				dem++;
			}
			else if(arr[conn[i][1]] == con && arr[conn[i][0]] == 2*n){
				arr[conn[i][0]] = con +1;
				dem++;
			}
		}
		con++;
	}while(dem != 0);
	
	_for(i,0,n) cout<<arr[i]<<"  ";
}

int main(){
//    #ifdef HieuNguyen
//    freopen("input.txt","r",stdin);
//	//freopen("output.txt","w",stdout);
//    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}


