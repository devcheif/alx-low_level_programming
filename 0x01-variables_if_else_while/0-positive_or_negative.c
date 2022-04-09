#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/* Store a different value Everytime this program is executed */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* the value of n */
     printf(The number is : %dn, n)

    if(n > 0) {
     /* If the number is greater than zero */
       printf(n is positiven)
    } else if(n == 0 ) {
       /* else If the number is 0 */
       printf(n is zero/n)
    } else if(n < 0) {
       /* else if the number is less than 0 */
       printf(n is negativen)
    }

return (0);
}
