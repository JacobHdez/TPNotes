#include <stdio.h>

int main()
{
    int n;
    do {
        printf("Numero de elementos a calcular: ");
        scanf("%d", &n);
    } while ( n <= 0 );

    int k = 0;
    while ( n-- ) {
        double E_2k_real = 0.0;
        double E_2k_imag = 0.0;

        for ( int m = 1; m <= 2*k+1; ++m ) {

            double sum = 0.0;

            for ( int j = 0; j <= m; ++j ) {

                double binom = 1.0;
                for ( int i = 1; i <= j; ++i )
                    binom *= (m + 1 - i) / (double)i;
                
                double base = m - 2.0 * j;
                double term = 1.0;
                for ( int i = 0; i < 2*k+1; ++i )
                    term *= base;
                
                double sign = (j % 2 == 0) ? 1.0 : -1.0;

                double denom = (1 << m) * m;

                sum += sign * binom * term / denom;
            }

            if ( m % 4 == 0 )
                E_2k_imag += sum;
            else if ( m % 4 == 1 )
                E_2k_real += sum;
            else if ( m % 4 == 2 )
                E_2k_imag -= sum;
            else
                E_2k_real -= sum;
        }

        printf("E_%d = %f + %fi\n", 2*k, E_2k_real, E_2k_imag);
        ++k;
    }

    return 0;
}
