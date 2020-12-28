/*
 * @Descripttion: For Windows
 * @version: 0.1
 * @Author: KR
 * @Date: 2020-03-10 14:29:45
 * @LastEditors: KR
 * @LastEditTime: 2020-12-27 11:05:10
 */
#include <iostream>
using namespace std;

struct Retangle
{
    long long width;
    long long length;
    long long cut();
};

int main()
{
    Retangle rect;
    cin >> rect.length >> rect.width;
    long long sum = 0, tmp = 0;
    while ((tmp = rect.cut()))
        sum += tmp;
    cout << sum << endl;
    system("pause");
    return 0;
}

long long Retangle::cut()
{

    if (length == 0 || width == 0)
        return 0;
    long long sum = 0;
    if (width < length)
    {
        sum = 4 * (length / width) * width;
        length %= width;
    }
    else
    {
        sum = 4 * (width / length) * length;
        width %= length;
    }
    return sum;
}
