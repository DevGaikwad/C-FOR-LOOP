// #include<stdio.h>
// int main ()

     // code no 1

// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//           printf("\n");
//     }
//     return 0;
// }

// code no 2

// #include<stdio.h>
// int main ()
// {

//     for(int i=1;i<=5;i++)
//     {
//         for(int j=5;j>=i;j--)
//         {
//             printf("*");
//         }
//           printf("\n");
//     }
//     return 0;
// }

// code no 3


// #include<stdio.h>
// int main ()
// {

//     for(int i=1;i<=5;i++)
//     {
//         for(int j=5;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++)
//         {
//             printf("*");
//         }
//           printf("\n");
//     }
//     return 0;
// }


// code no 4

// #include<stdio.h>
// int main()
// {

//     for(int i=1;i<=5;i++)
//     {
//         for(int j=5;j>=i;j--)
//         {
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++)
//         {
//             printf("*");
//         }
//         for(int l=2;l<=i;l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// code no 5

#include<stdio.h>
int main()
{

    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        for(int l=2;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        for(int l=2;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
