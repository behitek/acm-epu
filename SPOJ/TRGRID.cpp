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

int n,m;

void solve() {
	cin>>n>>m;
	if(n == 1){
		cout<<"R"<<endl;
		return;
	}else if(m == 1){
		cout<<"D"<<endl;
	}else{
		if(n == m){
			if(n&1){
				cout<<"R"<<endl;
				return;
			}else{
				cout<<"L"<<endl;
				return;
			}
		}else if(n > m){
			if(m&1){
				cout<<"D"<<endl;
				return;
			}else{
				cout<<"U"<<endl;
				return;
			}
		}else{
			if(n&1){
				cout<<"R"<<endl;
				return;
			}else{
				cout<<"L"<<endl;
				return;
			}
		}
	}
}

int main(){
//    #ifdef HieuNguyen
//    freopen("input.txt","r",stdin);
//	//freopen("output.txt","w",stdout);
//    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
	    solve();
}


