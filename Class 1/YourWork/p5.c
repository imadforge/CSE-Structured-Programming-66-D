#include<stdio.h>

// int main()
// {
//     int a,b,sum=a+b;
//     scanf("%d %d", &a, &b);
//     if (sum%2==0)
//     {
//         printf("Sum is even");
//     }
//     else{
//         printf("Sum is odd");
//     }
//     return 0;
// }

// int main(){'

//     int a,b;
//     scanf("%d %d", &a, &b);
//     if (a - b > 0)
//         printf("Sub is positive\n");
//     else if (a - b == 0)
//         printf("sub is zero\n");
//     else
//         printf("sub is negetive\n");

//     return 0;

// }

int main(){
    
    int a,b;
    scanf("%d %d", &a, &b);

    if(a < b){
        printf("First is less than second \n");
    }

    else if (a==b){
        printf("First is equal to second \n");
    }
    else{
        printf("First os greater than second \n");
    }
    
    return 0;
}