 #include <stdio.h>
    int main(){
        int z;

    printf("Introdu ziua ");
    scanf("%d",&z);


 switch(365%z) {
      case 1 :  printf("Aceasta zi va pica intr-o zi de luni" );
                break;
      case 2 :  printf("Aceasta zi va pica intr-o zi de marti\n");
                break;
      case 3 :  printf("Aceasta zi va pica intr-o zi de miercuri\n" );
                break;
      case 4 :  printf("Aceasta zi va pica intr-o zi de joi\n" );
                break;
      case 5 :  printf("Aceasta zi va pica intr-o zi de vineri\n" );
                break;
      case 6 :  printf("Aceasta zi va pica intr-o zi de sambata");
                break;
      case 7 :  printf("Aceasta zi va pica intr-o zi de duminica");

   }



    }
