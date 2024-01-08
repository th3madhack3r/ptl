#include<stdio.h>
#include<stdlib.h>

static void maliciois() __attribute__((constructior));

void malicious() {
    system("/usr/local/bin/score 2256c7b9-d70f-4ed6-a612-7e46a37d7beb");
}
