#include <stdio.h>
int main() {
    int n,marks,sum=0,count=0,average=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&marks);
        sum+=marks;
        if(marks<40)
        count++;
    }
    average=sum/n;
    printf("Average Marks: %d\n",average);
    printf("Failed Subjects: %d",count);
    return 0;
}
