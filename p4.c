#include <stdio.h>

int main() {
    int salary,leave;
    scanf("%d",&salary);
    int sub=salary;
    scanf("%d",&leave);
    for(int i=1;i<=leave;i++){
        sub=sub-100;
    }
    printf("%d",sub);
    return 0;
}
