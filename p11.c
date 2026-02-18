#include <stdio.h>
int main() {
    int n,pt,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&pt);
        sum+=pt;
        if(pt>100)
        count++;
    }
    printf("Total Patients: %d\n",sum);
    printf("Overcrowed Days: %d",count);
    return 0;
}
