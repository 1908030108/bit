#include <stdio.h>

int main(void){
    int n, i, j;
    int t[80000], k[80000], c[80000];
    int d[80000];
     scanf("%d",&n);
     d[0] = 1;
   for(i = 0; i < n; i++)
        d[i+1] = d[i] + 1;
    for(i = 0;i < n; i++)
        scanf("%d%d",&t[i],&k[i]);
    for(i = 0;i < n; i++)
        c[i] = t[i] * k[i];
    for(i = 0;i < n; i++){
        for(j = 0; j <= n-i-1; j++){
            if(c[j] < c[j+1]){
                int temp = d[j];
                d[j] = d[j+1];
                d[j+1] = temp;
            }
            if(c[j] == c[j+1]){
                if(d[j] > d[j+1])
                {
                int temp = d[j];
                d[j] = d[j+1];
                d[j+1] = temp;
                }
            }
        }
    }
    for(i = 0; i < n; i++)
        printf("%d ",d[i]);
        printf("\n");
return 0;
}
