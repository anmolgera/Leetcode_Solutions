class Solution {
    TreeMap<Integer, Integer> map;
    int[][] arrays;
    int sum;
    Random rnd= new Random();
    
    public Solution(int[][] rects) {
        arrays = rects;
        map = new TreeMap<>();
        sum = 0;
        
        for(int i = 0; i < rects.length; i++) {
            int[] rect = rects[i];
						
            // the right part means the number of points can be picked in this rectangle
            sum += (rect[2] - rect[0] + 1) * (rect[3] - rect[1] + 1);
			
            map.put(sum, i);
        }
    }
    
    public int[] pick() {
        // nextInt(sum) returns a num in [0, sum -1]. After added by 1, it becomes [1, sum]
        int c = map.ceilingKey( rnd.nextInt(sum) + 1);
        
        return pickInRect(arrays[map.get(c)]);
    }
    
    private int[] pickInRect(int[] rect) {
        int left = rect[0], right = rect[2], bot = rect[1], top = rect[3];
        
        return new int[]{left + rnd.nextInt(right - left + 1), bot + rnd.nextInt(top - bot + 1) };
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(rects);
 * int[] param_1 = obj.pick();
 */