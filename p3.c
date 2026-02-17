#include <stdio.h>

int main() {
    int a,unit,sum=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&unit);
        sum+=unit;
    }
    printf("Total Units: %d",sum);
    return 0;
}
