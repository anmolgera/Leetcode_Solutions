class Solution {
 public List<List<Integer>> findWinners(int[][] arr) {
        List<Integer> [] graph = new ArrayList[1000_01];
        
        // loser <--- winner
        
        for(int i=0;i<arr.length;i++)
        {
            int win = arr[i][0];
            int loser = arr[i][1];
            if(graph[loser]==null) 
            {
                graph[loser] = new ArrayList<>();
                
            }
            if(graph[win]==null)
            {
                graph[win] = new ArrayList<>();
            }
            graph[loser].add(win);
            
            
            
        }
        List<Integer> winner = new ArrayList<>();
        List<Integer> loss = new ArrayList<>();
		// if the size of loser is 0 this means this guy has not lost any match
        for(int i=0;i<graph.length;i++)
        {
            if(graph[i] != null && graph[i].size()==0)
            {
                winner.add(i);
            }
			// if there is one children of the node this means this guy has lost one match 
            else if( graph[i]!= null && graph[i].size()==1)
            {
                loss.add(i);
            }
            
        }
        List<List<Integer>> ans = new ArrayList<>();
        
        ans.add(new ArrayList<>(winner));
        ans.add(new ArrayList<>(loss));
        return ans;
        
        
        
        
    }
}