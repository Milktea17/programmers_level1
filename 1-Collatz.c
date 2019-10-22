/////////////////////////////////////////////
// 프로그래머스 level 1 : 콜라츠 추측 
/////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long num) {
    int answer = 0;
    
    for(answer=0; num!=1 ; answer++)
    {
        if(num%2==0)//짝수일때
        {
            num/=2;
        }
        else
        {
            num = (num*3)+1;
        }
        if(answer == 500)
        {
            answer=-1;
            break;
        }
    }
    
    return answer;
}