import java.util.Scanner;

public class Nim_Array {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan NIM: ");
        String nim = input.nextLine();

        int n = nim.length();
        int[] digits = new int[n]; 

        
        for (int i = 0; i < n; i++) {
            digits[i] = Character.getNumericValue(nim.charAt(i));
        }

        int total = 0;
        int maks = digits[0];
        int min = digits[0];

        
        for (int i = 0; i < n; i++) {
            total += digits[i];

            if (digits[i] > maks) maks = digits[i];
            if (digits[i] < min) min = digits[i];
        }

        double rata = (double) total / n;

    
        System.out.print("Array digit: ");
        for (int x : digits) {
            System.out.print(x + " ");
        }

        System.out.println("\nTotal digit = " + total);
        System.out.println("Digit maksimum = " + maks);
        System.out.println("Digit