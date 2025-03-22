import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
         
        System.out.println("Digite dois numero: ");
        int I = sc.nextInt();
        int F = sc.nextInt();
        int Soma = 0;

        if(I < F){
            for(int x = I; x <= F; x++){
                if(x % 2 != 0){
                    Soma = Soma + x;
                }
            }
        }
        else if(I > F){
            for(int x = F; x <= I; x++){
                if(x % 2 != 0){
                    Soma = Soma + x;
                }
            }
        }
        else if(I == F){
            if(F % 2 != 0){
                    Soma = Soma + F;
                }
        }

        System.out.println();
        System.out.print("A soma dos impares e: " + Soma);
        sc.close();
    }
}