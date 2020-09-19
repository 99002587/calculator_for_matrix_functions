#include<stdio.h>
#include <head.h>


int main()
{
    
    int matrix_a[3][3];
	int matrix_b[3][3];
	unsigned int calculator_operation=0;
      
	  int a;
	  int b;

    //take first matrix
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
          
            scanf("%d",&matrix_a[a][b]);
        }
    }
	
    printf("\n");

    //take second matrix
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
        
            scanf("%d",&matrix_b[a][b]);
        }
    }
	
		
	     scanf("%d", &calculator_operation);
	
		
	switch(calculator_operation)
    {
        case 1:
            printf("Addition");
            add(matrix_a, matrix_b);
            break;
        
        case 2:
            printf("Multiplication");
             mul(matrix_a, matrix_b);
            break;
			
		case 3:
            printf("Transpose");
            transpose(matrix_a);
			break;
			
        default:
            printf("\n\t---It should never come here---\n");
    }
	    
   	//matrix_a and matrix_b passed

    return 0;
}
