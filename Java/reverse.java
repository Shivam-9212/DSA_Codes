public class reverse {
    public static void reversing(String str, int index) {
        if(index == 0){
        System.out.print(str.charAt(index));
        return;
        }
        else{
            System.out.print(str.charAt(index));
            reversing(str, index-1);
        }
    }
    public static void main(String args[]) {
        reversing("HELLO",4);
    }
}
