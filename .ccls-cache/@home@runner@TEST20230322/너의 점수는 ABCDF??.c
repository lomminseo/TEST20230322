#include <stdio.h>
main(){
  int x;
  printf("90이상 100이하:A | 80이상 90미만:B | 70이상 80미만:C | 60이상 70이하:D | 60미만:F");
  scanf("%d", &x);
   if(x>=90)
     printf("
      ");
   else if(x==2)
     printf("키위를 좋아하는군요!");
   else if(x==3)
     printf("복숭아를 좋아하는군요!");
   else if(x==4)
     printf("수박을 좋아하는군요!");
   else
     printf("당신은 아마도 과일을 좋아하지 않는 것 같군요!");
   printf("좋아하는 과일 조사 끝");
}