# include <stdio.h>
#include<strings.h>

int  main () {
    char s[100]; int i,j,x;
    x=strlen(s);
    scanf("%s",s);
    for(i=0;i<x;i++){
        if(s[i]=='a'){
            for(j=i;i<x;j++){
                 s[j]=s[j+1];
            }
            x--;
            i--;


        }

    }
    printf("%s",s);
    return 0;
}
