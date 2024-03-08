#include <stdio.h>

int main()
{	
	for (int i = 0; i < 10; ++i){
		for (int j = 0; j < 10; ++j){
			if (j == 0 || j == 9 || i == 0 || i == 9){
				printf("*\t");
			} else if ((i > 0 && j > 0) && (i < 9)){
				printf("        ");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}



