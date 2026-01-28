public class latihan1 {
    public static void main(String[] args) { 
        System.out.println("Prosedur = Sub Program yang TIDAK Mengembalikan nilai");
        perkalian(5, 10);
        perkalian(2, 3);
        perkalian(6, 8);

        pembagian(20, 5);
        pembagian(100, 10);
        pembagian(66, 11);
    }
    public static void perkalian(int a, int b){  
        System.out.println("Hasil Prosedur Perkalian = " + (a * b));
    }
    public static void pembagian(int a, int b) {
        System.out.print("\nHasil Prosedur Pembagian = " + (a / b));
    }
}