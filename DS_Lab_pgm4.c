#include <stdio.h>

int main()
{
    FILE *inp, *out;
    char ch;

    inp = fopen("input_pgm4.txt", "r");

    out = fopen("output_pgm4.txt", "w");

    int freq[128] = {};

    do
    {
        ch = getc(inp);
        freq[ch]++;

    } while (!feof(inp));
    fputs("CHARACTER  FREQUENCY", out);

    for (int i = 65; i <= 90; i++) {
        if (freq[i] != 0) {
            fprintf(out, "\n%c\t-->\t\t%d", i, freq[i]);
        }
    }

    for (int i = 97; i <= 122; i++) {
        if (freq[i] != 0) {
            fprintf(out, "\n%c\t-->\t\t%d", i, freq[i]);
        }
    }

    for (int i = 48; i <= 57; i++) {
        if (freq[i] != 0) {
            fprintf(out, "\n%c\t-->\t\t%d", i, freq[i]);
        }
    }
    return 0;
}