#include <stdio.h>
#include <string.h>
 
 
int main(void)
{
    const char password[15] = "login";
    char pass[15];
    int x;
    int log = 0;
     
    printf("Enter your password: ");
    scanf("%s", &pass);
    if(strcmp(pass, password) != 0)
    {
        log = 1;
    }
    else
    {
        for(x = 0; x < strlen(pass); x++)
        {
            if(pass[x] != password[x])
            {
                log = 1;
                break;
            }
        }
    }
    if(log == 0)
    {
        printf("\nSuccessful login...\n");
    }
    else
    {
        printf("\nInvalid password!\n");
    }
     
    getchar();
    return 0;
}
