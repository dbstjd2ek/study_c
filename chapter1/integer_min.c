#include <stdio.h>
#include <limits.h> // 자료형의 최댓값과 최솟값이 정의된 헤더파일
int main()
{
    char num1 = CHAR_MIN; // char의 푀솟값-128
    short num2 = SHRT_MIN; // short의 회솟값 -32768	
    int num3 = INT_MIN; // int의 최솟값-2147483648
    long num4 = LONG_MIN; // long의 최솟값-2147483648
    long long num5 = LLONG_MIN; // long long 최솟값-9223372036854775808

    // cha, short, int는 %d로 출력하고 long은 %ld, long long은 %lld로 출력
    printf("%d %d %d %ld %lld\n", num1, num2 ,num3, num4, num5);
 
    return 0;
}
