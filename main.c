
#include <stdio.h> 

#include "encrypt.h"
#include "checksum.h"

int main()
{

    char s[] = "Скажи друг и проходи";
    encrypt (s);
    printf("зaшидровано в '%s' \n", s);
    printf("KOHTрольная сумма %i\n", checksum(s));
    encrypt (s);
    printf("Расшифровано обратно в '%s'\n", s); 
    printf("Kонтрольная сумма %i\n", checksum (s));
    return 0;
}