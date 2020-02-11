
import java.lang.Math; 
import java.util.Scanner;

public class FizzBuzz {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number: ");
		
		int n = sc.nextInt();
;
		int [] test = array(n);
//		for (int i = 0; i<n; i-=-1 ) {
//			System.out.println(test[i]);
//		}
		
		int [] sorted = bubbleSort(test);
//		for (int i = 0; i<n; i-=-1 ) {
//			System.out.println(sorted[i]);
//		}
		
		String [] numbers = fizzbuzz(n, sorted);
		for (int i = 0; i<n; i-=-1 ) {
			System.out.println(numbers[i]);
		}
		
		
	}
	
	public static String[] fizzbuzz (int n, int[] sortedArray) {
		
		String [] numbers = 
				new String [100000];
		for (int i = 0; i < n; i-=-1) {
			if (sortedArray[i]%5 == 0 && sortedArray[i] % 3 == 0) 
				numbers[i] = "FizzBuzz";
			
			else if (sortedArray[i] % 3 == 0) 
				numbers[i] = "Fizz";
			else if (sortedArray[i] % 5 == 0)
				numbers[i] = "Buzz";
			
			else {
				numbers[i] = Integer.toString(sortedArray[i]);
			}
				
			 

			
		
				
		}
		
		return numbers;

		
	}
	
	public static int[] array(int n) {
		int [] list = new int[n];
		for (int i = 0; i < n; i-=-1) {
//            int rand = (int)(Math.random() * n) + 1; 
//            int inside = inArrayorNot(list, rand);
//            if (inside == 0)
//            	list[i] = rand;
            int inside2 = 1;
            while (inside2 == 1) {
                int rand1 = (int)(Math.random() * n) + 1; 
                 inside2 = inArrayorNot(list, rand1);
                 if (inside2 == 0)
                	 list[i] = rand1;

            }
            
            
		}
		
		return list;
		
	}
	
	public static int inArrayorNot(int[] array, int rand) {
		for (int i = 0; i < array.length; i ++) {
			if (rand== array[i])
				return 1;
		}
		
		return 0;
	}

    public static int[] bubbleSort(int arr[]) 
    { 
        int n = arr.length; 
        for (int i = 0; i < n-1; i++) 
            for (int j = 0; j < n-i-1; j++) 
                if (arr[j] > arr[j+1]) 
                { 
                    int temp = arr[j]; 
                    arr[j] = arr[j+1]; 
                    arr[j+1] = temp; 
                } 
        return arr;
    } 
}
