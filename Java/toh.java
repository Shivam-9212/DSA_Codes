public class toh{
    public static void TOH(int n, String Source, String Helper, String Destination){
        if(n == 1){
            System.out.println("Transfer 1 from "+Source+" to "+Destination);
        }
        else{
            TOH(n-1, Source, Destination, Helper);
            System.out.println("Transfer "+n+" from "+Source+" to "+Destination);
            TOH(n-1, Helper, Source, Destination);
        }
    } 
    public static void main(String args[]) {
        int n = 3;
        TOH(n, "S", "H", "D");
    }
}