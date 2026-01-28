import java.util.*;

public class array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Masukkan NIM: ");
        String nim = sc.nextLine();

        ArrayList<Integer> digit = new ArrayList<>();
        for (char c : nim.toCharArray()) digit.add(Character.getNumericValue(c));

        int total = 0;
        for (int d : digit) total += d;

        int maks = Collections.max(digit);
        int minim = Collections.min(digit);

        double rata = (double) total / digit.size();

        ArrayList<Integer> rev = new ArrayList<>();
        for (int i = digit.size() - 1; i >= 0; i--) rev.add(digit.get(i));

        System.out.print("digit     [");
        for (int i = 0; i < digit.size(); i++) {
            System.out.print(digit.get(i));
            if (i < digit.size() - 1) System.out.print(", ");
        }
        System.out.println("]");

        System.out.println("total     " + total);
        System.out.println("max       " + maks);
        System.out.println("min       " + minim);
        System.out.println("rata-rata " + rata);

        System.out.print("reverse   [");
        for (int i = 0; i < rev.size(); i++) {
            System.out.print(rev.get(i));
            if (i < rev.size() - 1) System.out.print(", ");
        }
        System.out.println("]");
    }
}