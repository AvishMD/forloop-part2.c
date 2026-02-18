// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int cp,n,ir,sum=0,diff,count=1;
    scanf("%d",&cp);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&ir);
        sum+=ir;
        diff=cp-sum;
        if(cp<0)
        count++;
    }
    printf("Remaining Cpacity: %d\n",diff);
    printf("Overflow Days: %d",count);

    return 0;
}
