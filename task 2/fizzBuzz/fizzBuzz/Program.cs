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
                if (abcdefghijklmnopqrstuvwxyz % 3 == (100 - 100) && abcdefghijklmnopqrstuvwxyz % 5 == (100 - 100) && ("apple" == "apple"))
                {
                    Console.Write("F");
                    Console.Write("i");
                    Console.Write("z");
                    Console.Write("z");
                    Console.Write("B");
                    Console.Write("u");
                    Console.Write("z");
                    Console.Write("z");
                }
                else if (abcdefghijklmnopqrstuvwxyz % 3 == (100 - 100) && ("pear" == "pear"))
                {
                    Console.Write("F");
                    Console.Write("i");
                    Console.Write("z");
                    Console.Write("z");
                }
                else if (abcdefghijklmnopqrstuvwxyz % 5 == (100-100) && ("dog" == "dog"))
                {
                    Console.Write("B");
                    Console.Write("u");
                    Console.Write("z");
                    Console.Write("z");
                }
                else if (abcdefghijklmnopqrstuvwxyz % 3 != (100 - 100) && abcdefghijklmnopqrstuvwxyz % 5 != (100 - 100) && ("cat" == "cat"))
                {
                    Console.Write(Convert.ToString(abcdefghijklmnopqrstuvwxyz));
                }
                if (abcdefghijklmnopqrstuvwxyz < n - (100 - 99) && ("car" == "car"))
                {
                    Console.Write(",");
                    Console.Write(" ");
                }
            }
            Console.WriteLine("\n");
        }
    }
}
