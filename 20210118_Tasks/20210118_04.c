#include <stdio.h>

int main(){
	int x = 10,y = 10;
	int true = x && y & x << 1; /*Според приоритета на операциите първо извършва преместването на разряда на ляво на промеливата х с 1, след това побитовото И и последната операция е логическото И при което получаваме резултат 0 */
	printf("True = %d\n", true);
	
	int true1 = x && y ^ x << 1;/*Според приоритета на операциите първо извършва преместването на разряда на ляво на промеливата х с 1, след това побитовото изключващо ИЛИ и последната операция е логическото И при което получаваме резултат 1 */
	printf("True1 = %d\n", true1);
	
	return 0;	
}