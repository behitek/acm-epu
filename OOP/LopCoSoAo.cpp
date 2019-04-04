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

class A{
	public:
		int a;
};
class B: virtual public A{
	public:
		int b;
};
class C: virtual public A{
	public:
		int c;
};
class D:public C,public B{
	public:
		int d;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    D  h ;
	h.d = 4 ; // t?t
	h.c =  3 ; // t?t
	h.b = 2 ; // t?t
	h.a =  1 ; // l?i

}


