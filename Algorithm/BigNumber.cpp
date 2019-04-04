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

struct bigInt{
	vector<int> a;
	int sign;
	
	bigInt(){
		sign = 1;
	}
	
	bigInt(LL v){
		*this = v;
		
	}
	
	void operator=(LL v){
		a.clear();
		sign = 1;
		if(v < 0){
			sign = -sign;
			v = -v;
		}
		while(v > 0){
			a.push_back(v%10);
			v /= 10;
		}
	}
	
	bigInt (const string &s){
		*this = s;
	}
	
	void operator=(const string &s){
		sign = 1;
		a.clear();
		int i = 0;
		while(i < s.size() && s[i] == '-' || s[i] == '+'){
			if(s[i] == '-'){
				sign = -sign;
			}
			++i;
		}
		_fod(j,s.size()-1,i-1){
			int x = s[j] - '0';
			a.push_back(x);
		}
	}
	
	bigInt operator-() const{
		bigInt res = *this;
		res.sign = -res.sign;
		return res;
	}
	
	void operator=(const bigInt &v){
		this->sign = v.sign;
		this->a = v.a;
	}
	
	friend istream& operator>>(istream &in, bigInt &v){
		string s;
		in>>s;
		v = s;
		return in;
	}
	friend ostream& operator<<(ostream &out, bigInt &v){
		if(v.a.empty() || v.a.size() == 1 && v.a.back() == 0) out<<0;
		else{
			if(v.sign == -1){
				out<<"-";
			}
			_fod(i,v.a.size()-1,-1){
				out<<v.a[i];
			}
		}
		return out;
	}
	
	bool operator==(const bigInt &v){
		return (sign == v.sign && a == v.a);
	}
	
	bool operator<(const bigInt &v) const {
        if (sign != v.sign)
            return sign < v.sign;
        if (a.size() != v.a.size())
            return a.size() * sign < v.a.size() * v.sign;
        for (int i = a.size() - 1; i >= 0; i--)
            if (a[i] != v.a[i])
                return a[i] * sign < v.a[i] * sign;
        return false;
    }

    bool operator>(const bigInt &v) const {
        return v < *this;
    }
    bool operator<=(const bigInt &v) const {
        return !(v < *this);
    }
    bool operator>=(const bigInt &v) const {
        return !(*this < v);
    }
    bool operator==(const bigInt &v) const {
        return !(*this < v) && !(v < *this);
    }
    bool operator!=(const bigInt &v) const {
        return *this < v || v < *this;
    }
	
	bigInt abs() const{
		bigInt res = *this;
		if(res.sign == -1) res.sign = 1;
		return res;
	}
	
	bigInt operator+(const bigInt &v) const{
		if(sign == v.sign){
			bigInt res = v;
			int r = 0;
			for(int i = 0;i < max(a.size(),v.a.size()) || r;++i){
				if(i == res.a.size()) res.a.push_back(0);
				res.a[i] += (i < a.size()?a[i]:0) + r;
				r = res.a[i]/10;
				res.a[i] %= 10;
			}
			return res;
		}
		return *this - (-v);
	}
	
	bigInt operator-(const bigInt &v) const{
		if(sign == v.sign){
			if(abs() >= v.abs()){
				bigInt res = *this;
				int r = 0;
				_for(i,0,a.size()){
					res.a[i] -= (i < v.a.size()?v.a[i]:0) - r;
					r = 0;
					if(res.a[i] < 0){
						res.a[i] += 10;
						r++;
					}
				}
				res.trim();
				return res;
			}
			return -(v - *this);
		}
		return *this + (-v);
	}
	
	void operator*=(int v){
		if(v < 0){
			sign = -sign;
			v = -v;
		}
		int carry = 0;
		for(int i = 0;i < a.size() || carry;++i){
			if(i == a.size()) a.push_back(0);
			a[i] = a[i]*v + carry;
			carry = 0;
			carry = a[i]/10;
			a[i] %= 10;
		} 
		trim();
	}
	
	bigInt operator*(int v) const{
		bigInt res = *this;
		res *= v;
		return res;
	}
	
	bigInt operator*(const bigInt &v) const{
		bigInt res("0");
		bigInt carry;
		_for(i,0,v.a.size()){
			carry = (*this)*v.a[i];
			int t = i;
			while(t--){
				carry *= 10;
			}
			res = res + carry;
		}
		res.sign = sign*v.sign;
		return res;
	}
	
	
	
	void trim(){
		while(a.empty() && !a.back()){
			a.pop_back();
		}
		if(a.empty()) sign = 1;
	}
	
};

int main(){
	bigInt a = (string)"9999";
	bigInt b = (string)"99";
	a = a*b;
	cout<<a;
}


