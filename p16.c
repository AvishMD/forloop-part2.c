#include <stdio.h>

int main() {
    int iv,n,wd,rem,sum=0,count=0;
    scanf("%d",&iv);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&wd);
        sum+=wd;
        rem=iv-sum;
        if(wd>=5000)
        count++;
    }
    printf("Remaining Cash: %d\n",rem);
    printf("Risk Count: %d",count);
    return 0;
}
