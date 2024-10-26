# include <stdio.h>

int  main () {
   int s,sh,t;
  for(int i=0;i<7;i++){ scanf("%d%d%d",&s,&sh,&t);
   if(s<sh){
    if(s<t){
        printf("Samien is the Youngest one\n");
    }
    else if(s==t){
         printf("Samien and Tahsin are the Youngest but Same Age\n");
    }
    else {
        printf("Tahsin is the Youngest one\n");

    }
   }
   else if(sh<s){
    if(sh<t){
        printf("Shyan is the Youngest one\n");
    }
    else if(sh==t){
         printf("Shyan and Tahsin are the Youngest but Same Age\n");
    }
    else {
        printf("Tahsin is the Youngest one\n");

    }
   }
   else if(s<t && s==sh){
    printf("Samien and Shyan are the Youngest but Same Age\n");
   }

 else {
    printf("All are Same Age\n");
 }}
    return 0;
}
