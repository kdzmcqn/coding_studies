#include <iostream>

using namespace std;

int main() {
	// get length of 2D array and number of queries
	int n, q;
	cin >> n >> q;

	// create 2D array
	int** a = new int*[n]();

	// fill 2D array with 1D subarrays
	for (int i = 0; i < n; i++) {
		// get the length of the 1D array at a[i]
		int k;
		cin >> k;

		// create the 1D subarray with the given length
		int* i_arr = new int[k]();

		// fill the subarray with k values
		for (int j = 0; j < k; j++) {
			cin >> i_arr[j];
		}

		// store the subarray in a
		a[i] = i_arr;
	}


	// run queries on a
	for (int q_num = 0; q_num < q; q_num++) {
		// get i, j as the 'query' to get a value from a
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}

	// delete 2D array (each subarray must be deleted)
	for (int i = 0; i < n; i++) {
		delete[] a[i];
	}
	delete[] a;

	return 0;
}



#include <iostream>
#include <vector>

using namespace std;

int main() {
	// get length of array 'a' and number of queries
	int n, q;
	cin >> n >> q;

	// create vector of vectors
	vector<vector<int>> a(n);

	// fill each 2D vector i with k_i values
	for (int i = 0; i < n; i++) {
		// get the length k of the vector at a[i]
		int k;
		cin >> k;

		// fill the vector with k values
		a[i].resize(k);
		for (int j = 0; j < k; j++) {
			cin >> a[i][j];
		}
	}

	// run queries on a
	for (int q_num = 0; q_num < q; q_num++) {
		// get i, j as the 'query' to get a value from a
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}

	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,q,m,l,k;
    scanf("%d%d",&n,&q);
    int *arr[n];
    for(int i = 0 ; i < n;i++){
        scanf("%d",&m);
        arr[i] = (int *)malloc(m * sizeof(int));
        for(int j = 0 ; j < m ;j++){
             scanf("%d",&arr[i][j]);
        }
    }
    while(q--){
        scanf("%d%d",&l,&k);
        printf("%d\n",arr[l][k]);
    } 
    return 0;
}



a[i].reserve(k); // make room for k elements
    for (int j=0;j<k;j++) {
        cin >> a[i][j]; // and reading them
    }


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}



int main() {
    int n, q;  
    cin >> n >> q; 
    //NOTE: C++'s variable-sized array: vector
    vector<vector<int>> a; 
    for (int i = 0; i < n; i++){
        int k;
        cin >> k; 
        vector<int> vect_j;
        for (int j = 0; j < k; j++){
            int val; 
            cin >> val;
            vect_j.push_back(val); 
        }
        a.push_back(vect_j);
    }
    for (int i = 0; i < q; i++){
        int vect_id, id;  
        cin >> vect_id >> id; 
        cout << a.at(vect_id).at(id) << "\n";
    }
    return 0;
}




int numSequence;
int numQueries;
int size;

cin >> numSequence >> numQueries;

int** arr = new int*[numSequence];

int** dummy = new int*[numQueries];
for(int i = 0 ; i < numQueries; i++)
    dummy[i] = new int[2];

for(int i = 0; i < numSequence; i++)
{
     cin >> size;
     arr[i] = new int[size];
     for(int j = 0; j < size; j++)
         cin >> arr[i][j];
}

for(int i = 0 ; i < numQueries; i++)
    cin >> dummy[i][0] >> dummy[i][1];

for(int i = 0 ; i < numQueries; i++)
   cout << arr[dummy[i][0]][dummy[i][1]] << endl;

return 0;
}

According to my Understanding
You have a Sequence & Query. You create enough memory to store sequences. You then query the sequences and display the answers.

According to Code
You create enough memory to store Sequences & Queries since you do not know how many sequences and number of queries will be used. You use **arr and *dummy

3 1 5 4

The first digit, 3, means the number of values in the sequence arr[i] = new [3]; I then store the following values into the store arr[3] = {1, 5, 4}

I then create enough memory to store Query values dummy = new int[numQueries];

since Query values are only two, 1 3 dummy[i][0] = 1 dummy[i][1] = 3 i means Query index

I then display the value of Sequence according to Query dummy[0][1] = 0 dummy[1][1] = 1 arr[0][1] = 5

Formular to display

arr[dummy[i][0]][dummy[i][1]]


int numSequence;
int numQueries;
int size;

// ask number of sequences and queries respectively
cin >> numSequence >> numQueries;

// where to store the sequence elements, dynamically allocate
int** arr = new int*[numSequence];
// where to store numbers for the queries, dynamically allocate
int**   dummy = new int*[numQueries];

// now enter sequences
for ( int i = 0; i < numSequence; i++){
    cin >> size;
    arr[i] = new int[size];             // allocate memory for integer array
    for( int j = 0; j < size; j++ ){    // enter numbers in the sequence
        cin >> arr[i][j];
    }
}

// now allocate memory for query elements
for( int i = 0; i < numQueries; i++){
    dummy[i] = new int[2];
}

// now enter queries
for( int i = 0; i < numQueries; i++){
    cin >> dummy[i][0] >> dummy[i][1];
}

// now output those queries
for( int i = 0; i < numQueries; i++){
    cout << arr[ dummy[i][0] ][ dummy[i][1] ] << endl;
}
return 0;
}