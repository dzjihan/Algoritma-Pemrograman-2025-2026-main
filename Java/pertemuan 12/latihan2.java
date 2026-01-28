public class latihan2 {
    public static void main(String[] args) {
        MetodePoin(255.7);
    }

    public static void MetodePoin(double poin) {
        if (poin >= 202.5) {
            System.out.println("--Poin Yang Keluan--");
            System.out.println("Poin : Pertama");
        } else if (poin >= 122.4) {
            System.out.println("Poin : Kedua");
        } else {
            System.out.println("Poin : Ketiga");
        }
    }
}