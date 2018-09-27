# include <stdio.h>

int main (){
    // Variable i for quantity of terms
    // Variables j for value of number
    // Variables n for temporary value of number
    // Variable max for maximum terms
    // Variable num for number with maximum terms
    int i, j, max, num, K;
    unsigned n;

    // Variable K get value of highest number for research
    printf ("\nEnter a highest number for research: ");
    scanf ("%d", &K);

    // Loop for calculating produces terms for the first 1000000 numbers
    for (j = 3; j <= K; j++){
        i = 1;
        n = j;

        // For every number that bigger than 1 we calculate 
        while (n > 1)
            {
            //if (n < j) {i += cache[n]; break;}	// Use cache for repeating number!
            if (!(n % 2)) {n /= 2; i++;} // Calculating code for even number
            else {n *= 3; n++; i++;} // Calculating code for odd number
            }

        // Store new quantity of terms in the cache    
        //cache[j] = i;

        // If new quantity is bigger so change maximum
        if (max < i){
            max = i;
            num = j;
        }
    }
        
    // Output result
    printf ("\nNumber %d produces the maximum sequence of terms: %d.\n", num, max);
    return 0;
}