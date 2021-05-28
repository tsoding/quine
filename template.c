#include <stdio.h>
#include <string.h>

int main()
{
    const char *s = "?";

    size_t n = strlen(s);
    for (size_t i = 0; i < n; ++i) {
        if (s[i] == 63) {
            for (size_t j = 0; j < n; ++j) {
                switch (s[j]) {
                case '\n': fputs("\\n", stdout);  break;
                case '\"': fputs("\\\"", stdout); break;
                case '\\': fputs("\\\\", stdout); break;
                default: fputc(s[j], stdout);
                }
            }
        } else {
            fputc(s[i], stdout);
        }
    }

    return 0;
}
