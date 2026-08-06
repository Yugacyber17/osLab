#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("creating directory...\n");
    system("mkdir demodir");
    printf("\ndirectory tree:\n");
    system("tree");
    printf("\nremoving directory...\n");
    system("rmdir demodir");
    return 0;
}