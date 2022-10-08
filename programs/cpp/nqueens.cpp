bool issafe(int r, int c, vector<string>grid, int n)
    {
        int i=r, j=c;
        while(i>=0)
        {
            if(grid[i][c]=='Q')
                return false;
            i--;
        }
        
        i=r, j=c;
        while(j>=0)
        {
            if(grid[r][j]=='Q')
                return false;
            j--;
        }
        
        i=r, j=c;
        while(i>=0 && j>=0)
        {
            if(grid[i--][j--]=='Q')
                return false;
        }
        
        i=r, j=c;
        while(i>=0 && j<n)
        {
            if(grid[i--][j++]=='Q')
                return false;
        }
        
        return true;
    }
    
    void nqueens(vector<string> grid, int n, vector<vector<string>>& res, int r)
    {
        if(r==n)
        {
            res.push_back(grid);
            return;
        }
        
        for(int c=0;c<n;c++)
        {
            if(issafe(r,c,grid,n))
            {
                grid[r][c]='Q';
                nqueens(grid,n,res,r+1);
                grid[r][c]='.';
            }
            
        }
        return;
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> res;
        vector<string> grid(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                grid[i] +='.';
        }
        nqueens(grid,n,res,0);
        return res;
    }
