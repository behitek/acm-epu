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

LL getCost(vector<int> arr,int k){
    LL sum = 0;
    _for(i,0,arr.size()){
        arr[i] += (i+1)*k;
    }
    sort(arr.begin(),arr.end());
    _for(i,0,k) sum += arr[i];
    return sum;
}

void solve() {
    int n,S,a;
    cin>>n>>S;
    vector<int> arr;
    _for(i,0,n){
        cin>>a;
        arr.push_back(a);
    }
    LL cost = getCost(arr,n);
    while(cost > S && n > 0){
        n--;
        cost = getCost(arr,n);
    }
    if(cost > S) cout<<"0 0"<<endl;
    else cout<<n<<" "<<cost<<endl;
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
