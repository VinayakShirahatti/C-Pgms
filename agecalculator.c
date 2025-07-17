#include <stdio.h>
#include <stdlib.h>
int
main(void)
{
	int d1, m1, y1, d2, m2, y2, d, m, y;
	printf("==========================================================\n");
	printf("                 AGE CALCULATOR                           \n");
	printf("==========================================================\n");
	printf("Enter Your Birthday day ");
	scanf("%d", &d1);
	printf("Enter Your Birthday Month ");
	scanf("%d", &m1);
	printf("Enter Your Birthday Year ");
	scanf("%d", &y1);
	printf("Enter Your current day ");
	scanf("%d", &d2);
	printf("Enter Your current Month ");
	scanf("%d", &m2);
	printf("Enter Your current Year ");
	scanf("%d", &y2);
	if (d1<=30 && d1>=0 && d2<=30 && d2>=0 && m1<=12 && m1>=0 && m2<=12 && m2>=0 && y1>0 && y2>0 && y2>y1){
		printf("All inputs are correct");
	}
	if (((d1 > 30 || d1 < 0) || (d2 > 30 || d2 < 0)) || ((m1 < 0 || m1 > 12) || (m2 < 0 || m2 > 12)) || ((y1 < 0 || y2 < 0) || (y2 < y1)))
	{
		printf("Some input is incorrect. Please check all your inputs");
	}
	else
	{
		if (d2 > d1)
		{
			d = d2 - d1;
		}
		else
		{
			m2 = m2 - 1;
			d = d2 + 30 - d1;
		}

		if (m2 > m1)
		{
			m = m2 - m1;
		}
		else
		{
			y2 = y2 - 1;
			m2 = 12 + m2;
			m = m2 - m1;
		}

		y = y2 - y1;


	 printf(" Answer = %d year(s), %d month(s), %d day(s)", y, m, d);
	}

}
