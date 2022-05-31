#include <stdio.h>
#include <stdlib.h>
int main(){
      int n,m,i,j,sum=0; 
    scanf("%d %d",&n,&m);
    int a[100];
    for(i = 0;i<n;i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++) {
            if((a[i]+a[j])%m==0)
                sum++;
        }
    }
    printf("%d\n",sum);
    return 0;
}
/* output
1
1
1
0 */