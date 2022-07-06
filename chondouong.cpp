#include <iostream>
using namespace std;
 
int main()
{
    int so;
    cout << "-------------Menu---------------" << endl;
    cout << "  1. Cafe" << endl;
    cout << "  2. Cam vat" << endl;
    cout << "  3. Nuoc ep ca rot" << endl;
    cout << "  4. Nuoc ep ca chua" << endl;
    cout << "  5. Nuoc loc" << endl;
    cout << "  6. Nuoc dua" << endl;
    cout << "--------------------------------" << endl;
    do {
        cout << "Moi ban chon thuc uong: ";
        cin >> so;
        switch(so) {
            case 1:
                cout << "   Ban da chon cafe" << endl;
                break;
            case 2:
                cout << "   Ban da cho cam vat" << endl;
                break;
            case 3:
                cout << "   Ban da chon nuoc ep ca rot" << endl;
                break;
            case 4:
                cout << "   Ban da chon nuoc ep ca chua" << endl;
                break;
            case 5:
                cout << "   Ban da chon nuoc loc" << endl;
                break;
            case 6:
                cout << "   Ban da chon nuoc dua" << endl;
                break;
            case 7:
                cout << "Cam on ban da dat mon. Xin chao va hen gap lai" << endl;
                break;
            default:
                cout << "Vui long nhan so tu 1 den 7" << endl;
        }
    } while (so != 7);
     
    return 0;
}