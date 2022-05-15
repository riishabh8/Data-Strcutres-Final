#include <unistd.h>
#include <stdio.h>
#include<bits/stdc++.h>
int main()
{
    const char x[] = "Hello World!";
    write(STDOUT_FILENO, x, strlen(x)); // Feel free to check the return value.

    int val = 4;
    return 0;
}