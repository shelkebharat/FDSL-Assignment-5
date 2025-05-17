
#include<stdio.h>
int main()
{
    int a[10];
    int n,i,j,k,c;
    printf("Enter Size of Array\n");
    scanf("%d",&n);
    printf("Enter %d Array Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                c = a[i];
                for(k=i;k>j;k--)
                {
                    a[k] = a[k-1];
                }
                a[j] = c;
            }
        }
            printf("\nPass %d:\n",i);
    	        for(int i=0;i<n;i++)
    	             {
    		            printf("%d ",a[i]);
                     }
    }
        printf("\nSorted Array\n");
            for(i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }
                
        return 0;
}