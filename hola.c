#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("binary.c","wb");
    
    int n;
    printf("Enter how many numbers are there: ");
    scanf("%d",&n);
    printf("Enter all the numbers: \n");

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%^d",&arr[i]);
    }
    if(fp==NULL)
    printf("Error");
    else
    {
        printf("File opened in write mode\n");
        int i=0;
    
        fwrite(arr,sizeof(arr),n,fp);
        printf("Data written");
    }
    fclose(fp);
}