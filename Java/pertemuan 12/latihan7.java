public class latihan7 {
    public static void main(String[] args) {
        System.out.println("Fungsi = Sub Program Mengembalikan Nilai");

        int x = pertambahan(1, 2);
        System.out.println("1. Pertambahan 2 Variabel = " + x);

        int y = pertambahan(1, 2, 3);
        System.out.println("2. Pertambahan 3 Variabel = " + y);

        int z = pertambahan(1, 2, 3, 4);
        System.out.println("3. Pertambahan 4 Variabel = " + z);

    }

    public static int pertambahan(int a, int b) {
        return a + b;
    }

    public static int pertambahan(int a, int b, int c) {
        return a + b + c;
    }

    public static int pertambahan(int a, int b, int c, int d) {
        return a + b + c + d;
    }
}