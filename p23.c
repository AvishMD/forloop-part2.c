#include <stdio.h>

int main() {
    int n,tu,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&tu);
        sum+=tu;
        if(tu>5)
        count++;
    }
    printf("Total Units:  %d\n",sum);
    printf("Spike Hours:  %d",count);

    return 0;
}
