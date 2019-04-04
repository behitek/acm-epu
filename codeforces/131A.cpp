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

bool check(string s){
    _fod(i,s.length()-1,0){
        if(!isupper(s[i])) return false;
    }
    return true;
}

void solve() {
    string s;
    cin>>s;
    if(!check(s)){
        cout<<s<<endl;
    }else{
        if(isupper(s[0])) s[0] = tolower(s[0]);
        else s[0] = toupper(s[0]);
        _for(i,1,s.length()) s[i] = tolower(s[i]);
        cout<<s<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
