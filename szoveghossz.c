#include <stdio.h>
#include <stdlib.h>

int main() {
    
	int i;
    char bemenet[] = "hello szia mizu";
	
    for (i = 0; bemenet[i] != '\0'; ++i);

    printf("%d", i);

    return 0;
	
}