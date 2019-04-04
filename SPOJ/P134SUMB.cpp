#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long G,V;
	cin>>G>>V;
	long long x1=(G+4 - sqrt(pow((G+4),2) - 16*(G+V)))/ 4;
    cout<<(x1)<<" "<<(V+G)/(x1);
}
