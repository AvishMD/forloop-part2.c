#include <stdio.h>
int main() {
    int n,dl,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&dl);
        sum+=dl;
        if(dl>100)
        count++;
    }
    printf("Total loss: %d\n",sum);
    printf("Heavy loss days: %d",count);
    return 0;
}
