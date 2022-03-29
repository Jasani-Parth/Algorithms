// https://leetcode.com/problems/champagne-tower/

class Solution
{

private:
    double max(double x, double y)
    {
        if (x > y)
            return x;

        return y;
    }

    double min(double x, double y)
    {
        if (x < y)
            return x;

        return y;
    }

public:
    double champagneTower(int p, int query_row, int query_glass)
    {

        if (p == 0)
            return 0;

        std::vector<double> vec[query_row + 1];

        vec[0].push_back(p + 0.0);

        for (int step = 1; step < query_row + 1; step++)
        {
            vec[step].push_back(max(0, double(vec[step - 1][0] - 1.0) / 2));

            for (int i = 1; i < step; i++)
            {
                double t = max(0, double(vec[step - 1][i - 1] - 1.0) / 2) + max(0, double(vec[step - 1][i] - 1.0) / 2);

                vec[step].push_back(max(0, t));
            }

            vec[step].push_back(max(0, double(vec[step - 1][0] - 1.0) / 2));
        }

        return min(1, vec[query_row][query_glass]);
    }
};