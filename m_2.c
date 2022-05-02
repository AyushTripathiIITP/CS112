#include<stdio.h>
#include<math.h>

int main(void){
    int n;
    printf("Enter size of array?\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array\n");
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    //print the reversed array
    printf("Revered array is as follows\n");
    for(int j=n-1 ; j >= 0 ; j--){
        printf("%d ", arr[j]);
    }
    printf("\n");
    int min = 999999999;
    //finding two elements with sum closest to 0
    int slow=0 ;
    for(int fast = 1 ; fast < n ; fast++){
        int total = arr[slow] + arr[fast] ;
        if(total == 0){
            printf("%d %d", slow , fast);
            return 0;
        }
        else if(total > 0 && fast == n-1){
            min = min < total ? min : total ;
            ++slow;
        }
        else if(total < 0 && fast == n-1){
            total *= -1 ;
            min = min < total ? min : total ;
            ++slow;
        }
        else if(total > 0){
            min = min < total ? min : total ;
        }
        else if(total < 0){
            total *= -1 ;
            min = min < total ? min : total ;
        }
    }
    printf("Sum closest to 0 is %d", min);
}