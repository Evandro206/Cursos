import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);

        System.out.println("Quantos numeros vc vai digitar? ");
        int N = sc.nextInt();

        double[] vet = new double[N];

        for(int i = 0; i < N; i++){
            System.out.println("Digite um numero: ");
            vet[i] = sc.nextDouble();
        }

        System.out.println();
        System.out.println("Numeros Digitados: "); 
        for(int i = 0; i < N; i++){
            System.out.println(String.format("%.1f", vet[i]));
        }
        sc.close();
    }
}   