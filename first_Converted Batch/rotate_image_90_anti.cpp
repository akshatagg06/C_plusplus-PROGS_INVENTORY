    //rotate 90 anti
    
    #include <iostream>
    using namespace std;
    
    void transpose(int **arr, int **trans, int size){
        for(int i = 0; i<size; i++){
            for(int j = 0; j<size; j++){
                trans[i][j] = arr[j][i];        
            }
        }
    }
    
    
    int main(int argc, char *argv[]) {
    	int size;
    	
    	cin>>size;
    	
    	int **arr = new int*[size];
    	for(int i = 0; i<size; i++){
    	    arr[i] = new int[size];
    	}
    	
    	int **trans = new int*[size];
        for(int i = 0; i<size; i++){
            trans[i] = new int[size];
        }
    	
    	for(int i = 0; i<size; i++){
    	    for(int j = 0; j<size; j++){
    	        cin>>arr[i][j];
    	    }
    	}
    	
        transpose(arr, trans, size);
        
        for(int i = size-1; i>=0; i--){
            for(int j = 0; j<=size-1; j++){
                cout<<trans[i][j]<<" ";
            }
            cout<<endl;
        }
    	return 0;
    }
