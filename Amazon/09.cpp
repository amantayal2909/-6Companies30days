class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        unordered_set <string> r;
        unordered_set <string> c;
        unordered_set <string> b;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(mat[i][j]!=0)
                {
                   int boxNo = (i/3)*3+j/3;
                   
                string row="";
                row=row+char(mat[i][j]+'0')+"in row" + char(i+'0');
                string col="";
                col=col+char(mat[i][j]+'0') +"in col" + char(j+'0');
                string box="";
                box=box+char(mat[i][j]+'0') +"in box"+ char(boxNo+'0'); 

                if(r.find(row)!=r.end())
                return 0;
                else r.insert(row);
                
                if(c.find(col)!=c.end())
                return 0;
                else c.insert(col);
                
                if(b.find(box)!=b.end())
                return 0;
                else b.insert(box);
                }
            }
        }
        return 1;
    }
};
