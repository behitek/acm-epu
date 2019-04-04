#include <bits/stdc++.h>
using namespace std;
int n,c,*a;
int main(){
	cin>>n>>c;
	a = new int[n];
	for(int i = 0;i < n;i++){
		a[i] = i+1;
	}
	int i = n-1,re = 0,dem; 
    while (i>0)
    {
        i = n-1;
        while (a[i] < a[i-1])
        {
            i--; 
        }
         
        if (i>0)
        {
            int k;
            for (k = n-1; k >= i; k--)       
            {
                if (a[k] > a[i-1])       
                {
                    break;
                }
                 
            }
            swap(a[k], a[i-1]);     // hoan vi a[k] va a[i-1]
             
            // dao nguoc doan cuoi giam dan thanh tang dan
            for (int k = i; k < i + (n - i) / 2; k++)    
            {
                swap(a[k], a[n - 1 - k + i]);
            }
            dem = 0;
            for (int k = 0; k < n-1; k++)      // in hoan vi ra
            {
                for(int g = k+1; g < n;g++){
                	if(a[k] > a[g]) dem++;
				}
            }
            if(dem == c) re++;
        }
    }
    cout<<(re > 1000000007 ? re%1000000007:re);
	delete[] a;
}
