//CT6-03
// Han che phuong thuc tinh
// Lop TS TS2
#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#include <ctype.h>
class TS
{
private:
char ht[25];
int sobd;
float td;
public:
void nhap()
{
cout << "\nHo ten: " ;
fflush(stdin); gets(ht);
cout << "So bao danh: " ;
cin >> sobd;
cout << "Tong diem: " ;
cin >> td;
}
/*virtual*/ void in()
{
printf("\n\nHo ten: %s", ht);
printf("\nSo bao danh: %d", sobd);
printf("\nTong diem: %0.1f", td);
}
void xem_in()
{
int ch;
cout << "\nHo ten: " << ht ;
cout << "\nCo in khong? - C/K" ;
ch = toupper(getch());
if (ch=='C')
this->in(); //Goi den TS::in() (Vi this la con tro 
//kieu TS)
}
} ;
class TS2:public TS
{
private:
char dc[30] ; // Dia chi
public:
void nhap()
{
TS::nhap();
cout << "Dia chi: " ;
fflush(stdin); gets(dc);
}
void in()
{
TS::in();
printf("\nDia chi: %s", dc);
}
};
int main()
{
TS2 t[100];
int i, n;
cout << "\nSo thi sinh: ";
cin >> n;
for (i=1; i<=n; ++i)
t[i].nhap();
for (i=1; i<=n; ++i)
t[i].TS2::xem_in();
getch();
}

