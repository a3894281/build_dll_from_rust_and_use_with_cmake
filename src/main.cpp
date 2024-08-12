#include <stdio.h>

extern "C" {
    int my_function(int a);
}

int main() {
    int result = my_function(5);
    printf("The result of my_function(5) is: %d\n", result);
    return 0;
}
