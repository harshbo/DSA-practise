class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>>pacific(rows, vector<int>(cols,0));
        vector<vector<int>>atlantic(rows, vector<int>(cols,0));

        for(int j=0;j< cols;j++){
            function(matrix,0,j,INT_MIN,pacific);
            function(matrix,rows-1,j,INT_MIN,atlantic);
        }
        for(int i=0;i< rows;i++){
            function(matrix,i,0,INT_MIN,pacific);
            function(matrix,i,cols-1,INT_MIN,atlantic);
        }

        vector<vector<int>> result;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (pacific[i][j] && atlantic[i][j])
                    result.push_back({i, j});
            }
        }
        return result;


        
        
    }
    void function(vector<vector<int>>&matrix, int i, int j, int prev, vector<vector<int>>&occean){
        if (i < 0 || j < 0 || i >= matrix.size() || j >= matrix[0].size()) return;

        if(occean[i][j]==1) return;
        if(matrix[i][j]<prev) return;

        occean[i][j]=1;

        function(matrix,i-1,j,matrix[i][j],occean);
        function(matrix,i,j-1,matrix[i][j],occean);
        function(matrix,i+1,j,matrix[i][j],occean);
        function(matrix,i,j+1,matrix[i][j],occean);
    }
};
