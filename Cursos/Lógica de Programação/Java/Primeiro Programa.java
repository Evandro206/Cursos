import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    
	    String nome1, nome2;
	    double salario1, salario2;
	    int idade1, idade2;
	    char sexo1, sexo2;
	    
	    System.out.print("Digite o nome da primeira pessoa: ");
	    nome1 = sc.nextLine();
	    System.out.printf("Digite o salario da primeira pessoa: ");
	    salario1 = sc.nextDouble();
	    System.out.print("Digite a idade da primeira pessoa: ");
	    idade1 = sc.nextInt();
	    System.out.print("Digite o sexo da primeira pessoa: ");
	    sexo1 = sc.next().charAt(0);
	    
	    System.out.print("Digite o nome da segunda pessoa: ");
	    sc.nextLine();
	    nome2 = sc.nextLine();
	    System.out.print("Digite o salario da segunda pessoa: ");
	    salario2 = sc.nextDouble();
	    System.out.print("Digite a idade da segunda pessoa: ");
	    idade2 = sc.nextInt();
	    System.out.print("Digite o sexo da segunda pessoa: ");
	    sexo2 = sc.next().charAt(0);
	    
	    System.out.printf("Nome: %s Idade: %d Salario: %.2f Sexo: %c \n", nome1, idade1, salario1, sexo1);
	    System.out.printf("Nome: %s Idade: %d Salario: %.2f Sexo: %c", nome2, idade2, salario2, sexo2);
	    
	    sc.close();
	}
}
