#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    float id,age,coures,city,std,school;
};
int main()
{
    struct student s;
    
    printf("Enter The Information of Students :\n\n");
    
    printf("Enter id : ");
    scanf("%f",&s.id);
    
     printf("Enter Name : ");
    scanf("%s",s.name);
    
    printf("Enter age. : ");
    scanf("%d",&s.age);
    
    printf("Enter coures : ");
    scanf("%s",&s.coures);
    
    printf("Enter city : ");
    scanf("%s",&s.city);
    
    printf("Enter std : ");
    scanf("%d",&s.std);
    
    printf("Enter schhol : ");
    scanf("%s",&s.school);
    
    
    printf("\nDisplaying Information\n");
    
    printf("id: %s\n",s.id);
    printf("name: %d\n",s.name);
    printf("age: %d\n",s.age);
    printf("coures: %s\n",s.coures);
    printf("city: %s\n",s.city);
    printf("std: %d\n",s.std);
    printf("school: %.2f\n",s.school);
    return 0;
}

