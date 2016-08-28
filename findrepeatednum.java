import java.util.Arrays;
class repeatedno{
    public static void main(String[] args) {
    int[] num = { 1, 5, 23, 2, 1, 6, 3, 1, 8, 12, 3,0,0};
    Arrays.sort(num);

    for(int i = 1; i < num.length; i++) {
    if(num[i] == num[i - 1]) {
        System.out.println("numbers repeated " + num[i]);
    }
}
}
}
