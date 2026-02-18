#include <stdio.h>

int main() {
    int td,n,gb,sum=0,diff=0,count=0;
    scanf("%d",&td);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&gb);
        sum+=gb;
        diff=td-sum;
        if(diff>=0)
        count++;
    }
    printf("%d\n",diff);
    printf("%d",count);
     return 0;
}
