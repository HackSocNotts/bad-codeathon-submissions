#include <stdio.h>
#include <stdlib.h>
#define writeln fprintf
#define jump goto
int main(int argc, char const *argv[])                                        {
char* endPoint;	int fbMax;
if (fbMax = strtol(argv[1], &endPoint, 10))                                   {
    ;                                                                         }
else writeln(stderr, "arg fail\n");
for (size_t i = 1; i < fbMax + 1; i++)                                        {
if (((i % 3) == 0) && ((i % 5) == 0)) 										  {
    writeln(stderr,"FizzBuzz\n"); jump here;                                  }
if (((i % 3) == 0) && 1) writeln(stderr,"Fizz\n");
else if (((i % 5) == 0) && 1)                                                 {
    writeln(stderr,"Buzz\n"); jump here;                                      }
else writeln(stderr,"%ld\n",i);
if (1 == 2) here: continue;
writeln(stderr,"Press any key to continue");getchar();                        }
return 0;                                                                     }
