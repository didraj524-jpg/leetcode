class Solution {
public:
bool isSafe(vector<string>&boared,int row ,int col,int n){

    for(int i=0;i<n;i++){
        if(boared[i][col]=='Q'){
            return false;
        }
    }

    
    for(int j=0;j<n;j++){
        if(boared[row][j]=='Q'){
            return false;
        }
    }

    
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
        if(boared[i][j]=='Q'){
            return false;
        }
    }

    for(int i=row,j=col;i>=0&&j<n;i--,j++){
        if(boared[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
void Nqueen(vector<string>&boared,int row ,int n,int & count){
    
     if(row==n){
        count++;
        return;
     }
    for(int j=0;j<n;j++){
        if(isSafe(boared, row ,j, n)){
            boared[row][j]='Q';
            Nqueen(boared,row+1,n,count);
            boared[row][j]='.';
            
        }
    }

    
}
    int totalNQueens(int n) {
       int count=0;
        vector<string>boared(n,string(n,'.'));
          Nqueen(boared,0,n,count);
return count;

    }
};