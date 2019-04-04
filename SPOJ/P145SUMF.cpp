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
	int a,b;
	cin>>a>>b;
	for(int i = 1;i <= r;i++){
		for(int j = 1;j <= a;j++){
			for(int m = 1; m <= c;m++){
				for(int n = 1;n <= b;n++){
					if((m&1 && i&1) || (!(m&1) && !(i&1))){
						//cout<<"["<<i<<m<<"]";
						cout<<"X";
					}else{
						//cout<<"["<<i<<m<<"]";
						cout<<".";
					}
				}
			}
			cout<<endl;
		}
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


