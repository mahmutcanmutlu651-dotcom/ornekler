// ekrana 5 kere "Merhaba, Dunya!" yazdiran program
#include <stdio.h>
/*int main() {
    for (int i = 0; i < 5; i++) {
        printf("Merhaba, Dunya!\n");
    }
    return 0;
}*/
/*int main() {
    int i = 0;
    while (i < 5) {
        printf("Merhaba, Dunya!\n");
        i++;
    }
    return 0;
}*/ 
int main() {
    int i = 0;
    do {
        printf("Merhaba, Dunya!\n");
        i++;
    } while (i < 5);
    return 0;
}
