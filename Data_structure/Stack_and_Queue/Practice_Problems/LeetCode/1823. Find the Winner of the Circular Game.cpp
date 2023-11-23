class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        queue<int> game;
        for (int i = 1; i <= n; i++)
        {
            game.push(i);
        };
        int cnt = k;
        while (!game.empty() && game.size() > 1)
        {
            int tmp = game.front();
            game.pop();
            cnt--;
            if (cnt == 0)
            {
                cnt = k;
            }
            else
            {
                game.push(tmp);
            }
        }
        return game.front();
    }
};