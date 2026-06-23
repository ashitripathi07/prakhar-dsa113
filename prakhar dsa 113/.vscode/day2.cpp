#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    cout << arr[2];

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target = 7;

    int low = 0, high = 8;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target) {
            cout << "Found";
            break;
        }
        else if(arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return 0;
}