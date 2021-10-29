// URL : https://leetcode.com/problems/game-of-life/



class Solution {
public:
	void liveCheck(vector<vector<int>>& board, int r, int c) {
		int cnt = 0;
		for (int i = r - 1; i <= r + 1; i++) {
			if (i < 0 || i >= board.size()) continue;
			for (int j = c - 1; j <= c + 1; j++) {
				if (j < 0 || j >= board[0].size() || (i == r && j == c)) continue;
				if ( board[i][j] & 1 ) cnt++;
			}
		}
		if ( board[r][c] == 1 && (cnt == 2 || cnt == 3) ) board[r][c] = 3;
		if ( board[r][c] == 0 && cnt == 3 ) board[r][c] = 2;

	}

	void gameOfLife(vector<vector<int>>& board) {
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[0].size(); j++) {
				liveCheck(board, i, j);
			}
		}

		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[0].size(); j++) {
				board[i][j] >>= 1;
			}

		}

	}
};
