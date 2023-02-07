#include <stdio.h>

int main()
{
    int i = 0;
    int marks[10],n;
    printf("enter the range of array");
    scanf("%d",&n);
    printf("emter the data in array");
      for(i= 0;i<n;i++)
      {
        scanf("%d",&marks[i]);
      }
      printf("my all data of array");
      for(i=0;i<n;i++)
      {
            printf("%d \n ",marks[i]);
      }

    return 0;
}