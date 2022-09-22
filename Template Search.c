/*Sequential Search*/

void SeqSearch(int* L, int n, int x, int *idx){
    int i; //pencatat index larik

    i=1;
    while(i<n && L[i] != x){
        i++;
    }

    if(L[i] ==x){
        *idx = i;
    }else{
        *idx=-1;
    }
}

/*Binary Search*/
void BinarySearch(int* L,int n, int X, int *idx){
    typedef enum{true = 1, false = 0} boolean;
    int i,j;
    int k;
    bool ketemu;
    i=1;
    j=n;
    ketemu = false;

    while(!ketemu && i <= j){
        k= (i+j)/2
        if(L[k] == x){
            ketemu = true;
        }else{
            if(L[k] > x){
                i = k + 1;
            }else{
                j = k-1;
            }
        }
    }

    if(ketemu == true){
        *idx = k;
    }else{
        *idx = -1;
    }

}