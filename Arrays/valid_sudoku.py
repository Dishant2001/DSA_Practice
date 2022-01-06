class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(9):
            sudoku_map = {}
            sudoku_map_c = {}            
            sudoku_map_g = {}
            for j in range(9):
                # Row
                if board[i][j]!= ".":
                    if board[i][j] in sudoku_map:
                        return False
                    sudoku_map[board[i][j]] = True
                    
                # column                    
                if board[j][i]!= ".":
                    if board[j][i] in sudoku_map_c:                            
                        return False
                    sudoku_map_c[board[j][i]] = True
                                
                # Box
                row = (i//3)*3 + j//3
                column = (i%3)*3 + j%3                
                if board[row][column]!= ".":
                    if board[row][column] in sudoku_map_g:
                        return False
                    sudoku_map_g[board[row][column]] = True
        
        return True
        