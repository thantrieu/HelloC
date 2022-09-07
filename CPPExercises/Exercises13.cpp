/**
* @author Branium Academy
* @version 2022.09.07
* @see https://braniumacademy.net
*/

#include <iostream>
#include <iomanip> // thư viện chứa hàm setw()
using namespace std;

int main()
{
    int x;
    int width;
    int height;
    cout << "Nhap gia tri bat dau: ";
    cin >> x;
    cout << "Nhap chieu rong: ";
    cin >> width;
    cout << "Nhap chieu cao: ";
    cin >> height;

    // gán giá trị biến đếm cho từng cạnh, lần lượt: cạnh top, right, bottom, left
    int top = x;
    int right = x + width;
    int bottom = x + 2 * width + height - 3;
    int left = x + 2 * (width + height) - 5;
    // vẽ hình
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            if (i == 1) {
                cout << setw(5) << top++; // dành 5 vị trí in ra giá trị top, sau đó tăng top lên 1 đơn vị
            }
            else if (j == width) {
                cout << setw(5) << right++;
            }
            else if (i == height) {
                cout << setw(5) << bottom--;
            }
            else if (j == 1) {
                cout << setw(5) << left--;
            }
            else {
                cout << setw(5) << "."; // in ra dấu chấm trong lõi hình chữ nhật
            }
        }
        cout << "\n\n";
    }
}