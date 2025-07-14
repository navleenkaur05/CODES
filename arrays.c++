<<<<<<< HEAD
// #include<iostream>
// using  namespace std;
// int main(){
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     int max = arr[0], min = arr[0];
//     for (int i=0; i<n; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//     }
    
//     for (int i=0; i<n; i++) {
//         if(arr[i] < min) {
//             min = arr[i];
//         }
//     }
    
//     cout << "Maximum: " << max << endl << "Minimum: "<<min;
// return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
// int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     cout << "Reversed array: ";
    
//     for(int i=n-1; i>=0; i--) {
// //         cout << arr[i] << " ";
// //     }  

// // return 0;
// // }




// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;
    
//     cout << "Enter the elements: ";
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     for(int i=0; i<n-1; i++) {
//         for(int j=0; j<n-i-1; j++) {
//             if(arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1]; 
//                 arr[j+1] = temp;
//             }
//         }
//     }
    
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << arr[n-2];

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n], new_arr[n];
    
//     cout << "Enter elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     for (int i=0; i<n; i++) {
//         new_arr[i] = arr[i];
//     }
    
//     for (int i=0; i<n-1; i++) {
//         for (int j=0; j<n-i-1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
    
//     bool sorted = true;
//     for (int i=1; i<n; i++) {
//         if(arr[i] != new_arr[i]) {
//             sorted = false;
//             break;
//         }
//     }
//     if (sorted) {
//         cout << "Sorted";
//     } else {
//         cout << "Not Sorted";
//     }
    
    
// return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n], new_arr[n];
    
//     cout << "Enter elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     int x;
//     cout << "Enter the element to count frequency: ";
//     cin >> x;
//     int freq = 0;
//     for (int i=0; i<n; i++) {
//         if(arr[i] == x) {
//             freq++;
//         }
//     }
    
//     cout << "Frequency: " << freq;
    
// return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n], new_arr[n];
    
    cout << "Enter elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int x;
    cout << "Enter the element to count frequency: ";
    cin >> x;
    int freq = 0;
    for (int i=0; i<n; i++) {
        if(arr[i] == x) {
            freq++;
        }
    }
    
    cout << "Frequency: " << freq;
    
return 0 ;
=======
// #include<iostream>
// using  namespace std;
// int main(){
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     int max = arr[0], min = arr[0];
//     for (int i=0; i<n; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//     }
    
//     for (int i=0; i<n; i++) {
//         if(arr[i] < min) {
//             min = arr[i];
//         }
//     }
    
//     cout << "Maximum: " << max << endl << "Minimum: "<<min;
// return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
// int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     cout << "Reversed array: ";
    
//     for(int i=n-1; i>=0; i--) {
// //         cout << arr[i] << " ";
// //     }  

// // return 0;
// // }




// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;
    
//     cout << "Enter the elements: ";
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     for(int i=0; i<n-1; i++) {
//         for(int j=0; j<n-i-1; j++) {
//             if(arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1]; 
//                 arr[j+1] = temp;
//             }
//         }
//     }
    
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << arr[n-2];

// return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n], new_arr[n];
    
//     cout << "Enter elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     for (int i=0; i<n; i++) {
//         new_arr[i] = arr[i];
//     }
    
//     for (int i=0; i<n-1; i++) {
//         for (int j=0; j<n-i-1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
    
//     bool sorted = true;
//     for (int i=1; i<n; i++) {
//         if(arr[i] != new_arr[i]) {
//             sorted = false;
//             break;
//         }
//     }
//     if (sorted) {
//         cout << "Sorted";
//     } else {
//         cout << "Not Sorted";
//     }
    
    
// return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n], new_arr[n];
    
//     cout << "Enter elements: ";
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
    
//     int x;
//     cout << "Enter the element to count frequency: ";
//     cin >> x;
//     int freq = 0;
//     for (int i=0; i<n; i++) {
//         if(arr[i] == x) {
//             freq++;
//         }
//     }
    
//     cout << "Frequency: " << freq;
    
// return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n], new_arr[n];
    
    cout << "Enter elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int x;
    cout << "Enter the element to count frequency: ";
    cin >> x;
    int freq = 0;
    for (int i=0; i<n; i++) {
        if(arr[i] == x) {
            freq++;
        }
    }
    
    cout << "Frequency: " << freq;
    
return 0 ;
>>>>>>> ef66e833056ffe6a5fb6b548bed6c5bd224f8af8
}