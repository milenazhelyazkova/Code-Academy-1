#include <stdio.h>

int main(){
	int x = 1, y = 0;
	int z = y || x;
	printf("z = %d ", z);
	
	printf("\ninit values:X = %d, Y = %d\n", x, y);
	x = 1 + 2, 2 * 3, 3 + 4; /*Първо се изпълнява събирането от ляво на дясно и се присвоява стойност на х, останалите два израза отделени със запетая не се изпълняват. */
	y = (7 * 8, 8 + 9, 9 - 4);/*Тъй като имаме скоби , операциите в скобите се извършват една по една от ляво на дясно и се присвоява стойност на х при пресмятането на последния израз. */
	printf("\nX=%d, Y=%d\n", x,y);
	
	return 0;	
}