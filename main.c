#include <stdio.h>
#include <math.h>
int main()
{
    long int num , n1 , n2 ,n3 , n4 , n5 , revno ;
    printf("enter the 5 digit number :");
    scanf("%d \n", &num);
    n5 = num % 10;
    num = num/10;
    n4 = num % 10 ;
    num = num/10 ;
    n3 = num % 10 ;
    num = num/10;
    n2 = num % 10;
    num = num/10;
    n1 = num % 10;
    num = num/10 ;
    revno = n5 * 10000 + n4 * 1000 + n3 * 100 + n2 *10 + n1;
    printf("the reversed number is : %d\n", revno);

    return 0;
}
