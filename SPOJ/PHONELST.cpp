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

string str[100005];

//bool myComp(char a[],char b[]){
//	return strcmp(a,b) < 0;
//}

void solve() {
	int n;
	cin>>n;
	_for(i,0,n) cin>>str[i];
	sort(str,str+n);
	int l1,l2;
	_for(i,0,n-1){
		l1 = str[i].length();
		l2 = str[i+1].length();
		l1 = (l1 < l2)?l1:l2;
		_for(j,0,l1){
			if(str[i][j] != str[i+1][j]){
				break;
			}
			if(j == l1 - 1){
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
	    solve();
}


