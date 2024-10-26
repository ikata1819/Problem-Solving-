# include <stdio.h>
# include <stdlib.h>
# include <string.h>
#include <math.h>

int main( )
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,n1,m1,c=0,f=-1;
        scanf("%d%d",&n,&m);
        char x[n*1000],s[m+5];
        scanf("\n");
        scanf("%s%s",x,s);
        n1=n; m1=m;
        int i=1;
       while(i<n*m){
        strcat(x,x);
        c++;
        if(strstr(x,s)!=NULL){
                f=0;
            break;
        }
       }
       if(f==-1)
        printf("-1\n");
       else
        printf("%d\n",c);
        i++;
    }
    return 0 ;
}
