#include <stdio.h>
int main() {
    int np,tp,sum=0;
    scanf("%d",&np);
    for(int i=1;i<=np;i++){
        scanf("%d",&tp);
        sum+=tp;
    }
    printf("Total Collection: %d",sum);
    return 0;
}
