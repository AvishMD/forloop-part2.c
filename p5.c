#include <stdio.h>

int main() {
    int bp,n,dh,sum=0,rem;
    scanf("%d",&bp);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&dh);
        
        sum+=dh;
        rem=bp-sum;
    }
    printf("%d",rem);


    return 0;
}
