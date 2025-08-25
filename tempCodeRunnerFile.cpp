for (row = 1; row <= n; row++) {
        for (col = 1; col <= row-1; col++) {
            cout << "  ";
        }
        for(col = 1; col <= 2*n-2*row+1; col++) {
            cout << "* ";
        }
        cout << endl;
    }