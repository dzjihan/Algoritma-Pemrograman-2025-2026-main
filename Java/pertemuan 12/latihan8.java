public class latihan8 {
    public static void main(String[] args) {
        int a = 11;
        int b = 6;
        int c = FungsiMinimal(a, b);
        System.out.println("Nilai Minimum = " + c);
    }

    public static int FungsiMinimal(int angka1, int angka2) {
        int min;
        if (angka1 > angka2)
            min = angka2;
        else
            min = angka1;
        return min;
    }
}