class Max{
    public static int findMax(int[] arr){
        int max =Integer.MIN_VALUE;
        int a;
        for(int i=0;i<arr.length;i++){
            a = arr[i];
             max = Math.max(a,max);  
        }
        return max;
    }

    public static void main(String args[]){
        int[] arr = {1,2,3,4,5,6};
        System.out.println(findMax(arr));
    }
}

