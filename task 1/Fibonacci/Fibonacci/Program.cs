using System;

namespace Fibonacci
{
    class Program
    {
        static void Main(string[] args)
        {
            iccanobif(1);
            iccanobif(6);
            iccanobif(13);
        }

        static void iccanobif(int temp4)
        {
            int temp2 = 1;int temp3 = 2;int temp5 = 0;int temp = 0;

            for(int i = 0; i < temp4 - 4; i++)
            {
                temp = temp2 + temp3;temp2 = temp3;temp3 = temp;temp5 = temp;
            }
            Console.WriteLine("fib(" + temp4 + "): " + temp5);
        }
    }
}
