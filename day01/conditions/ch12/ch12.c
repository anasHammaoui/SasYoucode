#include <stdio.h>

int main() {
    char instat1[20] = "03:55:20",instant2[20] = "03:55:36";
    int h1,h2,m1,m2,s1,s2;
    sscanf(instat1,"%d:%d:%d",&h1,&m1,&s1);
    sscanf(instant2,"%d:%d:%d",&h2,&m2,&s2);
    if (h1 > h2) {
        // printf("Le premier instant vient avant le deuxieme\n");
      printf("Le deuxieme instant vient avant le premier");
    } else if (h2 > h1) {
        printf("Le premier instant vient avant le deuxieme\n");
    } else if (h1 == h2 && m1 > m2) {
       printf("Le deuxieme instant vient avant le premier");
    } else if (h1 == h2 && m2 > m1) {
          printf("Le premier instant vient avant le deuxieme\n");
    } else if (h1 == h2 && m1 == m2 && s1 > s2) {
      printf("Le deuxieme instant vient avant le premier");
    }  else if (h1 == h2 && m1 == m2 && s2 > s1) {
       printf("Le premier instant vient avant le deuxieme\n");
    } else if (h1 == h2 && m1 == m2 && s2 == s1) {
        printf("Il s'agit du meme instant");
    }
}