#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float rctngl_area, rctngl_prmtr, lnth, brth, crcl_area, crcl_crmfrnc, crcl_rad;
    printf ("\n Please enter the length of the rectangle : ");
    scanf ("%f",&lnth);

    printf("\n Please enter the breadth of the rectangle : ");
    scanf("%f", &brth);

    printf("\n Please enter the radius of the circle : ");
    scanf("%f", &crcl_rad);

    rctngl_area= lnth * brth;
    printf ("\n area of rectangle is %f", rctngl_area);

    rctngl_prmtr = 2 * (lnth+brth);
    printf("\n perimeter of rectangle is %f", rctngl_prmtr);

    crcl_area = 3.14 * pow(crcl_rad,2);
    printf("\n area of the circle is %f", crcl_area);

    crcl_crmfrnc = 2 * 3.14 * crcl_rad;
    printf("\n circumference of the circle is %f", crcl_crmfrnc);

	return 0;
}
