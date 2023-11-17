#include <stdio.h>
int main()
{
    int n1 , n2 , sum , minus , multi;
    float divide;
    

    printf("Enter First Number:");
    scanf("%d",&n1);
    printf("Enter Second Number:");
    scanf("%d",&n2);
    
    sum = n1 + n2;
    
    minus = n1 - n2;

    multi = n1 * n2; 
         
    divide = (float) n1 / n2;
    
    printf("multiplication of first number and second number is :%d\n",multi);
    printf("Sum of First Number And Second number is :%d \n",sum);
    printf("sub of first no. and second no. is :%d\n",minus);
    printf("division  of first number  and division of second number is :%f\n",divide);

    
    
    return 0;
}

