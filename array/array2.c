#include <stdio.h>

int main()
{
int fun(int *ptr)
{
/*Fun specific stuff is done with ptr here*/
return 1000;
}
printf("%d",fun(NULL));

}
