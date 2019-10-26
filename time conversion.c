#include <stdio.h>

int main() {
    int hh, mm, ss;
    char tt[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, tt);
    
    if(strcmp(tt, "PM") == 0 && hh != 12) hh += 12;
    if(strcmp(tt, "AM") == 0 && hh == 12) hh = 0;
    printf("%02d:%02d:%02d", hh, mm, ss);
    return 0;
}
