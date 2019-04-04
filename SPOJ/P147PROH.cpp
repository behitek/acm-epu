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

char s1[1001],s2[1001];
int a1[200],a2[200];

void solve() {
	__(a1);
	__(a2);
	for(int i = 0;s1[i];++i){
		a1[s1[i]]++;
	}
	for(int i = 0;s2[i];++i){
		a2[s2[i]]++;
	}
	cout<<((memcmp(a1,a2,sizeof(a1)))? "different":"same")<<endl;
	/*memcmp - compare memory vs a (num)*/
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ii = 0;
    while(1){
    	cin>>s1>>s2;
		if(strcmp(s1,"END") == 0 && strcmp(s2,"END") == 0) return 0;
		cout<<"Case "<<(++ii)<<": ";
		solve();
	}
}


