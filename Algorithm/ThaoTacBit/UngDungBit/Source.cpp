#include <iostream>
using namespace std;
#include <conio.h>
//Bật bit thứ i của biến n
void onbit(int &n, int i)
{
	n = n | (0x1 << i);
}
//Tắt bit thứ i của biến n
void offbit(int &n, int i)
{
	n = n & (~(0x1 << i));
}
//Lấy giá trị bit thứ i của n
int getbit(int n, int i)
{
	return (n >> i) & 0x1;
}
// Gán giá trị 0 cho n
void setzero(int &n)
{
	n = n ^ n;
}
//Nhân n với 2^i
int mul2powi(int n, int i)
{
	return n << i;
}
//Chia n cho 2^i
int div2powi(int n, int i)
{
	return n >> i;
}

//0x1 = 1(int)
int main() {
	int n = 5;
	setzero(n);
	cout << n << endl;
	_getch();
}