/////////////////////////////////////////////
// 프로그래머스 level 1 : 자연수 뒤집어 배열로 만들기
/////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(sizeof(int)*11);
    memset(answer,0,sizeof(int)*11);
    int i;
    long long tmp=n; //int아님 주의!
    
    for(i=0;tmp>0;i++)
    {
        answer[i]=tmp%10;
        tmp/=10;
    }

    return answer;
}