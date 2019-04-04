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

char str[1000005];

void solve() {
	cin>>str;
	int l = strlen(str);
	int i = -1,j = l;
	/*Check number is palindrome */
	while(++i <= --j){
		if(str[i] != str[j]){
			break;
		}
	}
	if(j < i){
		/*Number is palindrome*/
		if(l&1){
			/*odd length number*/
			if(str[l/2] < '9'){
				str[l/2]++;
				cout<<str<<endl;
			}else{
				str[l/2] = '0';
				i = l/2 - 1;
				j = l/2 + 1;
				while(i >= 0){
					if(str[i] < '9'){
						str[i]++;
						str[j]++;
						break;
					}else{
						str[i] = '0';str[j] = '0';
					}
					i--;
					j++;
				}
				
				if(i < 0){
					cout<<"1";
					i = l;
					while(--i > 0){
						cout<<"0";
					}
					cout<<"1"<<endl;
				}else{
					cout<<str<<endl;
				}
			}
		}else{
			/*Even length number*/
			i = l/2 - 1;
			j = l/2;
			while(i >= 0){
					if(str[i] < '9'){
						str[i]++;
						str[j]++;
						break;
					}else{
						str[i] = str[j] = '0';
					}
					i--;
					j++;
				}
				if(i < 0){
					cout<<"1";
					i = l;
					while(--i > 0){
						cout<<"0";
					}
					cout<<"1"<<endl;
				}else{
					cout<<str<<endl;
				}
			}
		}else{
			if(l&1){
				i = l/2 - 1;
				j = l/2 + 1;
			}else{
				i = l/2 - 1;
				j = l/2;
			}
			
			int flag;
			
			while(i >= 0){
				if(str[i] - str[j] > 0){
					flag = 1;
					break;
				}else if(str[i] - str[j] < 0){
					flag  = 2;
					break;
				}
				i--;
				j++;
			}
			if(l&1){
				i = l/2 - 1;
				j = l/2 + 1;
			}else{
				i = l/2 - 1;
				j = l/2;
			}
			if(flag == 1){
				while(i >= 0){
					str[j] = str[i];
					i--;
					j++;
				}
			}else if(flag == 2 && l&1 && str[l/2] < '9'){
				str[l/2]++;
				i = l/2 - 1;
				j = l/2 + 1;
				while(i >= 0){
					str[j] = str[i];
					i--;
					j++;
				}
			}else{
				if(l&1){
					str[l/2] = '0';
				}
				while(i >= 0){
					if(str[i] < '9'){
						str[i]++;
						str[j] = str[i];
						break;
					}else{
						str[i] = str[j] = '0';
					}
					i--;
					j++;
				}
				while(i >= 0) {
                    str[j] = str[i];

                    i--;
                    j++;
                }
			}
			cout<<str<<endl;
		}	
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
 	   solve();
}


