class Disjoint{
	private:

		vector<int> parent;
		vector<int> R;

	public:

		Disjoint(int size) : R(size, 1), parent(size, -1) {}    

		int find(int a){
			if(parent[a]<0) return a;
			return parent[a]=find(parent[a]);
		}

		void merge(int a, int b){
			a=find(a);
			b=find(b);
			if(a==b) return;

			if(R[a]>R[b]){
				parent[b]=a;
				R[a]+=R[b];
			}
			else if(R[a]<R[b]){
				parent[a]=b;
				R[b]+=R[a];
			}
			else{
				parent[a]=b;
				R[b]++;
			}
		}
};


class Solution {
public:
	void solve(vector<vector<char>>& board) {
		int n=board.size();
		if(n==0) return;

		int m=board[0].size();

		Disjoint dj(n*m+1);

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(board[i][j]=='O' && (i==0 || i==n-1 || j==0 || j==m-1)){
					dj.merge(m*i+j, m*n);
				}
				else if(board[i][j]=='O'){
					if(board[i-1][j]=='O') dj.merge(m*(i-1)+j, m*i+j);
					if(board[i+1][j]=='O') dj.merge(m*(i+1)+j, m*i+j);
					if(board[i][j-1]=='O') dj.merge(m*i+j-1, m*i+j);
					if(board[i][j+1]=='O') dj.merge(m*i+j+1, m*i+j);
				}
			}
		}

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				int a=dj.find(m*i+j);
				int b=dj.find(m*n);
				if(a!=b){
					board[i][j]='X';
				}
			}
		}
	}
};