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


LL nMax,nMin,sum,res = 1e9;

LL strToNum(string s,int l){
	LL ans = 0;
	_for(i,0,l){
		ans += pow(10,l-i-1)*(s[i]-'0');
	}
	return ans;
}

void solve() {
	int n,k;
	cin>>n>>k;
	string s[n],str;
	int u;
	
	_for(i,0,n) cin>>s[i];
	
	int arr[k];
	_for(i,0,k) arr[i] = i;
	int i1,i2,ii = 0;
	while(1){
		nMax = 0;nMin = 1e9;
		_for(i,0,n){
			u = 0;
			_for(j,0,k){
				str[u++] = s[i][arr[j]];
			}
			sum = 0;
			_for(i,0,k){
				sum += pow(10,k-i-1)*(str[i]-'0');
			}
			if(sum > nMax) nMax = sum;
			if(sum < nMin) nMin = sum;
		}
		if(nMax - nMin < res) res = nMax - nMin;
		i1 = k - 2;
		while(i1 >= 0 && arr[i1] > arr[i1+1]) --i1;
		if(i1 == -1) return;
		i2 = k-1;
		while(arr[i2] < arr[i1]) i2--;
		swap(arr[i1],arr[i2]);
	sort(arr+i1+1,arr+i1+1+(k-i1-1));
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
 	cout<<res<<endl;
}


