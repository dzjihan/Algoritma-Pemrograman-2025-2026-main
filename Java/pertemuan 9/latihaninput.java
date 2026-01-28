import java.util.Scanner;

public class Latihaninput {
public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Masukkan Nama Barang : ");
    String namaBarang = scanner.nextLine();

    System.out.print("Masukan Harga Barang : ");
    Float hargaBarang = scanner.nextFloat();

    System.out.print("Masukan Jumlah Barang : ");
    int jumlahBarang = scanner.nextInt();

    Float total = hargaBarang * jumlahBarang;

    Float diskon;

    if (total > 51300) {
        diskon = total * 0.03f;
    } else {
        diskon = 0f;
    }

    float totalBayar = total - diskon;

    System.out.println("===== Struk Pembayaran =====");
    System.out.println("Nama Barang : " + namaBarang);
    System.out.println("Harga Barang : " + hargaBarang);
    System.out.println("Jumlah Barang : " + jumlahBarang);
    System.out.println("Total Harga : " + total);
    System.out.println("Diskon : " + diskon);
    System.out.println("Total Bayar : " + totalBayar);
    System.out.println("============================");



    scanner.close();
}  
}