#include <head.h>

void read()
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



}




void add(int matrix_a[3][3], int matrix_b[3][3])
{
    int adding[3][3];
    int	aa; 
	int bb;

    //Add both matrices
    for(aa=0;aa<3;aa++)
    {
        for(bb=0;bb<3;bb++)
        {
            adding[aa][bb] = matrix_a[aa][bb] + matrix_b[aa][bb];
        }
    }
    

}



void mul(int matrix_a[3][3], int matrix_b[3][3])
{

    int prod[3][3];
	int xx; 
	int yy;
	int zz;
	int sum;

    //multiply both matrix m and n
    for(xx=0;xx<3;xx++)
    {
        for(yy=0;yy<3;yy++)
        {
            int sum=0;
            for(zz=0;zz<3;zz++)
            {
                sum+= matrix_a[xx][zz] * matrix_b[zz][yy];
            }
            prod[xx][yy]=sum;
        }
        
        
    }
}


void transpose(int matrix_a[3][3])
	
{

int row;
int col;
	int i;
	int j;
scanf("%d %d", &row, &col); //transpose of a matrix
 int trans[3][3];

 for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j) {
            trans[j][i] = matrix_a[i][j];
        }
	
				
		
}	
