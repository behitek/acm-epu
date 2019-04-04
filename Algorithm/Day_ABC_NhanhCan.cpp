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

const int MAX = 100;

int n,minC;
char x[MAX+1],bestWay[MAX+1];
int t[MAX+1]; //Ti cho biet so ky tu C tu X1 -> Xi


//Ham nay kiem tra coi l ky tu ket thuc tai Xi co trung voi l ky tu lien truoc do khong
bool isSame(int i,int l){
	int j;
	j = i-l;
	_for(k,0,l){
		if(x[i-k] != x[j-k]) return false;
	}
	return true;
}


//Ham nay cho biet Xi co lam hong tinh khong lap cua day X1X2..Xn hay khong.
bool check(int i){
	_for(l,1,i/2+1){
		if(isSame(i,l)) return false;
	}
	return true;
}

//Giu lai ket qua vua tim duoc vao bestConfig
void keepResult(){
	minC = t[n];
	memcpy(bestWay,x,sizeof(x));
}

//Thuat toan quay lui co nhanh-can
void solve(int i) {
	_for(j,'A','D'){
		x[i] = j;
		if(check(i)){
			if(j == 'C')
				t[i] = t[i-1] + 1;
			else t[i] = t[i-1];
			if(t[i] + (n-i)/4 < minC){
				if(i == n) keepResult();
				else solve(i+1);
			}
		}
	}
}

void printResult(){
	_for(i,1,n+1){
		cout<<bestWay[i];
	}
	cout<<"\nC letter count: "<<minC;
}

int main(){
//    #ifdef HieuNguyen
//    freopen("input.txt","r",stdin);
//	//freopen("output.txt","w",stdout);
//    #endif
	cin>>n;
	t[0] = 0;
	minC = n;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve(1);
    printResult();
}


