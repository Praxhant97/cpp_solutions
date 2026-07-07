#include <stdio.h>
#include <string.h>

void print_parameter(const char *url, const char *param) {
    char *start = strstr(url, param);
    if (start) {
        start += strlen(param) + 1; // Move past the parameter name and '='
        char *end = strchr(start, '&');
        if (!end) {
            end = strchr(start, '\0'); // If no '&', find the end of the string
        }
        printf("%s: ", param);
        while (start < end) {
            putchar(*start++);
        }
        printf("\n");
    }
}

int main() {
    char url[10005];
    scanf("%s", url);

    print_parameter(url, "username");
    print_parameter(url, "pwd");
    print_parameter(url, "profile");
    print_parameter(url, "role");
    print_parameter(url, "key");

    return 0;
}
