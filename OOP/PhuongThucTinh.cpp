#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

class A
{
	public:
		void xuat()
		{
			cout << "\n Lop A " ;
		}
};

class B:public A
{
	public:
		void xuat(){
			cout << "\n Lop B " ;
		}
};

class C:public B
{
	public:
		void xuat()
		{
			cout << "\n Lop C " ;
		}
};


int main(){
    B *p = new C;
    p->xuat();
    
}


