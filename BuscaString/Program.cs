using System;

class Program
{
    static int CountOccurrences(string s, char c)
    {
        int count = 0;

        // Percorre a string com um laço for
        for (int i = 0; i < s.Length; i++)
        {
            // Se o caractere atual for igual ao buscado
            if (char.ToLower(s[i]) == char.ToLower(c))
            {
                count++; 
            }
        }

        return count; 
    }

    static void Main(string[] args)
    {
        string s;
        char x;


        Console.Write("Informe uma string: ");
        s = Console.ReadLine();

        Console.Write("Informe o caractere a ser procurado: ");
        x = char.Parse(Console.ReadLine());

        // Chamada da função para contar quantas vezes o caractere aparece
        int count = CountOccurrences(s, x);

        // Verifica o resultado da função
        if (count > 0)
        {
            Console.WriteLine($"SIM, o caractere '{x}' aparece {count} vezes.");
        }
        else
        {
            Console.WriteLine($"NAO, o caractere '{x}' nao aparece na string.");
        }
    }
}
