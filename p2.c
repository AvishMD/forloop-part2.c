#include <stdio.h>

int main() {
    int lmt,amt,sum=0;
    scanf("%d",&lmt);
    for(int i=0;i<lmt;i++){
        scanf("%d",&amt);
        sum+=amt;
    }
    if(sum<=10000)
        printf("Approved");
    else
        printf("Limit reached");
    return 0;
}
