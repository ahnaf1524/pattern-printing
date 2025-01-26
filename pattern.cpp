#include <iostream>
#include <cstdio>
#include <algorithm>
#define endl '\n'
using namespace std;
void pattern1(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(void)
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(void)
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern8(void)
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern9(void)
{
    pattern7();
    pattern8();
}
void pattern10(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(void)
{
    int n, start = 1;
    cin >> n;
    for (int i = 0; i <= n; ++i)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; ++j)
        {
            cout << start << " ";
            // flipping 0 to 1 and 1 to 0
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j;
        }
        // cout << endl;
        for (int k = 1; k <= 2 * (n - i); ++k)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; --j)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern13(void)
{
    int n;
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
void pattern14(void)
{
    int n;
    cin >> n;
    for (int i = 0; i <= n - 1; ++i)
    {
        for (char j = 'A'; j <= 'A' + i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern15(void)
{
    int n;
    cin >> n;
    for (int i = n - 1; i >= 0; --i)
    {
        for (char j = 'A'; j <= 'A' + i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern16(void)
{
    int n;
    cin >> n;
    for (int i = 0; i <= n - 1; ++i)
    {
        char ch = 'A' + i;
        for (char j = 0; j <= i; ++j)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern17(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= i; ++j)
        {
            cout << ch;
            ch++;
        }
        ch -= 2;
        for (int j = 1; j < i; ++j)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
}
void pattern18(void)
{
    int n;
    cin >> n;
    for (int i = n; i >= 0; --i)
    {
        char ch = 'A' + i;
        for (int j = i; j <= n; ++j)
        {
            cout << ch++ << " ";
        }
        cout << endl;
        // ch -= 1;
    }
}
void pattern19(void)
{
    int n;
    cin >> n;
    int spacesBetween = 0;
    for (int row = 0; row < n; row++)
    {
        for (int starCount = 1; starCount <= n - row; starCount++)
        {
            cout << "*";
        }

        for (int spaceCount = 0; spaceCount < spacesBetween; spaceCount++)
        {
            cout << " ";
        }

        for (int starCount = 1; starCount <= n - row; starCount++)
        {
            cout << "*";
        }
        spacesBetween += 2;

        // Move to the next row
        cout << endl;
    }

    // Reset spaces for the lower half of the pattern
    spacesBetween = 2 * n - 2;

    // For the lower half of the pattern
    for (int row = 1; row <= n; row++)
    {
        // Print the first group of stars
        for (int starCount = 1; starCount <= row; starCount++)
        {
            cout << "*";
        }

        // Print the spaces between the star groups
        for (int spaceCount = 0; spaceCount < spacesBetween; spaceCount++)
        {
            cout << " ";
        }

        // Print the second group of stars
        for (int starCount = 1; starCount <= row; starCount++)
        {
            cout << "*";
        }

        // Decrease the spaces for the next row
        spacesBetween -= 2;

        // Move to the next row
        cout << endl;
    }
}
void pattern20(void)
{
    int n;
    cin >> n;
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; ++i)
    {
        // stars for the first half
        int stars = i;
        // stars for the second half
        if (i > n)
            stars = 2 * n - i;
        // for printing the stars
        for (int j = 1; j <= stars; ++j)
        {
            cout << "*";
        }
        // for printing the stars
        for (int j = 1; j <= spaces; ++j)
        {
            cout << " ";
        }
        // for printing the stars
        for (int j = 1; j <= stars; ++j)
        {
            cout << "*";
        }
        // as soon as the starts for each iteration are printed we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}
void pattern21(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern22(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; ++i)
    {
        // Loop through each column
        for (int j = 1; j <= 2 * n - 1; ++j)
        {
            int top = i - 1;
            int bottom = (2 * n - 1) - i;
            int left = j - 1;
            int right = (2 * n - 1) - j;
            int value = n - min(min(top, bottom), min(left, right));
            cout << value << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // https://takeuforward.org/pattern/pattern-1-rectangular-star-pattern/

    // pattern1();

    // https://takeuforward.org/pattern/pattern-2-right-angled-triangle-pattern/

    // pattern2();

    // https://takeuforward.org/pattern/pattern-3-right-angled-number-pyramid/

    // pattern3();

    // https://takeuforward.org/pattern/pattern-4-right-angled-number-pyramid-ii/

    // pattern4();

    // https://takeuforward.org/pattern/pattern-5-inverted-right-pyramid/

    // pattern5();

    // https://takeuforward.org/pattern/pattern-6-inverted-numbered-right-pyramid/

    // pattern6();

    // https://takeuforward.org/pattern/pattern-7-star-pyramid/

    // pattern7(); // complex to understand

    // https://takeuforward.org/pattern/pattern-8-inverted-star-pyramid/

    // pattern8();

    // https://takeuforward.org/pattern/pattern-9-diamond-star-pattern/

    // pattern9();

    // https://takeuforward.org/pattern/pattern-10-half-diamond-star-pattern/

    // pattern10();

    // https://takeuforward.org/pattern/pattern-11-binary-number-triangle-pattern/

    // pattern11();

    // https://takeuforward.org/pattern/pattern-12-number-crown-pattern/

    // pattern12();

    // https://takeuforward.org/pattern/pattern-13-increasing-number-triangle-pattern/

    // pattern13();

    // https://takeuforward.org/pattern/pattern-14-increasing-letter-triangle-pattern/

    // pattern14();

    // https://takeuforward.org/pattern/pattern-15-reverse-letter-triangle-pattern/

    // pattern15();

    // https://takeuforward.org/pattern/pattern-16-alpha-ramp-pattern/

    // pattern16();

    // https://takeuforward.org/pattern/pattern-17-alpha-hill-pattern/

    // pattern17();

    // https://takeuforward.org/pattern/pattern-18-alpha-triangle-pattern/

    // pattern18();

    // https://takeuforward.org/pattern/pattern-19-symmetric-void-pattern/

    // pattern19(); // most complex

    // https://takeuforward.org/pattern/pattern-20-symmetric-butterfly-pattern/

    // pattern20();

    // https://takeuforward.org/pattern/pattern-21-hollow-rectangle-pattern/

    // pattern21();

    // https://takeuforward.org/pattern/pattern-22-the-number-pattern/

    // pattern22();

    return 0;
}