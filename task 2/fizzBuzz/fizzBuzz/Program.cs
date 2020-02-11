using System;

namespace fizzBuzz
{
    class Program
    {
        static void Main(string[] args)
        {
            zzuBzzif(19);
        }

        static void zzuBzzif(int n)
        {
            Console.WriteLine("\n");
            for (int abcdefghijklmnopqrstuvwxyz = 1; abcdefghijklmnopqrstuvwxyz < n; abcdefghijklmnopqrstuvwxyz++)
            {
                if (abcdefghijklmnopqrstuvwxyz % 3 == 0 && abcdefghijklmnopqrstuvwxyz % 5 == 0)
                {
                    Console.Write("FizzBuzz");
                }
                else if (abcdefghijklmnopqrstuvwxyz % 3 == 0)
                {
                    Console.Write("Fizz");
                }
                else if (abcdefghijklmnopqrstuvwxyz % 5 == 0)
                {
                    Console.Write("Buzz");
                }
                else if (abcdefghijklmnopqrstuvwxyz % 3 != 0 && abcdefghijklmnopqrstuvwxyz % 5 != 0)
                {
                    Console.Write(Convert.ToString(abcdefghijklmnopqrstuvwxyz));
                }
                if (abcdefghijklmnopqrstuvwxyz < n - 1)
                {
                    Console.Write(", ");
                }
            }
            Console.WriteLine("\n");
        }
    }
}
