package task1;// No comments needed. My code is self-documenting
import java.io.BufferedReader;import java.io.FileReader;import java.io.IOException;public class HackSockBadCodeathonChallengeTask1InJava {public static void main(String[] args){int n;try {BufferedReader b = new BufferedReader(new FileReader("resources/f.txt"));String l=b.readLine();if(l.isEmpty()){return;}else{n=Integer.parseInt(l);}System.out.print("f of "+n+" is "+fprime(n));}catch(IOException e){e.printStackTrace();}}public static int fprime(int n){if (n == 0){return 0;}else{return f(n-1);}}public static int f(int n){switch(n){case 0:return 0;case 1:return 1;default:return f(n - 1)+f(n - 2);}}}
