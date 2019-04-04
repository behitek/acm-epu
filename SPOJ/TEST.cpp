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

struct trie {
	trie *next[10];
	bool end;
	trie() {
		for(int i=0; i<10; i++) next[i] = NULL;
		end = 0;
	}
};

void solve() {
	int n;
	char str[15];
	bool flag;
	scanf("%d", &n);
		trie *head, *tail;
		head = new trie;
		flag = 1;
		while(n--) {
			scanf("%s", str);
			if(flag) {
				tail = head;
				for(int i=0; str[i]; i++) {
					if(tail->end) {
						flag = 0;
						break;
					}
					int p = str[i]-'0';
					if(tail->next[p]==NULL) tail->next[p] = new trie;
					tail = tail->next[p];
				}
				tail->end = 1;
				for(int i=0; i<10; i++) {
					if(tail->next[i]) {
						flag = 0;
						break;
					}
				}
			}
		}
		if(flag) printf("YES\n");
		else printf("NO\n");
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    scanf("%d", &t);
    while(t--)
	    solve();
}


