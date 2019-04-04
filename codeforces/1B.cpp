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

bool isNumber(char c){
	return (c <= '9' && c >= '0');
}

bool isTextType(string s){
	if(s.length() == 2) return true;
	int i = 0;
	while (!isNumber(s[i])) i++;
	while(isNumber(s[i]) && i < s.length()) i++;
	if(i == s.length()) return true;
	return false;
}

void num2text(string s){
	int i = 1;
	string a;
	while(isNumber(s[i])) a += s[i],i++;
	int b = 0;
	int p = 0;
	_fod(j,s.length()-1,i){
		b += (s[j] - 48)*pow(10,p);
		p++;
	}
	while(b > 0){
		char c = (char)(b%26 + 64);
		if(c == 64) a = 'Z' + a,b--;
		else a = c + a;
		b /= 26;
	}
	cout<<a<<endl;
}

void text2num(string s){
	int i = 0;
	string a;
	while(!isNumber(s[i])) a += s[i],i++;
	
	int b = 0;
	int p = 0;
	_fod(j,s.length()-1,i-1){
		b += (s[j] - 48)*pow(10,p);
		p++;
	}
	cout<<"R"<<b;
	p = 0;
	b = 0;
	_fod(i,a.length()-1,-1){
		b += (a[i] - 64)*pow(26,p);
		p++;
	}
	cout<<"C"<<b<<endl;
}

void solve() {
	int n;
	cin>>n;
	string s;
	while(n--){
		cin>>s;
		if(!isTextType(s)){
			num2text(s);
		}else{
			text2num(s);
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}


