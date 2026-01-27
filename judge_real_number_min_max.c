#include<stdio.h>
#include<float.h>
int main()
{
floatMin = FLT_MIN;
floatMax = FLT_MAX;
doubleMin = DBL_MIN;
doubleMax = DBL_MAX;
longDoubleMin = LDBL_MIN;
longDoubleMax = LDBL_MAX;

printf("%e %e\n", doubleMin, doubleMax);
printf("%Le %Le\n", longDoubleMin, longDoubleMax);
return 0;
}
