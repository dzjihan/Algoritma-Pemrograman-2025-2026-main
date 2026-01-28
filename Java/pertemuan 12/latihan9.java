public class latihan9 {
    public static void main(String[] args) {
        int a = 11;
        int b = 6;
        double c = 7.3;
        double d = 9.4;

        int hasil1 = FungsHMinimal(a, b);
        double hasil2 = FungsHMinimal(c, d);

        System.out.println("Wild! Minimal = " + hasil1);
        System.out.println("Wild! Minimal = " + hasil2);
    }

    // integer
    public static int FungsHMinimal(int a1, int a2) {
        int min;
        if (a1 > a2)
            min = a2;
        else
            min = a1;

        return min;
    }

    // double
    public static double FungsHMinimal(double a1, double a2) {
        double min;
        if (a1 > a2)
            min = a2;
        else
            min = a1;

        return min;
    }
}