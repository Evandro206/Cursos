import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Quantas linhas vc quer? ");
        int N = sc.nextInt();
        System.out.println("Quantas colunas vc quer? ");
        int J = sc.nextInt();

        int[][] mat = new int[N][J];

        for (int i = 0; i < N; i++) {
            for (int o = 0; o < J; o++) {
                System.out.println("Digite um numero: ");
                mat[i][o] = sc.nextInt();
            }
            System.out.println();
        }

        System.out.println();
        System.out.println("Numeros Digitados: ");
        for (int i = 0; i < N; i++) {
            for (int o = 0; o < J; o++) {
                System.out.println(mat[i][o]);
            }
        }
        sc.close();
    }
}