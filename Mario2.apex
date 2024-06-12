public class Mario2{
    public static main (){
        Intereger  vezes = 5;
        for(Intereger i = 0; i<vezes; i++){
            String espacos = repeat(' ' , vezes - i);
            String estrelas = repeat('#', i)
            System.debug(espacos + estrelas + ' ' + estrelas);

        }
    }
    public static String repeat(String s, Intereger n){
        String resultado = '';
        for(Intereger i = 0; i< n; i++){
            resultado += s;

        }
        return resultado;
    }
}