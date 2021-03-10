#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i, j = 5;
     
	for (i = 1; i <= 10; i = i + 1){
    
	printf("%2d x %2d = %3d\n", j, i, i * j);
     
	 printf("\n");
}
	// pausar codigo
	system ("pause");
}
