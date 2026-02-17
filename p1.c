#include <stdio.h>

int main() {
    int days,d_exp,count=0,sum=0;
    scanf("%d",&days);
    for(int i=1;i<=days;i++){
        scanf("%d",&d_exp);
        sum+=d_exp;
        if(d_exp>1000)
        count++;
        
    }
    printf("Total Expense %d\n",sum);
    printf("Overspend Days %d",count);

    return 0;
}
