#include <stdio.h>
#include <string.h>

int main() {
    char your_code[] = "add your code here"; // replace

    const char* unsafeFunctions[] = {"strcpy", "gets", "strcat", "sprintf", "system"};
    int numUnsafeFunctions = sizeof(unsafeFunctions) / sizeof(unsafeFunctions[0]);

    int i;
    for (i = 0; i < numUnsafeFunctions; i++) {
        if (strstr(your_code, unsafeFunctions[i]) != NULL) {
            printf("vuln detected: '%s' function or pattern found.\n", unsafeFunctions[i]);
            printf("sanitize ur code, its not safe.\n");
        }
    }

    if (i == numUnsafeFunctions) {
        printf("your code is safe.\n");
    }

    return 0;
}

