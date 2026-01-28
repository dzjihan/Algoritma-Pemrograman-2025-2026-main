import java.util.Scanner;

public class atm {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String nama, benar;
        int saldoAwal = 0, inputSaldo, menu, tarikTunai, setorTunai, transfer;

        System.out.println("=====================================================");
        System.out.print("Masukkan Nama Anda: ");
        nama = input.nextLine();

        System.out.print("Apakah Anda Yakin Ingin Melanjutkan Transaksi? (Y/N): ");
        benar = input.nextLine();

        System.out.println("=====================================================");

        if (benar.equalsIgnoreCase("Y")) {
            System.out.println("=====================================================");
            System.out.println("Selamat Datang Di ATM, " + nama);
            System.out.println("Saldo Anda Saat Ini: Rp " + saldoAwal);
            System.out.println("=====================================================");
        } else {
            System.out.println("=====================================================");
            System.out.println("          Terima Kasih Atas Kunjungan Anda");
            System.out.println("=====================================================");
            return;
        }

        System.out.print("Masukkan Saldo : ");
        inputSaldo = input.nextInt();

        System.out.println("=====================================================");
        System.out.println("NAMA ANDA              : " + nama);
        System.out.println("SALDO ANDA SEKARANG    : Rp " + inputSaldo);
        System.out.println("=====================================================");
        System.out.println();

        System.out.println("===================== MENU ATM ======================");
        System.out.println("1. CEK SALDO");
        System.out.println("2. TARIK TUNAI");
        System.out.println("3. SETOR TUNAI");
        System.out.println("4. TRANSFER");
        System.out.println("5. KELUAR");
        System.out.println("=====================================================");

        System.out.print("Pilih Menu : ");
        menu = input.nextInt();

        switch (menu) {
            case 1:
                System.out.println("=====================================================");
                System.out.println("Saldo Anda Saat Ini: Rp " + inputSaldo);
                System.out.println("=====================================================");
                break;

            case 2:
                System.out.println("Saldo Anda Saat Ini: Rp " + inputSaldo);
                System.out.print("Masukkan Jumlah Tarik Tunai: ");
                tarikTunai = input.nextInt();
                System.out.println("=====================================================");
                System.out.println("Saldo Anda Saat Ini: Rp " + (inputSaldo - tarikTunai));
                System.out.println("=====================================================");
                break;

            case 3:
                System.out.println("Saldo Anda Saat Ini: Rp " + inputSaldo);
                System.out.print("Masukkan Jumlah Setor Tunai: ");
                setorTunai = input.nextInt();
                System.out.println("=====================================================");
                System.out.println("Saldo Anda Saat Ini: Rp " + (inputSaldo + setorTunai));
                System.out.println("=====================================================");
                break;

            case 4:
                System.out.println("Saldo Anda Saat Ini: Rp " + inputSaldo);
                System.out.print("Masukkan Jumlah Transfer: ");
                transfer = input.nextInt();
                System.out.println("=====================================================");
                System.out.println("Saldo Anda Saat Ini: Rp " + (inputSaldo - transfer));
                System.out.println("=====================================================");
                break;

            case 5:
                System.out.println("=====================================================");
                System.out.println("          Terima Kasih Atas Kunjungan Anda");
                System.out.println("=====================================================");
                break;

            default:
                System.out.println("=====================================================");
                System.out.println("Menu Tidak Tersedia");
                System.out.println("=====================================================");
                break;
        }
    }
}