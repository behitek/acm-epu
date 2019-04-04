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
	int nn;
	cin>>nn;
	char arr[nn+5];
	cin>>arr;
	bool check = true;
	int n = strlen(arr);
	int sum = 0;
	int t = n-1;
	while(t >= 0){
		if(arr[t] != '4' && arr[t] != '7'){
			check = false;break;
		}
		if(t >= n/2){
			sum+= (int)(arr[t] - '0');
		}else{
			sum -= (int)(arr[t]-'0');
		}
		t--;
	}
	if(sum == 0 && check){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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


