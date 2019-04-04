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

const int N = 200000,T = 4*N;
int n,q;
LL a[N],t[T];
char c;

void makeTree(int k,int l,int r){
	if(l == r){
		t[k] = 	a[l];
		return;
	}
	int mid = (l+r)/2;
	makeTree(k*2,l,mid);
	makeTree(k*2+1,mid+1,r);
	t[k] = max(t[2*k],t[2*k+1]);
}

void update(int k,int l,int r,int i,LL x){
	if(l > r || i < l || i > r) return;
	if(l == r){
		t[k] = x;
		return;
	}
	int mid = (l+r)/2;
	update(k*2,l,mid,i,x);
	update(k*2+1,mid+1,r,i,x);
	t[k] = max(t[2*k],t[2*k+1]);
}

void getMax(int k,int l,int r,int L,int R,int &vt,LL &res){
	if(l > r || r < L || l > R) return;
	if(l == r){
		if(t[k] > res){
			res = t[k];
			vt = l;
			return;
		}
	}
	int mid = (l+r)/2;
	if(l >= L && r <= R){
		if(t[2*k] > t[2*k+1]){
			getMax(2*k,l,mid,L,R,vt,res);
		}else{
			getMax(2*k+1,mid+1,r,L,R,vt,res);
		}
		return;
	}
	if(mid < L){
		getMax(2*k+1,mid+1,r,L,R,vt,res);
	}else if(mid+1 > R){
		getMax(2*k,l,mid,L,R,vt,res);
	}else{
		getMax(2*k,l,mid,L,mid,vt,res);
		getMax(k*2+1,mid+1,r, mid+1,R, vt, res);
	}
}


int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    _for(i,1,n+1) cin>>a[i];
    makeTree(1,1,n);
    cin>>q;
    int x,y;
    while(q--){
    	cin>>c>>x>>y;
    	if(c == 'U')
    		update(1,1,n,x,y);
		else{
			int vt_i, vt_j1, vt_j2, vt_j;
			LL res_i, res_j1, res_j2, res_j;
			
			res_i = res_j1 = res_j2 = res_j = -1;
			
			getMax(1,1,n,x,y,vt_i,res_i);
			
			if(vt_i == x) getMax(1,1,n,x+1,y,vt_j,res_j);
			else if(vt_i == y) getMax(1,1,n,x,y-1,vt_j,res_j);
			else{
				getMax(1,1,n, x,vt_i-1, vt_j1, res_j1);
                getMax(1,1,n, vt_i+1,y, vt_j2, res_j2);
                res_j = max(res_j1, res_j2);
			}
			cout<<(res_i + res_j)<<endl;
		}
	}
}


