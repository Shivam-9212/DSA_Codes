public class is_sorted {
    public static boolean check(int arr[], int index) {
        if(index == arr.length-1){
            return true;
        }
        if(arr[index+1] > arr[index]){
            return check(arr, index+1);
        }
        else{
            return false;
        }
    }
    public static void main(String args[]) {
        int arr[] = {1,2,30,4};
        System.out.println(check(arr, 0));
    }
}
