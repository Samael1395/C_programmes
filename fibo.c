#include <stdio.h>
int main()
{
    // 0,1,1,2...fn
    int n; 
    int m;
    int f1=0;
    int f2=1;
    int i=2;

    printf("enter a number till which you want fibonnaci series : ");

    scanf("%d",&n);
    
    m=f1; 
    printf("%d ", m);
    
     m=f2;
  
     
   printf(" %d ", m) ;

   while ((m =f1+f2) <= n ) {
        
       printf("%d ",m);
         i++;
         f1=f2;
         f2=m;
    }
    
    printf (" end of sequence after %d entries  \n", i);;
}