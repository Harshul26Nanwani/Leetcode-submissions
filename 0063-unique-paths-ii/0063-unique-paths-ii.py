class Solution(object):
    def uniquePathsWithObstacles(self, obstacleGrid):
        """
        :type obstacleGrid: List[List[int]]
        :rtype: int
        """
        dp=[[0]*len(obstacleGrid[0]) for _ in range(len(obstacleGrid))]
        dp[0][0]=1 if obstacleGrid[0][0]==0 else 0

        for i in range(len(obstacleGrid)):
            for j in range(len(obstacleGrid[0])):
                if obstacleGrid[i][j]==1:
                    dp[i][j]=0
                else:
                    if i-1>=0:
                        dp[i][j]+=dp[i-1][j]
                    if j-1>=0:
                        dp[i][j]+=dp[i][j-1]
        return dp[-1][-1]