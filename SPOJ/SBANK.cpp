#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <map>
#include <vector>
#include <cstring>
#include <functional>
#include <algorithm>

using namespace std;

#define ALL(c) c.begin(), c.end()
#define FOR(i,c) for(typeof(c.begin())i=c.begin();i!=c.end();++i)
#define REP(i,n) for(int i=0;i<n;++i)

char s[10000];

int main() {
	#ifdef HieuNguyen
    	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int T; scanf("%d", &T);
  while(T--){
    int n; scanf("%d\n", &n);
    map<string, int> M;
    while (n--) {
      gets(s);
      M[(string)s]++;
    }
    for(typeof(M.begin())i=M.begin();i!=M.end();++i)
		printf("%s %d\n", i->first.c_str(), i->second);
	printf("\n");
  }
}
