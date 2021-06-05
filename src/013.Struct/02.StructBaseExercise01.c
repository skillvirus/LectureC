#include <stdio.h>

char copy_str(char *dest, char *src);

struct Books {
    char name[30]; //책제목
    char auth[30]; //저자
    char publ[30]; //출판사
    int borrowed; //대여상태
};

int main() {
    struct Books Harry_Porter;
    
    copy_str(Harry_Porter.name, "Harry Porter");
    copy_str(Harry_Porter.auth, "J.K. Rolling");
    copy_str(Harry_Porter.publ, "Scholasitc");
    
    printf("책제목 : %s \n", Harry_Porter.name);
    printf("저자   : %s \n", Harry_Porter.auth);
    printf("출판사 : %s \n", Harry_Porter.publ);
    
    return 0;
}

char copy_str(char *dest, char *src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    return 1;
}