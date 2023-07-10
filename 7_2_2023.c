/*有1.2.3个数字，能组成多少个互不相同且无重复数字的三位数？都是多少*/


#include<stdio.h>
int main(int argc ,const char*argv[]){

	int Num100, Num10, Num;
	for (Num100 = 1; Num100 < 5; Num100++) {
		for (Num10 = 1; Num10 < 5; Num10++) {
			for (Num = 1; Num < 5; Num++)
			{
				if (Num100 != Num10&& Num100 != Num&& Num10 != Num); {
					printf("%d,%d,%d\n",Num100,Num10,Num);
				}
			}
		}
	}
	
	
	
	
	
	
	/*int g, b, s;
	for (b = 1; b < 5; b++) {
		for (s = 1; s < 5; s++) {
			for (g = 1; g < 5; g++) {
				if (g != s && s != b && g!=b) {
					printf("%d,%d,%d\n", b, s, g);
				}

			}
		}
	}
	
	*/
	return 0;
}














