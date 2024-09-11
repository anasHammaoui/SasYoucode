#include <stdio.h>

int main() {
    float revAnn, deductions;
    int satusFis;
    printf("Revenu annuel (en euros):");
    scanf("%f",&revAnn);
    printf("Status fiscal: \n");
    printf("1.Pour celibataire\n");
    printf("2.Pour marie\n");
    printf("3.Pour chef de famille\n");
    scanf("%d",&satusFis);
    float impot;
    if (satusFis == 1) {
        deductions = revAnn - 1000;
    } else if (satusFis == 2) {
      deductions = revAnn - 2000;
    } else if (satusFis == 3) {
        deductions = revAnn- 3000;
    }
    if (deductions < 20000) {
        impot = deductions * 0.05;
    } else if (deductions > 20000 && deductions <= 50000) {
        impot = deductions * 0.1;
    } else if (deductions > 50000){
       impot = deductions* 0.2;
    }
    printf("Les impots sont: %.2f", impot);
    
}