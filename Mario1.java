import java.util.Scanner;

public class Mario1{
    public static void main(String[]args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Quantos blocos de pirÂmide vai querer fazer?: ");
        int vezes = scanner.nextInt();
        int i = 1;
      do { 
          String estrela = "#".repeat(i);
          System.out.println(estrela);
          i++;
      } while (i <= vezes);
      scanner.close();
    }
}

