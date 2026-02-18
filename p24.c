#include <stdio.h>

int main() {
    int n,oh,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&oh);
        sum+=oh;
        if(oh>40)
        count++;
    }
    printf("Total Calls:  %d\n",sum);
    printf("Overloaded Hours: %d",count);

    return 0;
}
