#include<stdio.h>
int main()
{
 	int n1, n2, n3, i, j;
 	scanf("%d", &n1);     //Array Size Declaration
    int a[n1];      //Array Declaration
 	
 	for(i = 0; i < n1; i++)
  	{
      	scanf("%d", &a[i]);
  	}
  	
 	scanf("%d", &n2);    //Array Size Declaration
    int b[n2];       //Array Declaration
 	
 	for(i = 0; i < n2; i++)
  	{
      	scanf("%d", &b[i]);
  	}
	n3 = n1 + n2;     
    int c[n3];       
  	for(i = 0; i < n1; i++)
  	{
      	c[i] = a[i];
  	}
 	for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
  	{
  		c[j] = b[i];
  	} 
 	for(i = 0; i < n3; i++)
  	{
    	printf("%d",c[i]);
  	}
  	return 0;
}