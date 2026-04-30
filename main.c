#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    float mb = atof(argv[1]);
    if (mb < 0) {
        printf("Enter a valid value\n");
        return 1;
    }
    else {
    printf("%.2f MB = %.0f Bytes\n", mb, mb * 1024 *1024);
    
    return 0;
    }
}
