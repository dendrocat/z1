#include "Header.h"

int my_strlen(char* str) {
    int len = 0;
    char* p_s = str;
    while (*p_s++) {
        ++len;
    }
    return len;
}

void my_strcpy(char* dest, char* s) {
    char* p_s = s;
    char* p_dest = dest;
    while (*p_s) {
        *p_dest++ = *p_s++;
        //эквивалентно коду:
        // *p_dest = *p_s;
        // p_dest++; p_s++;
    }
    *p_dest = '\0';
}

void my_strcat(char* dest, char* s) {
    //переносим указатель на длину слова dest для переноса символов
    char* p_dest = dest + my_strlen(dest);
    char* p_s = s;
    while (*p_s) {
        *p_dest++ = *p_s++;
    }
    *p_dest = '\0';
}

int my_strcmp(char* s1, char* s2) {
    int l1 = my_strlen(s1), l2 = my_strlen(s2);
    if (l1 > l2) return 1;
    else if (l1 < l2) return -1;
    else {
        char* p_s1 = s1;
        char* p_s2 = s2;
        while (*p_s1) {
            if (*p_s1 > *p_s2) return 1;
            else if (*p_s1 < *p_s2) return -1;
            p_s1++; p_s2++;
        }
        return 0;
    }
}