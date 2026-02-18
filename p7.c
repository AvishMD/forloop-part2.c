#include <stdio.h>
int main() {
    int nd,pmm,sum=0,count=0;
    scanf("%d",&nd);
    for(int i=1;i<=nd;i++){
        scanf("%d",&pmm);
        sum+=pmm;
        if(pmm>=50)
            count++;
    }
    printf("Total Rainfall: %d\n",sum);
    printf("Heavy Rain Days: %d",count);

    return 0;
}
