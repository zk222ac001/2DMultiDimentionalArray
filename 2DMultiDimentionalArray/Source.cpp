#include <stdio.h>
#define ROW 5
#define COL 3

int main(void) {

	// hvordan vi declare 2D array ( multi dimentional array)

	// 2 Rows - 3 Column
	int arrayTwoDimentional[ROW][COL] =
	{ 
		{1,2,3} , 
		{4,5,6} , 
		{7,8,9} ,
		{10,11,12},
		{13,14,15}
	};

	//printf("%d", arrayTwoDimentional[1][0]);
	// out loop for Rows
	for (int row = 0; row < ROW; row++)
	{
		// inner loop for column 
		for (int col = 0; col < COL; col++)
		{
			printf("[%d][%d] = %d ,", row, col, arrayTwoDimentional[row][col]);
		}
		printf("\n");
	}



	return 0;

}