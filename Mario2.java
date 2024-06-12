import java.util.Scanner;

public class Mario2{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("quantas vezes?: ");
        int vezes = scanner.nextInt();
        for(int i = 0; i< vezes+1; i++){
            String espacos = " ".repeat(vezes - i);
            String estrela = "#".repeat(i);
            System.out.println(espacos + estrela + " " + estrela);
        }
    }
}