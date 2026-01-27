#include <stdio.h>
int main() 
{
float num1 = FLT_MIN; // float의 양수 최솟값
float num2 = FLT_MAX; // float의 양수 최댓값

num1 = num1 / 1000000.0f; :

num2 = num2 * 1000.0f;

printf("%e %e\n", num1, num2);
return 0;
}
