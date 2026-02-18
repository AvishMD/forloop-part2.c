#include <stdio.h>

int main() {
    int n,time,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&time);
        sum+=time;
        if(time>30)
        count++;
    }
    printf("Total Delay: %d\n",sum);
    printf("Delayed Deliveries: %d",count);
    return 0;
}
