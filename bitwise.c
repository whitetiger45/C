#include <stdio.h>

main()
{

	unsigned int a= 60;/* 60 = 0011 1100 */
	unsigned int b = 13;/* 13 = 0000 1101 */
	int c= 0;
	c= a&b;/* 12 = 0000 1100 */
	printf("Line 1-Value of c is %d\n",c);
	c= a|b;/* 61 = 0011 1101 */
	printf("Line 2-Value of c is %d\n",c);
	c= a^b;/* 49 = 0011 0001 */
	printf("Line 3-Value of c is %d\n",c);
	c= ~a;/*-61 = 1100 0011 */
	printf("Line 4-Value of c is %d\n",c);
	c= a<<2;/* 240 = 1111 0000 */
	printf("Line 5-Value of c is %d\n",c);
	c= a>>2;/* 15 = 0000 1111 */
	printf("Line 6-Value of c is %d\n",c);


	printf("\n--------------------------------------------------\n");
	int i= 21;
	int l;
	l = i;
	printf("Line 1- = Operator Example, Value of l = %d\n",l);
	l += i;
	printf("Line 2- += Operator Example, Value of l = %d\n",l);
	l -= i;
	printf("Line 3- -= Operator Example, Value of l = %d\n",l);
	l *= i;
	printf("Line 4- *= Operator Example, Value of l = %d\n",l);
	l /= i;
	printf("Line 5- /= Operator Example, Value of l = %d\n",l);
	
	l = 200;
	l %= i;
	printf("Line 6- %= Operator Example, Value of l = %d\n",l);

	l <<= 2;
	printf("Line 7- <<= Operator Example, Value of l = %d\n",l);
	
	l >>= 2;
	printf("Line 8- >>= Operator Example, Value of l = %d\n",l);

	l &= 2;
	printf("Line 9- &= Operator Example, Value of l = %d\n",l);

	l |=2;
	printf("Line 10 |= Operator Example, Value of l = %d\n",l);

	l ^=2;
	printf("Line 11 ^= Operator Example, Value of l = %d\n",l);


	printf("\n--------------------------------------------------\n");

	int j = 20;
	int k = 10;
	int m = 15;
	int n = 5;
	int o;
	
	o= (j + k) * m /n;// (30 * 15 ) / 5
	printf("Value of (j + k ) * m / n is: %d\n", o);

	o= ((j + k) * m )/n;// (30 * 15 ) / 5
	printf("Value of (j + k ) * m / n is: %d\n", o);
	
	o= (j + k) * (m /n);// (30) *(15 / 5)
	printf("Value of (j + k ) * m / n is: %d\n", o);	

	o= j + (k * m) /n;// 20 + (150/5)
	printf("Value of (j + k ) * m / n is: %d\n", o);
	printf("\n");


}