import java.util.Scanner;
public class angka {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Masukkan angka pertama: ");
        int a = sc.nextInt();
        System.out.print("Masukkan angka kedua: ");
        int b = sc.nextInt();

        if (a > b) {
            System.out.println(a + " : Angka pertama lebih besar dari angka kedua : " + b);
        } else if (a < b) {
            System.out.println(a + " : Angka pertama lebih kecil dari angka kedua : " + b);
        } else {
            System.out.println(" : Kedua angka sama : ");
        }
        System.out.println("Apakah Keduanya Sama? " + (a == b));
    }
}