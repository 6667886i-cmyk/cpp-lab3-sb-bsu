listing
#include <iostream>
using namespace std;
int main()
{
int k;
cout << " Enter the amount of integers k: ";
cin >> k;
if (k == 0) {
cout << "sum: 0" << endl; // Если k=0, сумма равна 0
} else {
int sum = 0, num;
for (int i = 0; i < k; ++i) {
cout << "Enter integer nr. " << i << ": ";
cin >> num;
sum += num;
}
cout << "sum: " << sum << endl;
}
return 0;
}
