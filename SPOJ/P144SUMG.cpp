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

vector<int> v;
vector<int>::iterator iter;

void push(int x){
	iter = v.begin();
	int i = 0;
	while(iter != v.end() && v[i] <= x){
		iter++;
		i++;
	}
	v.insert(iter,x);
}

void pop(){
	int ans;
	int l = v.size();
	if(l&1){
		ans = v.at((l+1)/2 - 1);
		v.erase(v.begin() + (l+1)/2 - 1);
	}else{
		ans = v.at(l/2+1 - 1);
		v.erase(v.begin() + (l/2 +1) - 1);
	}
	cout<< ans<<endl;
}

void solve() {
	char c;
	while(cin){
		cin>>c;
		if(c == '#'){
			if(v.size()) pop();
//			cout<<"pop\n";
		}else{
			//cout<<(c-'0')<<endl;
			push(c-'0');
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


