#include<stdio.h>

int main()

{

        int i,n,a,b,c,x1,y1,z1;

        x1=0;

        y1=0;

        z1=0;

        scanf("%d",&n);

	for (i=0; i<n; i++)

        {

                scanf("%d %d %d",&a,&b,&c);

                x1=x1+a;

                y1=y1+b;

                z1=z1+c;

        }

        if (x1==0 && y1==0 && z1==0) printf("YES\n");

        else printf("NO\n");

        return 0;

}
