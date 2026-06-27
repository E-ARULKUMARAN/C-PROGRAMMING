#include <stdio.h>
#include <math.h>
int main()
{
    int n,sum=0,count=0;
    scanf("%d%n",&n,&count);
    int temp=n;
    while(temp>0){
        sum+=pow(temp%10,count);
        temp/=10;
    }
    if(n==sum)
    printf("armstrong number");
    else
    printf(" not armstrong number");
    return 0;
}
// Description

// An Armstrong number is a number that is equal to the sum of its own digits, where each digit is raised to the power
// of the total number of digits. Check whether the given number is an Armstrong number.

// Sample Input
// 153
// Sample Output
// Armstrong Number
// Explanation

// The number 153 has 3 digits.

// 1^3 +5^3 +3^3 =1+125+27=153

// Since the sum equals the original number, 153 is an Armstrong number.