#include <stdio.h>

int main() {
    char s[20];
    printf("Enter your name:\n");
    scanf("%s", s);
    printf("Hello %s\n", s);
    printf("Enter 2 numbers:\n");





    return 0;
}
    int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    return GCD(b, a%b);

}
