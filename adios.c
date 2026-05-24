#include <stdio.h>
struct komal{
char name[10];
int rollno;
float per;
};

int main()
{
    struct komal s[4];
    for(int i=0;i<4;i++)
    {
        printf("Enter the name of the student  %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter their roll no: ");
        scanf("%d",&s[i].rollno);
        printf("Enter the percentage: ");
        scanf("%f",&s[i].per);
    }

    FILE *fp;
    fp=fopen("binary.bin","wb+");
    if(fp==NULL)
    printf("Error");
    else
    {
        printf("File opened in write binary plus mode \n");
        int i=0;
        while(i<4)
        {
            fwrite(&s[i],sizeof(s[i]),1,fp);
            i++;
        }
           printf("Data written successfully\n");
        rewind(fp);
        int j=0;
        while(j<4)
        {
            fread(&s[i],sizeof(s[i]),1,fp);
            printf("Data is, name: %s, rollno: %d, per: %f",s[i].name,s[i].rollno,s[i].per);
            j++;
        }
    }
                fclose(fp);

}