import java.util.Arrays;
class repeatedno{
    public static void main(String[] args) {
    int flag=1;
    int[] num = { 2,5,0,2,5,3,0};
    Arrays.sort(num);

    for(int i = 1; i < num.length; i++) {
    if(num[i] == num[i - 1]) {
        System.out.println("numbers repeated " + num[i]);
        flag=0;
    }
    
    }
    if(flag==1) System.out.println("no number is repeated");
}
}
