 // selectioner le jour
    char jour[10];
    int check = 0;
    scanf("%s",&jour);
    for (int i = 0; i < 7; i++) {
        if (strcmp(table[i], jour) == 0) {
            check = 1;
        }
        if (check = 1) {
            printf("%s, ",table[i]);
        }
    }