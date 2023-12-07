int main() {
    int i, j, n = 5;
    
    for (i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 5; j++)
        {
            printf("%3i", n);
        }
        printf("\n");
        n += 5;
    }
}