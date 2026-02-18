#include <stdio.h>
int main() {
    int n,hp,max=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&hp);
        if(hp>100)
        count++;
        if(max<hp)
        max=hp;
        
    }
    printf("Highest Price: %d\n",max);
    printf("High Price Days: %d",count);
    return 0;
}
