import java.util.Arrays;
class repeatedno{
    public static void main(String[] args) {
    int flag=0;
    int[] num = { 1, 2,0};
    Arrays.sort(num);

    for(int i = 1; i < num.length; i++) {
    if(num[i] == num[i - 1]) {
        System.out.println("numbers repeated " + num[i]);
        
    }
    else flag=1;
    }
    if(flag==1) System.out.println("no number is repeated");
}
}

     
