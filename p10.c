#include <stdio.h>
int main() {
    int n,gb,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&gb);
        sum+=gb;
        if(gb>2)
            count++;
    }
    printf("%d\n",sum);
    printf("%d",count);
    return 0;
}
