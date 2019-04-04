#include <bits/stdc++.h>
using namespace std;

class A{
	private:
		string name;
		int age;
	public:
		void setName(string name){
			name= name;
		}
		void show(){
			cout<<"Class A"<<endl;
		}
};
class B: public A{
	private:
		int salary;
	public:
		void show(){
			cout<<"Class B"<<endl;
		}
};

int main(){
	B *b = new B;
	b->show();
	b->show();
	b->A::show();
	b->B::show();
}
