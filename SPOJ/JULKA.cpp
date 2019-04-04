#include <iostream>
using namespace std;
#include  <string>
int charToNum(char c){
	return (c - '0');
}
char numToChar(int c){
	return (c + '0');
}

void chuanHoa(string &a, string &b){
	int l1 = a.length(), l2 = b.length();
	if(a[0] == '-') a[0] = '0';
	if(b[0] == '-') b[0] = '0';
	if(l1 > l2){
		b.insert(0,l1-l2,'0');
	}else if(l2 > l1){
		a.insert(0,l2-l1,'0');
	}
}

string sumTwoNum(string a, string b){
	string result = "";
	chuanHoa(a,b);
	int l = a.length();
	int temp = 0;
	for(int i = l-1;i>= 0;i--){
		temp = charToNum(a[i]) + charToNum(b[i]) + temp;
		result.insert(0,1,numToChar(temp%10));
		temp /= 10;
	}
	if(temp > 0){
		result.insert(0,1,numToChar(temp));
	}
	return result;
}

string subTwoNum(string a, string b){
	string result = "";
	chuanHoa(a,b);
	int l = a.length();
	int temp = 0;
	for(int i = l-1;i>= 0;i--){
		temp = charToNum(a[i]) - (charToNum(b[i]) + temp);
		if(temp < 0){
			temp += 10;
			result.insert(0,1,numToChar(temp));
			temp = 1;
		}else{
			result.insert(0,1,numToChar(temp));
			temp = 0;
		}
	}
	int i = 0;
	while(result[i] == '0') i++;
	result = result.substr(i);
	return result;
}


int main(){
	string a,b;
	int n = 10;
	while(n--){
		cin>>a>>b;
		string sum = sumTwoNum(a,b);
		int i = 1,nho = 0;
		string re1="";
		if(charToNum(sum[0]) < 2){
			i = 2;
			re1 += numToChar((10*charToNum(sum[0])+ charToNum(sum[1]))/2);
			nho = (10*charToNum(sum[0])+ charToNum(sum[1]))%2;
		}else{
			re1 += numToChar(charToNum(sum[0])/2);
			nho = charToNum(sum[0])%2;
		}
		while(i < sum.length()){
			re1 += numToChar((nho*10+charToNum(sum[i]))/2);
			nho = (nho*10+charToNum(sum[i]))%2;
			i++;
		}
		cout<<re1<<"\n"<<subTwoNum(re1,b)<<endl;
	}
	
}
