/////////////////////////////////////////////
// 프로그래머스 level 1 : 두 정수 사이의 합
/////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int i;
    
    if(a<b)
    {
        for(i=a;i<=b;i++)
        {
            answer+=i;
        }
    }
    else if(a>b)
    {
        for(i=b;i<=a;i++)
        {
            answer+=i;
        }
    }
    else if(a==b){
        answer = a;
    }
    
    
    return answer;
}