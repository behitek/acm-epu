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

string s1 = "qwertyuiop";
string s2 = "asdfghjkl";
string s3 = "zxcvbnm";

struct str{
	string s;
	int dif;
};

map<char,int> col,row;

int abs(int a){
	return (a >= 0)?a:-a;
}

bool compare(const str a,const str b){
	if (a.dif == b.dif){
		return (a.s < b.s);	
	}
	return a.dif < b.dif;
}

void solve() {
	for (int i = 0; i < s1.length(); ++i)
    	col[s1[i]] = i, row[s1[i]] = 0;
  	for (int i = 0; i < s2.length(); ++i)
    	col[s2[i]] = i, row[s2[i]] = 1;
  	for (int i = 0; i < s3.length(); ++i)
    	col[s3[i]] = i, row[s3[i]] = 2;
    	
	int t,n;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		cin>>n;
		str str[n+1];
		for(int i = 0;i < n;i++){
			cin>>str[i].s;
			str[i].dif = 0;
			for(int j = 0;j < s.length();j++){
				while(s[j] == str[i].s[j] && j < s.length()) j++;
				str[i].dif += abs(row[s[j]] - row[str[i].s[j]])+
							  abs(col[s[j]] - col[str[i].s[j]]);
			}
		}
		sort(str,str+n,compare);
		for(int i = 0;i < n;i++){
			cout<<str[i].s<<" "<<str[i].dif<<endl;
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

