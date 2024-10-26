# include <stdio.h>
# include <stdlib.h>
# include <string.h>
#include <math.h>

int main( )
{
    int t;
    scanf("%d",&t);
    while(t--){
        char s[10][10];
        for(int i=0;i<8;i++){
            scanf("\n");
            scanf("%s",s[i]);
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(s[i][j]>='a' && s[i][j]<='z'){
                    printf("%c",s[i][j]);
                }
            }
        }

        printf("\n");
    }

return 0 ;
}
