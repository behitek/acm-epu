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

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    map<string,int> M;
    int dem = 0;
    for(int i = 0;i < n;i++){
    	string id;
    	int m;
    	cin>>id;
    	if(M[id] == 0) dem++;
    	M[id]++;
    	cin>>m;
    	for(int i = 0;i < m;i++){
    		cin>>id;
    		if(M[id] == 0) dem++;
    		M[id]++;
		}
	}
	cout<<(dem-n)<<endl;
}

