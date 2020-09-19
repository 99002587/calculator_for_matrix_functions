#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

void read();
void add(int matrix_a[3][3], int matrix_b[3][3]);
void mul(int matrix_a[3][3], int matrix_b[3][3]);
void transpose(int matrix_a[3][3]);
#endif
