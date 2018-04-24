#include <stdio.h> 

void main() { 

 int i, A[5], B[5], j=4; 

 for (i=0;i<5;i++) { 
     printf("\nDigite A[%d]: ",i); 

     scanf("%d",&A[i]); //1 2 3 4 5
    } 

 for (i=0;i<5;i++) { 

     B[j]=A[i]*5; 

     j--; 
    } 

 for (i=0;i<5;i++) {
     printf("\nB[%d]: %d ",i,B[i]); 
 }


} 