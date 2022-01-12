#include <iostream>

int main(void)
{
      int t;
      std::cin >> t;

      while (t--)
      {
            int a, b, c;
            std::cin >> a >> b >> c;

            bool found = false;

            if (!found)
            {
                  int d = b - a;
                  int c_ = a + 2 * d;

                  //std::cout << d << " " << c_ << " " << double(c_ + 0.0) / c << " " << int(c_ / c) << std::endl;

                  if (double(c_ + 0.0) / c - int(c_ / c) == 0 && int(c_ / c) > 0)
                  {
                        found = true;
                  }
            }

            if (!found)
            {
                  int d = c - b;
                  int a_ = b - d;

                  //std::cout << d << " " << a_ << " " << double(a_ + 0.0) / a << " " << int(a_ / a) << std::endl;

                  if (double(a_ + 0.0) / a - int(a_ / a) == 0 && int(a_ / a) > 0)
                  {
                        found = true;
                  }
            }

            if (!found)
            {
                  double d = (c - a) / 2;
                  int b_ = a + d;

                  //std::cout << d << " " << b_ << " " << double(b_ + 0.0) / b << " " << int(b_ / b) << std::endl;

                  if (double(b_ + 0.0) / b - int(b_ / b) == 0 && int(b_ / b) > 0)
                  {
                        found = true;
                  }
            }

            std::cout << (found ? "YES" : "NO") << std::endl;
      }

      return 0;
}