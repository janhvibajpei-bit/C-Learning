#include<stdio.h>
// int main(){
//     char c;
//     int d;
//     scanf("%c",&c);
//     scanf("%d",&d);
//     printf("Roll number %d in section %c",d,c);
//     return 0;
// }
// int main(){
//     const int maxAllowedTime = 120;
//     printf("Maximum Allowed Time: %d minutes",maxAllowedTime);
//     return 0;

// }
int main(){
    int a,b,c,d,e;
    int total;
    float percentage;
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    total = a+b+c+d+e;
    percentage = (total/500.0) * 100;
    printf("Total: %d\n", total);
    printf("Percentage: %.2f", percentage);
    return 0;

}