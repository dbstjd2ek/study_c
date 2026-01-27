#include<stdio.h>
int main()
{
float num1 = 3.e5f; // 지수 표기법으로 300000을 표기 float는 숫자 뒤에 f를 붙힘

double num2 = -1.3827e-2;  // 지수 표기법으로 -1.3827e-2을 표기 double은 숫자 뒤에 아무것도 안붙힘

long double num3 = 5.21e+9l;  // 지수 표기법으로 5210000000을 표기 long double는 숫자 뒤에 l 를 붙힘


// float와 double은 %f로 출력, long double은 %Lf로 출력
printf("%f %f %Lf\n", num1, num2, num3);
//지수 표기법으로 출력할 떄는 float와 double은 %e로 출력, long double은 %le로 출력
printf("%e %e %Le\n", num1, num2, num3);
return 0;
}
