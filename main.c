#include <stdio.h>

int main(void)
{
	\\counts how many vowels there are in a sentence
    int n;
    typedef char Vowels;
    Vowels a, e, i ,o ,u;
    int count=0;
    char ch;

    printf("Enter a sentence: \n");
    ch = getchar();
    while (ch != '.'){
        if (ch== 'a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count++;
        }
        ch = getchar();
        
    }
    printf("%d", count);
    return 0;
    
}


int main(void)
{
	\\ prints whole last name ',' and then the first letter of the first name
    int count;
    printf("enter a first and last name\n");
    char ch, first, after, last;
    str last_name;
    scanf()
    first= getchar();
    after = getchar();
    while (after != ' '){
        last = getchar()
    }
    last_name = scanf()
    
    
    
    printf("%c",first);
}

int main(void)
{
    char ch;
    float count, average;
    int spaces=1, letter=0, remain;
    printf("enter a sentence\n");
    ch = getchar();
    
    while ( ch  != '.'){
        if(ch == ' '){
            spaces++;
        }
        else{
            letter ++;
        }
        
        ch = getchar();
    }
    remain = letter%spaces;
    average = letter/spaces + remain;
    printf("The average is %f %d %d %d", average, spaces, letter, remain);
}


int main(void)
{
	//reverses the order of the array
    int a[N], i;
    printf ("Enter %d numbers: ", N);
    for (i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    printf("\nThe numbers in reverse order are");
    for (i=N-1; i>=0; i--){
        printf(" %d", a[i]);
    }
    return 0;

int main(void)
{
	//calculates the sum of the row
    int i, j, x,  a[5][5], sum_row;
    int row_tot[5], column_tot[5];
    for (i=0;i<5;i++){
        printf("Enter row %d (5 by 5 array): ", i);
        for (j=0;j<5;j++){
            scanf("%d", &a[i][j]);
            sum_row += a[i][j];
            
        }
        row_tot[i] =sum_row;
        sum_row = 0;
    }
    for (x=0;x<5;x++){
        printf("%d\n", row_tot[x]);
    }
    
   
}