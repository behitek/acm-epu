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

int round_num(float a){
    if(a > (int)a) return (int)a +1;
    else return (int)a;
}

void solve() {
    int n,arr[4];
    __(arr);
    cin>>n;
    int item,count = 0;
    _for(i,0,n){
        cin>>item;
        if(item == 4) count++;
        else arr[item]++;
    }
    if(arr[1] >= arr[3] && arr[3] > 0){
        count += arr[3];
        arr[1] -= arr[3];
        arr[3] = 0;
    }else if(arr[3] > arr[1] && arr[1] > 0){
        count += arr[1];
        arr[3] -= arr[1];
        arr[1] = 0;
    }
    if(arr[2] > 1){
        count += arr[2]/2;
        arr[2] -= (arr[2]/2)*2;
    }
    while(arr[2] > 0){
        if(arr[1] == 0) break;
        if(arr[1] == 1){
            count++;
            arr[2]--;
            arr[1] = 0;
            break;
        }
        count++;
        arr[2]--;
        arr[1] -= 2;
    }
    count += arr[3] + arr[2];
    count += round_num(arr[1]/4.0);
    cout<<count<<endl;

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
