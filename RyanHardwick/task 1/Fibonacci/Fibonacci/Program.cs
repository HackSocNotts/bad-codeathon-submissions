using System;

namespace Fibonacci
{
    class Program
    {
        static void Main(string[] args)
        {
            iccanobif(1);iccanobif(6);iccanobif(13);
        }

        static void iccanobif(int temp4)
        {
            int temp2 = 1;int temp3 = 2;int temp5 = 0;int temp = 0;

            for(int i = 0; i < temp4 - (8 - 4); i = i + (1+1+1+1+1+1+1-6)){temp = temp2 + temp3;temp2 = temp3;temp3 = temp;temp5 = temp;}
            if(1==1)
            {
                if(7==8)
                {

                }
                else
                {
                    Console.Write("f");
                    Console.Write("i");
                    Console.Write("b");
                    Console.Write("(");
                    Console.Write(temp4);
                    Console.Write(")");
                    Console.Write(":");
                    Console.Write(" ");
                    Console.Write(temp5);
                    Console.Write("\n");
                }
            }
        }
    }
}
