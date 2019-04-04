#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v,val) memset(v,(val),sizeof(v))

#define MAX 20
/*Bai toan xep quan hau voi thuat toan quay lui*/

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

int n;
int x[MAX];
bool a[MAX],b[2*MAX],c[2*MAX];

void init(){
	cin>>n;
	memset(a,true,sizeof(a));
	memset(b,true,sizeof(b));
	_for(i,1-MAX,MAX) c[i] = true;
}

void printResult(){
	_for(i,1,n+1){
		cout<<"("<<i<<", "<<x[i]<<");    ";
	}
	cout<<endl;
}

void solve(int i){
	_for(j,1,n+1){
		if(a[j] && b[i+j] && c[i-j]){
			x[i] = j;
			if(i == n) printResult();
			else{
				a[j] = 0;b[i+j] = 0;c[i-j] = 0;
				solve(i+1);
				a[j] = 1;b[i+j] = 1;c[i-j] = 1;
			}
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
    init();
    solve(1);
}
