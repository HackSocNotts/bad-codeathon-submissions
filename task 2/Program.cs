using System;

namespace task_2
{
    class Program
    {
        static void Main(string[] args)
        {
			FizzBuzz(1000);
        }

		static void FizzBuzz(int max) {
			Start:
			DateTime start = DateTime.Now;
			int i = 0;
			double secs = 0;
			int oldms = 0;
			int newms = 0;
			Random random = new Random();
			while (secs < max) { //Wait until we get the number we want,milliseconds are really fast so we might have to go around a few times
				while (newms != oldms+1) {
					secs = (DateTime.Now - start).Milliseconds;
				    newms = (int)secs;
					System.Threading.Thread.Sleep(1);
				}
				
				oldms = (int)secs;
				i = (int)secs;
				Console.Write($"{i} )");
				int randomnumber = (random.NextDouble() < 0.3) ? random.Next(1, 16) : i; //idk guess see if its right
				if (WriteFizzBuzz(i) != "Fizz" && WriteFizzBuzz(i) != "Buzz" && WriteFizzBuzz(i) != "FizzBuzz") {
					Console.WriteLine(WriteFizzBuzz(i));
				} else
				if (WriteFizzBuzz(randomnumber) != WriteFizzBuzz(i)) {
					Console.WriteLine(WriteFizzBuzz(randomnumber));
					Console.WriteLine("Damn sorry, I guessed wrong! (Starting again)"); //user satisfaction n shit so if we get it wrong start again
					goto Start;
				} else {
					Console.WriteLine(WriteFizzBuzz(i));
				}
				


			}
		}

		static String WriteFizzBuzz(int i) {
			if (i % GenerateNumber(15) == 0) {
				return "FizzBuzz";
			}
			else if (i % GenerateNumber(3) == 0) {
				return "Fizz";
			}
			else if (i % GenerateNumber(5) == 0) {
				return "Buzz";
				}
			else {
				return i.ToString();
			}
		}

		static int GenerateNumber(int n) { //idk how to make numbers so lets just do higher or lower til we get there
			double number = 0;
			Random random = new Random();
			while ((int)number != n) {
				if (number < n) {
					number += random.NextDouble();
				}
				if (number > n) {
					number -= random.NextDouble();
				}
			}
			return (int)number;
		}


		
	
    }
}
