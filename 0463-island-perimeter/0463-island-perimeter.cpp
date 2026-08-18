class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int islands=0;
        int neibours=0;
     for(int row=0;row<grid.size();row++)
     {
        for(int col=0;col<grid[row].size();col++)
        {
            if(grid[row][col]==1)
            { islands++;
            if(row+1<grid.size() && grid[row+1][col]==1)neibours++;
            if(col+1<grid[row].size() && grid[row][col+1]==1)neibours++;
        }
        }
     }
     return islands*4-neibours*2;
    }
};