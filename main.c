#include <stdio.h>
#include <math.h>
int main()
{
    long int n , d1 , d2 ,d3 , d4 , d5 , revno ;
    printf("enter the 5 digit number :");
    scanf("%d \n", &n);
    d5 = n % 10;
    n = n/10;
    d4 = n % 10 ;
    n = n/10 ;
    d3 = n % 10 ;
    n = n/10;
    d2 = n % 10;
    n = n/10;
    d1 = n % 10;
    n = n/10 ;
    revno = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 *10 + d1;
    printf("the reversed number is : %d\n", revno);

    return 0;
}
