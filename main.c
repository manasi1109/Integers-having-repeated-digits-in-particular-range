/*
Problem Description -:  Given two non-negative integers n1 and n2, where n1<n2. The task is to find the total number of integers in the range [n1, n2](both inclusive) which have no repeated digits.

For example:

Suppose n1=11 and n2=15.

There is the number 11, which has repeated digits, but 12, 13, 14 and 15 have no repeated digits. So, the output is 4.

Constraints: 
n1 and n2 are both positive integers
n1<=1000

Example1:

Input:

11 — Vlaue of n1
15 — value of n2
Output:

4

Example 2:

Input:

101 — value of n1
200 — value of n2
Output:

72
*/

//code

#include <stdio.h>

int main()
{
    int n1,n2,a,b,c,count = 0;
    scanf("%d",&n1);   
    scanf("%d",&n2); 
    if(n1>0 && n2>0 && n2<=1000){
    if(n1<n2){
    for(int i=n1; i<=n2; i++){
        if(n1<100 && n2<100){
        a = i / 10;
        b = i % 10;
    if(a !=b ){
        count++;
    }
        }
         else{
        a = i / 100;
        b = (i/10) % 10;
        c = (i%10) % 10;
    if(a !=b && b!=c && c!=a){
        count++;
    }
        }
    }
    printf("%d",count);
    }
    }
    return 0;
}

