int main()
{
    int res;
    int res2;
    res = 0;
    res2 = 0;
//  ft_printf("%c", '0');
    printf("\n**********************\n");
    res = ft_printf("%c", '0');
    printf("\nNum de chars: %d\n\n--------> Prueba real:\n", res);
    res2 = printf("%c", '0');
    printf("\nNum de chars printf: %d", res2);
    printf("\n**********************\n");
//  ft_printf(" %c ", '0');
    res = ft_printf(" %c", '0');
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c", '0');
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
// ft_printf(" %c", '0' - 256);
    res = ft_printf(" %c", '0' - 256);
    printf("\nNum de chars: %d", res);
    res2 = printf("%c", '0' - 256);
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
// ft_printf("%c ", '0' + 256);
    res = ft_printf("%c ", '0' + 256);
    printf("\nNum de chars: %d", res);
    res2 = printf("%c", '0' + 256);
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
//  ft_printf(" %c %c %c ", '0', 0, '1');
    res = ft_printf(" %c %c %c ", '0', 0, '1');
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c %c %c ", '0', 0, '1');
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
//  ft_printf(" %c %c %c ", ' ', ' ', ' ');
    res = ft_printf(" %c %c %c ", ' ', ' ', ' ');
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c %c %c ", ' ', ' ', ' ');
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
//  ft_printf(" %c %c %c ", '1', '2', '3');
    res = ft_printf(" %c %c %c ", '1', '2', '3');
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c %c %c ", '1', '2', '3');
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
//  ft_printf(" %c %c %c ", '2', '1', 0);
    res = ft_printf(" %c %c %c ", '2', '1', 0);
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c %c %c ", '2', '1', 0);
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
//  ft_printf(" %c %c %c ", 0, '1', '2');
    res = ft_printf(" %c %c %c ", 0, '1', '2');
    printf("\nNum de chars: %d", res);
    res2 = printf(" %c %c %c ", 0, '1', '2');
    printf("\nNum de chars printf: %d\n\n--------> Prueba real:\n", res2);
    printf("\n**********************\n");
}
