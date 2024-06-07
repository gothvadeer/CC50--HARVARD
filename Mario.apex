public class Mario{
    public static void main(){
        integer vezes = 5;

        integer i = 1;

        do{
            String estrela = '';
            for(Integer j = 0; j <= i; j++){
                estrela += "#";

            }
            System.debug(estrela);
            i++;
        }while(i <= vezes);
    }
}