#include <stdio.h>

int main() {
    int n,volts,low,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&volts);
        if(i==1)
        low=volts;
        if(volts<low)
        low=volts;
        if(volts<210)
        count++;
        
    }
    printf("Minimum Voltage: %d\n",low);
    printf("Minimum Voltage: %d",count);
    return 0;
}
