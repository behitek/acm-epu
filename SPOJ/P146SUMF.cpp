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

int sl = 0;
int M[10];
char c[100];

bool check(){
	return (sl == 10);
}

void solve() {
	sl = 0;
	__(M);
	int k = 1,t,m,nho = 0;
	int l = strlen(c);
	while(!check()){
		t = atoi(c)*k;
		while(t > 0){
			m = t%10;
			if(M[m] == 0){
				M[m] = 1;
				sl++;
			}
			t /= 10;
		}
		if(check()) break;
		k++;
	}
	cout<<k<<endl;	
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin>>c){
	    solve();
	}
}


