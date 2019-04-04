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

unsigned int CountBits(unsigned int n) {
   unsigned int count = 0;
   while(n) {
       count += n & 0x01; // checks the least significant bit of n
                          // if the bit is 1, count is incremented
       n >>= 1; // shift all bits of n one to the right
                // if no 1 bits are left, n becomes 0 and the loop ends
   }
   return count;
}

void solve() {
	int n,m,k;
	cin>>n>>m>>k;
	int a[m+1];
	int rs(0);
	_for(i,0,m+1) cin>>a[i];
	_for(i,0,m){
		if(CountBits((a[i]^a[m])) <= k) rs++;
	}
	cout<<rs;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}


