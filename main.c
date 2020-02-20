#include <stdio.h>
int main()
{
    int max;
    printf("Enter the max : ");
    scanf("%d",&max);
    int arr[max]  ,temp;
    for (int l = 0; l < max; ++l) {
        scanf("%d",&arr[l]);
    }
    for(int i=0;i<max;++i)
    {
        for (int j = 0; j < max; ++j)
            if(arr[i]<arr[j])       //if found less than arr[i]
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;// swapping
            }
    }
    for (int k = 0; k < max; ++k) { // print all elements
        printf("%d",arr[k]);
    }
    return 0;
}