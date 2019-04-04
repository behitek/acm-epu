#include<stdio.h>
int a[100000],n;
int kt2(int vt){
  vt++;
  int x=a[vt];
  int y=a[vt+1];
  while (x<=y && vt<n){
    vt++;
    x=a[vt];
    y=a[vt+1];
  }
  if (vt==n-1) return vt;
  else return 0;
}
int kt(){
  int i=0;
  int x=a[0];
  int y=a[1];
  while (x<=y && i<n){
     i++;
     x=a[i];
     y=a[i+1];
  }
  if (i==n-1) return 0;
  if (kt2(i)==0) return -1;
  else
    return n-1-i;
}
main(){
	freopen("input.txt","r",stdin);
  int i;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("%d",kt());
}

