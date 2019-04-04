#include <stdio.h>
 
int main() {
   int n,x,y,kq;
   scanf("%d %d",&x,&y);
   scanf("%d",&n);
   switch(n%6) {
      case 1: kq=x;
      break;
      case 2: kq=y;
      break;
      case 3: kq= y-x;
      break;
      case 4: kq=-x;
      break;
      case 5: kq=-y;
      break;
      case 0: kq=x-y;
      break;
   }
   printf("%d",kq);
   return 0;
}
