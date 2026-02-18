#include <stdio.h>

int main() {
    int n,ht,max,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&ht);
        if(i==1)
        max=ht;
        if(max<ht)
        max=ht;
        if(ht>140)
        count++;
    }
    printf("Max Heart Rate:  %d\n",max);
    printf("Danger Readings: %d",count);

    return 0;
}
