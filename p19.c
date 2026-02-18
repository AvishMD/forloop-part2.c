#include <stdio.h>

int main() {
    int n,nl,max=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&nl);
        if(max<nl)
        max=nl;
        if(nl>70)
        count++;
    }
    printf("Maximum Noise: %d\n",max);
    printf("Noisy Periods: %d",count);
     return 0;
}
