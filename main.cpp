
// ========== MyApp ==========
// ماشین حساب ساده
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "🧮 MyApp\n";
    cout << "مثال: 5 + 3\n";
    while(cin >> a >> op >> b) {
        switch(op) {
            case '+': cout << "= " << a+b << endl; break;
            case '-': cout << "= " << a-b << endl; break;
            case '*': cout << "= " << a*b << endl; break;
            case '/': if(b) cout << "= " << a/b << endl;
                      else cout << "❌ خطا: تقسیم بر صفر\n";
                      break;
            default: cout << "❌ عملگر نامعتبر\n";
        }
    }
    return 0;
}

❌ Failed to fetch
