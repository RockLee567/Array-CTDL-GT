public class ArrayFuntion {
    public int removeDulicates( int[] nums ){

        int sizeNums = nums.length ;
        int k = 0 ;
        nums[k] = nums[0] ;
        for( int i = 0 ; i < sizeNums ; i++ ){
            if( nums[k] != nums[i]  ) {
                k++;
                nums[k] = nums[i];
            }
        }
        return k + 1 ;

        /*
        int i=0;
        int count =1;
        for(int j=1;j<nums.length;j++){
            if(nums[i] == nums[j]) 
                continue;
            else
                nums[++i] = nums[j];
        }
        return i+1;
        */
    }

    public static void main(String[] args) {
        int[] nums = { 0,0,1,1,1 , 7 , 2 , 2 ,3 , 3 } ;
        ArrayFuntion aB = new ArrayFuntion() ;
        int sizeA = aB.removeDulicates( nums )  ;
        System.out.println(  sizeA   ) ;
        System.out.println( sizeA );
        for( int i = 0 ;  i < sizeA ; i++ ){
            System.out.print( nums[i] + " " );
        }
    }

}