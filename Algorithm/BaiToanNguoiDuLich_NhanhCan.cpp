#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))

#define MAX 20
//define +vo cung
#define INF 1e5

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

int n,m; // so dinh, so canh
int c[MAX+1][MAX+1]; //Ma tran chi phi
int x[MAX+2],bestWay[MAX+2]; // x de thu cac kha nang, 
int t[MAX+2];	// Ti luu chi phi tu x1 -> xi
int _free[MAX+1]; // Danh dau diem xi da di qua chua
int minSpending; // Chi phi hanh trinh toi uu

void enter(){
	cin>>n>>m;
	//Khoi tao mang chi phi ban dau
	_for(i,1,n+1){
		_for(j,1,n+1){
			if(i == j) c[i][j] = 0;
			else c[i][j] = INF;
		}
	}
	//Nhap mang chi phi
	int a,b; 
	_for(i,0,m){
		cin>>a>>b;
		cin>>c[a][b];
		c[b][a] = c[a][b];
	}
}

void init(){
	//Mac dinh la chua di qua thanh pho nao
	memset(_free,true,sizeof(_free));
	_free[1] = false; // Ngoai le - tp xuat phat
	x[1] = 1;t[1] = 0;
	minSpending = INF;
}

void solve(int i) {
	_for(j,2,n+1){
		if(_free[j]){
			x[i] = j;
			t[i] = t[i-1] + c[x[i-1]][j]; // Cap nhat chi phi
			if(t[i] < minSpending){
				if(i < n){
					_free[j] = false;
					solve(i+1);
					_free[j] = true;
				}else{
					if(t[n] + c[x[n]][1] < minSpending){
						memcpy(bestWay,x,sizeof(x));
//						_for(tt,1,MAX+1) bestWay[tt] = x[tt];
						minSpending = t[n] + c[x[n]][1];
					}
				}
			}
		}
	}
}

void printResult(){
	if(minSpending == INF) cout<<"NO RESULT!";
	else{
		_for(i,1,n+1) cout<<bestWay[i]<<" -> ";
	}
	cout<<1;
	cout<<"\nCost: "<<minSpending;
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    enter();
    init();
    solve(2);
    printResult();
}


