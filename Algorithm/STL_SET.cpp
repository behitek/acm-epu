#include <iostream>
#include <set>
int main ()
{
	std::set<int> myset;
	std::set<int>::iterator it;
	myset.insert(50);
	myset.insert(10);
	myset.insert(15);
	myset.insert(45);
	// set some initial values:
//	for (int i=1; i<=5; i++) 
//		myset.insert(i*10);    // set: 10 20 30 40 50

//	it = myset.find(20);
//	myset.erase (it);
//	myset.erase (myset.find(40));

	std::cout << "myset contains:";
	for (it=myset.begin(); it!=myset.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	return 0;
}
