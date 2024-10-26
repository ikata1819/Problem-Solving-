#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main( ){
int t;
scanf("%d",&t);
char a[5];
while(t--){
        int sum=4;
    scanf("%s",a);
    int s[5];
    for(int i=0;i<4;i++){
            s[i]=a[i]-'0';
            if(s[i]==0)
                s[i]=10;
        }
        //if(s[0]!=0)
    sum+=abs(1-s[0]);

    for(int i=1;i<4;i++){
        //if(s[i]!=0){


            sum+=abs(s[i]-s[i-1]);


    }
    printf("%d\n",sum);
}


    return 0 ;
}
