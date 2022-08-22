#include <stdio.h>

/*
登場する関数
fopen
fclose
fprintf
fscanf
<binary files>
fwrite
fread
*/

int main(void)
{
    int buf;
    FILE *f;
    f = fopen("test.txt", "wb");
    buf = 100;
    fwrite(&buf, sizeof(buf), 1, f);
    fclose(f);
    return 0;
}