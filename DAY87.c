#include <stdio.h>

enum Role
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    enum Role r;

    printf("1. Admin\n");
    printf("2. User\n");
    printf("3. Guest\n");

    scanf("%d", &r);

    if(r == ADMIN)
        printf("Welcome Admin");
    else if(r == USER)
        printf("Welcome User");
    else if(r == GUEST)
        printf("Welcome Guest");
    else
        printf("Invalid role");

    return 0;
}