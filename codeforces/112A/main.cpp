#include <iostream>
#include <string>
using namespace std;

void string_to_lower(string &s){
    for(int i = 0;i < s.length();++i){
        s[i] = tolower(s[i]);
    }
}

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    string_to_lower(s1);
    string_to_lower(s2);
    int rs = s1.compare(s2);
    if(rs < 0) cout<<"-1"<<endl;
    else if(rs > 0) cout<<"1"<<endl;
    else cout<<"0"<<endl;

    return 0;
}
