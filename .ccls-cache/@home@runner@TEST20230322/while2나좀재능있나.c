#include <stdio.h>
main(){
       int i,j;
       printf("1에서 19사이의 숫자를 입력하세요\n");
       scanf("%d",&i);

       j=1;
       while(j<20){
              printf("%d*%d = %d\n", i, j, i*j);
              j++;
       }
}