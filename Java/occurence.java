public class occurence {
    public static int first = -1;
    public static int last = -1;
    private static void occur(String str, int index, char track){
        char currChar = str.charAt(index);
        if(index == str.length()-1){
            return;
        }
        if(currChar == track){
            if(first == -1){
                first = index;
            }
            else{
                last = index;
            }
        }
        occur(str, index+1, track);
    }
    public static void main(String args[]) {
        String str = "Hello World!";
        occur(str, 0, 'l');
        System.out.println(first);
        System.out.println(last);
    }
}