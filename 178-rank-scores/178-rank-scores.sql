/* Write your T-SQL query statement below */
SELECT
        Score,
        dense_rank() OVER (ORDER BY SCORE DESC) AS Rank
from Scores;