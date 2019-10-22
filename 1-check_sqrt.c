/////////////////////////////////////////////
// 프로그래머스 level 1 : 정수 제곱근 판별 
/////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
     long long tmp = sqrt(n);
    
    if(tmp*tmp == n)
    {
        answer = (tmp+1)*(tmp+1);
    }
    else
    {
        answer = -1;
    }
    return answer;

}