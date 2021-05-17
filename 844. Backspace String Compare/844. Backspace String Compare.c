//844. Backspace String Compare

bool backspaceCompare(char * s, char * t){
    int i, j, k;
    int found = 1;

    for (i = 0; i < strlen(s); i++) {
        // printf("i: %d\n", i);
        if (s[i] == '#') {
            if (i == 0) {
                for (j = i; j + 1 < strlen(s); j++) {
                    s[j] = s[j + 1];
                }
            }
            else {
                for (j = i - 1; j + 2 < strlen(s); j++) {
                    s[j] = s[j + 2];
                    //printf("%d: %c <- %d: %c\n", j, t[j], j + 2, t[j + 2]);
                   // printf("j: %d\n", j);
                }
            }
            s[j] = '\0';
            //printf("t: %s\n", t);
        }
        for (k = 0; k < strlen(s); k++) {
            if (s[k] == '#') {
                i = k - 1;
                break;
            }
        }
    }
   printf("s: %s\n", s);
   for (i = 0; i < strlen(t); i++) {
      // printf("i: %d\n", i);
       if (t[i] == '#') {
           if (i == 0) {
               for (j = i; j + 1 < strlen(t); j++) {
                   t[j] = t[j + 1];
               }
           }
           else {
               for (j = i - 1; j + 2 < strlen(t); j++) {
                   t[j] = t[j + 2];
                   //printf("%d: %c <- %d: %c\n", j, t[j], j + 2, t[j + 2]);
                  // printf("j: %d\n", j);
               }
           }
           t[j] = '\0';
           //printf("t: %s\n", t);
       }
       for (k = 0; k < strlen(t); k++) {
           if (t[k] == '#') {
               i = k - 1;
               break;
           }
       }   
   }
   printf("t: %s\n", t);
   if (strlen(s) != strlen(t)) {
       printf("false");
       return false;
   }
    for (i = 0; i < strlen(t); i++) {
        if (s[i] != t[i]) {
            printf("false");
            return false;
        }
    }
    printf("true");
    return true;
}