	#include <conio.h>
	#include <stdio.h>
	#include <iostream>
	using namespace std;
	#include <ctype.h>
	class A
	{
	private:
	int n;
	public:
	A()
	{
	n=0;
	}
	A(int n1)
	{
	n=n1;
	}
	virtual void xuat()
	{
	cout << "\nLop A: "<< n;
	}
	int getN()
	{
	return n;
	}
	};
	class B:public A
	{
	public:
	B():A()
	{
	}
	B(int n1):A(n1)
	{
	}
	void xuat()
	{
	cout << "\nLop B: "<<getN();
	}
	};
	class C:public A
	{
	public:
	C():A()
	{
	}
	C(int n1):A(n1)
	{
	}
	void xuat()
	{
	cout << "\nLop C: "<<getN();
	}
	};
	class D:public C
	{
	public:
	D():C()
	{
	}
	D(int n1):C(n1)
	{
	}
	void xuat()
	{
	cout << "\nLop D: "<<getN();
	}
	};
	void hien(A *p)
	{
	p->xuat();
	}
	main()
	{
	A a(1);
	B b(2);
	C c(3);
	D d(4);
	hien(&a);
	hien(&b);
	hien(&c);
	hien(&d);
	getch();
	}

