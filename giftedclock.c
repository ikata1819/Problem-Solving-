#include<stdio.h>
int main(){
int t,h,m;
  scanf("%d",&t);
  for(int i=0;i<t;i++){

	    if(m==0)
	    {
	        if(h==12)
                printf("12:00\n");

	        else printf("%02d:00",12-h);
	    }
	    else if(h==12)
	    {printf("11:%02d",60-m);

	    }
	    else if(h==11)
	    {printf("12:%02d\n",60-m);

	    }
	    else
	    {
	      printf("%02d:%02d\n",11-h,60-m);
	    }


}

return 0;
}
