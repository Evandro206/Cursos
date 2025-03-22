using System;
using System.Globalization;

class Programa 
{
  static void Main() 
  {
    CultureInfo CI = CultureInfo.InvariantCulture; 
    
    string nome;
    int idade;
    char sexo;
    double salario;
    
    Console.WriteLine("Digite seu nome: ");
    nome = Console.ReadLine();
    Console.WriteLine("Digite sua idade: ");
    idade = int.Parse(Console.ReadLine());
    Console.WriteLine("Digite seu genero:(m/f) ");
    sexo = char.Parse(Console.ReadLine());
    Console.WriteLine("Digite seu salário:");
    salario = double.Parse(Console.ReadLine(), CI);

    Console.WriteLine("Nome: " + nome + " Idade: " + idade + " Genero: " + sexo + " Salário: " + salario);
  }
}