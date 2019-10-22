/////////////////////////////////////////////
// 프로그래머스 level 1 : 약수의 합 
/////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    int i;
    
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
            answer+=n/i;
    }
    
    return answer;
}