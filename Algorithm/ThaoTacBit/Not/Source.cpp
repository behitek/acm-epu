#include <iostream>
using namespace std;
#include <conio.h>


int main() {
	cout << ~5;
	// => PP dấu lượng
	//  5 = 0000 0101
	// ~5 = 1111 1010
	// bit đầu tiên là 1 => số âm
	/*Để biểu diễn một số âm về dạng nhị phân
	có dấu với mẩu K bit ta lấy số cần biểu diễn cộng thêm 2K-1
	sau đó biểu diễn chúng ở hệ nhị phân*/
	_getch();
}