#include <iostream>
#include <string>

using namespace std;

void task4() {

    unsigned int length = 10;
    unsigned int width = 10;

    //cin >> length >> width;

    int overall = length * width;
    int nums[overall]{};

    for (int i = 0; i < overall; i++) {
        nums[i] = i;
        //cin >> nums[i];
    }

    int swapCount = 1;
    int iter = 0;

    while ((swapCount > 0) && (iter < 100))
    {
        iter++;
        swapCount = 0;

        for (int i = 0; i < overall-1; i++) {
            if (nums[i] > nums[i+1]) {
                int h = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = h;

                swapCount++;
            }
        }

    }

    int matrix[length][width] {};

    int max_i = width;
    int max_j = length;

    int min_i = -1;
    int min_j = -1;

    int ci = 0;
    //4 3 2 1 for 2 task
    int cj = 0;

    int mdiri = 1;
    int mdirj = 0;

    for (int k = 0; k < overall; k++) {

        matrix[cj][ci] = nums[k];

        cout << ci << " " << cj << " " << mdiri << " " << mdirj << "] " << endl;
        cout << min_i << " " << min_j << " " << max_i << " " << max_j << endl;

        ci += 1 * mdiri;
        cj += 1 * mdirj;

        if (cj >= max_j) {
            mdiri = -1;
            mdirj = 0;
            min_j++;
            cj--;
            ci--;
            continue;
        }

        if (cj <= min_j) {
            mdiri = 1;
            mdirj = 0;
            max_j--;
            min_i++;
            ci++;
            cj++;
            continue;
        }

        if (ci >= max_i) {
            mdiri = 0;
            mdirj = 1;
            //min_i++;
            ci--;
            cj++;
            continue;
        }

        if (ci <= min_i) {
            mdiri = 0;
            mdirj = -1;
            max_i--;
            ci++;
            cj--;
            continue;
        }



    }

    cout << endl;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


}

int main() {

    task4();

    return 0;
}
