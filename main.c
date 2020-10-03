#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
#include "libft.h"
#include "test.h"


void test_c (void)
{
	int i;
	// i = printf("%-.-10.10sa\n", "test");
	// printf("%d\n", i);
	// printf("%-.10.10sa\n", "test");
	// printf("%-.10.10sa\n", "test");
	printf(BOLD"[%%c]bc"RESET"\n");
	i = printf("org: [%c]bc", 'a');
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%c]bc", 'a');
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"[%%10c]bc"RESET"\n");
	i = printf("org: [%10c]bc", 'a');
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%10c]bc", 'a');
	printf("(i = %d)\n\n", i);
	// ==========
	printf(BOLD"[%%-10c]bc"RESET"\n");
	i = printf("org: [%-10c]bc", 'a');
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%-10c]bc", 'a');
	printf("(i = %d)\n\n", i);
	// ==========
	printf(BOLD"[%%010c]bc"RESET"\n");
	i = printf("org: [%010c]bc", 'a');
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%010c]bc", 'a');
	printf("(i = %d)\n\n", i);
	// ==========
	printf(BOLD"[%%0-10c]bc"RESET"\n");
	i = printf("org: [%0-10c]bc", 'a');
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%0-10c]bc", 'a');
	printf("(i = %d)\n\n", i);
	// ==========
	printf(BOLD"[%%-010c]bc"RESET"\n");
	i = printf("org: [%-010c]bc", 'a');
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%-010c]bc", 'a');
	printf("(i = %d)\n\n", i);
	// ==========
	printf(BOLD"[%%c%%c%%c]bc"RESET"\n");
	i = printf("org: [%c%c%c]bc", 'a', 'b', 'c');
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%c%c%c]bc", 'a', 'b', 'c');
	printf("(i = %d)\n\n", i);
	// ==========
	printf(BOLD"printf([%%0c]bc, 'a')"RESET"\n");
	i = printf("org: [%0c]bc", 'a');
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%0c]bc", 'a');
	printf("(i = %d)\n\n", i);
	// ==========
	printf(BOLD"printf([%%10.0c]bc, 'a')"RESET"\n");
	i = printf("org: [%10.0c]bc", 'a');
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%10.0c]bc", 'a');
	printf("(i = %d)\n\n", i);
	// ==========
	printf(BOLD"printf([%%c]bc, '\\0')"RESET"\n");
	i = printf("org: [%c]bc", '\0');
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%c]bc", '\0');
	printf("(i = %d)\n\n", i);
}

void test_s (void)
{
	int i;
	printf(BOLD"printf([%%s], \"test\")"RESET"\n");
	i = printf("org: [%s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%4s], \"test\")"RESET"\n");
	i = printf("org: [%4s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%4s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%10s], \"test\")"RESET"\n");
	i = printf("org: [%10s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%10s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%2s], \"test\")"RESET"\n");
	i = printf("org: [%2s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%2s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	// =============
	printf(BOLD"printf([%%-4s], \"test\")"RESET"\n");
	i = printf("org: [%-4s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%-4s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%-10s], \"test\")"RESET"\n");
	i = printf("org: [%-10s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%-10s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%-2s], \"test\")"RESET"\n");
	i = printf("org: [%-2s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%-2s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	// =============
	printf(BOLD"printf([%%04s], \"test\")"RESET"\n");
	i = printf("org: [%04s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%04s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%010s], \"test\")"RESET"\n");
	i = printf("org: [%010s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%010s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%02s], \"test\")"RESET"\n");
	i = printf("org: [%02s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%02s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%010s], \"test\")"RESET"\n");
	i = printf("org: [%010s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%010s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%-10s], \"test\")"RESET"\n");
	i = printf("org: [%-10s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%-10s]", "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%10s], \"test123456789\")"RESET"\n");
	i = printf("org: [%10s]", "test123456789");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%10s]", "test123456789");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%10.10s], \"test123456789\")"RESET"\n");
	i = printf("org: [%10.10s]", "test123456789");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%10.10s]", "test123456789");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%10.0s], \"test123456789\")"RESET"\n");
	i = printf("org: [%10.0s]", "test123456789");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%10.0s]", "test123456789");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%s], NULL)"RESET"\n");
	i = printf("org: [%s]", NULL);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%s]", NULL);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.3s], NULL)"RESET"\n");
	i = printf("org: [%.3s]", NULL);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.3s]", NULL);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%*s], 20, \"test\")"RESET"\n");
	i = printf("org: [%*s]", 20, "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%*s]", 20, "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.*s], 3, \"test\")"RESET"\n");
	i = printf("org: [%.*s]", 3, "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.*s]", 3, "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%*.*s], 20, 3, \"test\")"RESET"\n");
	i = printf("org: [%*.*s]", 20, 3, "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%*.*s]", 20, 3, "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%*.*s], -10, 3, \"test\")"RESET"\n");
	i = printf("org: [%*.*s]", -10, 3, "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%*.*s]", -10, 3, "test");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%*.*s], 20, -3, \"test\")"RESET"\n");
	i = printf("org: [%*.*s]", 20, -3, "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%*.*s]", 20, -3, "test");
	printf("(i = %d)\n\n", i);
}

void test_percent(void)
{
	int i;
	printf(BOLD"printf([%%%%])"RESET"\n");
	i = printf("org: [%%]");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%%]");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%5%%])"RESET"\n");
	i = printf("org: [%5%]");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%5%]");
	printf("(i = %d)\n\n", i);
}

void test_d(void)
{
	int i;
	printf(BOLD"printf([%%d], 123)"RESET"\n");
	i = printf("org: [%d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%d], -123)"RESET"\n");
	i = printf("org: [%d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%d], INT_MAX)"RESET"\n");
	i = printf("org: [%d]", INT_MAX);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%d]", INT_MAX);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%d], INT_MIN)"RESET"\n");
	i = printf("org: [%d]", INT_MIN);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%d]", INT_MIN);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%d], INT_MAX + 1)"RESET"\n");
	i = printf("org: [%d]", INT_MAX + 1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%d]", INT_MAX + 1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%d], INT_MIN - 1)"RESET"\n");
	i = printf("org: [%d]", INT_MIN - 1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%d]", INT_MIN - 1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%5d], 123)"RESET"\n");
	i = printf("org: [%5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%5d], -123)"RESET"\n");
	i = printf("org: [%5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%-5d], 123)"RESET"\n");
	i = printf("org: [%-5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%-5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%-5d], -123)"RESET"\n");
	i = printf("org: [%-5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%-5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%05d], 123)"RESET"\n");
	i = printf("org: [%05d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%05d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%05d], -123)"RESET"\n");
	i = printf("org: [%05d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%05d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.2d], 123)"RESET"\n");
	i = printf("org: [%.2d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.2d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.2d], -123)"RESET"\n");
	i = printf("org: [%.2d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.2d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.5d], 123)"RESET"\n");
	i = printf("org: [%.5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.5d], -123)"RESET"\n");
	i = printf("org: [%.5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%08.5d], 123)"RESET"\n");
	i = printf("org: [%08.5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%08.5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%08.5d], -123)"RESET"\n");
	i = printf("org: [%08.5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%08.5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.0d], 123)"RESET"\n");
	i = printf("org: [%.0d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.0d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.0d], 0)"RESET"\n");
	i = printf("org: [%.0d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.0d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.d], 123)"RESET"\n");
	i = printf("org: [%.d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.d], 0)"RESET"\n");
	i = printf("org: [%.d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.3d], 0)"RESET"\n");
	i = printf("org: [%.3d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.3d]", 0);
	printf("(i = %d)\n\n", i);
}

void test_u(void)
{
	int i;
	printf(BOLD"printf([%%u], 255)"RESET"\n");
	i = printf("org: [%u]", 255);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%u]", 255);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%u], UINT_MAX)"RESET"\n");
	i = printf("org: [%u]", UINT_MAX);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%u]", UINT_MAX);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.3u], 0)"RESET"\n");
	i = printf("org: [%.3u]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.3u]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.u], 0)"RESET"\n");
	i = printf("org: [%.u]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.u]", 0);
	printf("(i = %d)\n\n", i);
}

void test_x(void)
{
	int i;
	printf(BOLD"printf([%%x], 255)"RESET"\n");
	i = printf("org: [%x]", 255);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%x]", 255);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%x], UINT_MAX)"RESET"\n");
	i = printf("org: [%x]", UINT_MAX);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%x]", UINT_MAX);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%x], 4886718345)"RESET"\n");
	i = printf("org: [%x]", 4886718345);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%x]", 4886718345);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%x], 11259375)"RESET"\n");
	i = printf("org: [%x]", 11259375);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%x]", 11259375);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.3x], 0)"RESET"\n");
	i = printf("org: [%.3x]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.3x]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.x], 0)"RESET"\n");
	i = printf("org: [%.x]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.x]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%x], 0)"RESET"\n");
	i = printf("org: [%x]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%x]", 0);
	printf("(i = %d)\n\n", i);
}

void test_X(void)
{
	int i;
	printf(BOLD"printf([%%X], 255)"RESET"\n");
	i = printf("org: [%X]", 255);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%X]", 255);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%X], UINT_MAX)"RESET"\n");
	i = printf("org: [%X]", UINT_MAX);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%X]", UINT_MAX);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%X], 4886718345)"RESET"\n");
	i = printf("org: [%X]", 4886718345);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%X]", 4886718345);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%X], 11259375)"RESET"\n");
	i = printf("org: [%X]", 11259375);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%X]", 11259375);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.3X], 0)"RESET"\n");
	i = printf("org: [%.3X]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.3X]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.X], 0)"RESET"\n");
	i = printf("org: [%.X]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.X]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%X], 0)"RESET"\n");
	i = printf("org: [%X]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%X]", 0);
	printf("(i = %d)\n\n", i);
}

void test_p(void)
{
	int i;
	printf(BOLD"printf([%%p], &i)"RESET"\n");
	i = printf("org: [%p]", &i);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%p]", &i);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%20p], &i)"RESET"\n");
	i = printf("org: [%20p]", &i);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%20p]", &i);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.20p], &i)"RESET"\n");
	i = printf("org: [%.20p]", &i);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.20p]", &i);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%p], NULL)"RESET"\n");
	i = printf("org: [%p]", NULL);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%p]", NULL);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%20p], NULL)"RESET"\n");
	i = printf("org: [%20p]", NULL);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%20p]", NULL);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.20p], NULL)"RESET"\n");
	i = printf("org: [%.20p]", NULL);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.20p]", NULL);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%0p], NULL)"RESET"\n");
	i = printf("org: [%0p]", NULL);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%0p]", NULL);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.0p], NULL)"RESET"\n");
	i = printf("org: [%.0p]", NULL);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.0p]", NULL);
	printf("(i = %d)\n\n", i);
}

void test_special(void)
{
	int i;
	printf(BOLD"printf([%%010.5s], \"123456\")"RESET"\n");
	i = printf("org: [%010.5s]", "123456");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%010.5s]", "123456");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%0*i], -7, -54)"RESET"\n");
	i = printf("org: [%0*i]", -7, -54);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%0*i]", -7, -54);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%0*d], -10)"RESET"\n");
	i = printf("org: [%0*d]", -10);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%0*d]", -10);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%0.*i], -1, -54)"RESET"\n");
	i = printf("org: [%0.*i]", -1, -54);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%0.*i]", -1, -54);
	printf("(i = %d)\n\n", i);
	// =============
	// printf(BOLD"printf([%%0.*i], INT_MAX + 1, -54)"RESET"\n");
	// i = printf("org: [%0.*i]", INT_MAX + 1, -54);
	// printf("(i = %d)\n", i);
	// i = ft_printf("ft : [%0.*i]", INT_MAX + 1, -54);
	// printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf(\"[%%d][%%i]\", 1, -1)"RESET"\n");
	i = printf("org: [%d][%i]", 1, -1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%d][%i]", 1, -1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf(\"[%%d][%%i][%%s][%%c][%%u][%%x][%%p][%%010.7d]\", 1, -1, \"many test\", 'A', UINT_MAX, 255, NULL, -12345)"RESET"\n");
	i = printf("org: [%d][%i][%s][%c][%u][%x][%p][%010.7d]", 1, -1, "many test", 'A', UINT_MAX, 255, NULL, -12345);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%d][%i][%s][%c][%u][%x][%p][%010.7d]", 1, -1, "many test", 'A', UINT_MAX, 255, NULL, -12345);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%0-*.-07d], -54, 3)"RESET"\n");
	i = printf("org: [%0-*.-07d]", -54, 3);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%0-*.-07d]", -54, 3);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%----10d], -54)"RESET"\n");
	i = printf("org: [%----10d]", -54);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%----10d]", -54);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.   ----10d], -54)"RESET"\n");
	i = printf("org: [%.   ----10d]", -54);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.   ----10d]", -54);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%.10.20d], -54)"RESET"\n");
	i = printf("org: [%.10.20d]", -54);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%.10.20d]", -54);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%      ~bbb], -54)"RESET"\n");
	i = printf("org: [%      ~bbb]", -54);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%      ~bbb]", -54);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%      ~10dbbb], -54)"RESET"\n");
	i = printf("org: [%      ~10dbbb]", -54);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%      ~10dbbb]", -54);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%      ], -54)"RESET"\n");
	i = printf("org: [%      ]", -54);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%      ]", -54);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% *.5i], 4, 42)"RESET"\n");
	i = printf("org: [% *.5i]", 4, 42);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% *.5i]", 4, 42);
	printf("(i = %d)\n\n", i);
}

void test_bonus(void)
{
	int i;
	int d = 0;
	printf(BOLD"printf(\"[%%n] => %%d\", &d, d)"RESET"\n");
	i = printf("org: [%n]", &d);
	printf(" => %d ", d);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%n]", &d);
	printf(" => %d ", d);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%f], 0.123)"RESET"\n");
	i = printf("org: [%f]", 0.123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%f]", 0.123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%10.3f], 0.123)"RESET"\n");
	i = printf("org: [%10.3f]", 0.123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%10.3f]", 0.123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%e], 123)"RESET"\n");
	i = printf("org: [%e]", 123.0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%e]", 123.0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%e], 0.0/0.0)"RESET"\n");
	i = printf("org: [%e]", 0.0/0.0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%e]", 0.0/0.0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%10e], 1.0/0.0)"RESET"\n");
	i = printf("org: [%10e]", 1.0/0.0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%10e]", 1.0/0.0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%g], 123.4)"RESET"\n");
	i = printf("org: [%g]", 123.4);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%g]", 123.4);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%g], 5678.0)"RESET"\n");
	i = printf("org: [%g]", 5678.0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%g]", 5678.0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%g], 1000000.0)"RESET"\n");
	i = printf("org: [%g]", 1000000.0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%g]", 1000000.0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%ld], LONG_MAX+1)"RESET"\n");
	i = printf("org: [%ld]", LONG_MAX+1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%ld]", LONG_MAX+1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%lld], LLONG_MAX+1)"RESET"\n");
	i = printf("org: [%lld]", LLONG_MAX+1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%lld]", LLONG_MAX+1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%hd], SHRT_MAX+1)"RESET"\n");
	i = printf("org: [%hd]", SHRT_MAX+1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%hd]", SHRT_MAX+1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%hhd], CHAR_MAX+1)"RESET"\n");
	i = printf("org: [%hhd]", CHAR_MAX+1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%hhd]", CHAR_MAX+1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%ls], L\"\xA1\")"RESET"\n");
	i = printf("org: [%ls]", L"\xA1");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%ls]", L"\xA1");
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% d], 123)"RESET"\n");
	i = printf("org: [% d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+d], 123)"RESET"\n");
	i = printf("org: [%+d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#x], 255)"RESET"\n");
	i = printf("org: [%#x]", 255);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#x]", 255);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#.e], 10.0)"RESET"\n");
	i = printf("org: [%#.e]", 10.0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#.e]", 10.0);
	printf("(i = %d)\n\n", i);
	// =============
}

void test_plus(void)
{
	int i;
	printf(BOLD"printf([%%+d], 123)"RESET"\n");
	i = printf("org: [%+d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+d], -123)"RESET"\n");
	i = printf("org: [%+d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+d], INT_MAX)"RESET"\n");
	i = printf("org: [%+d]", INT_MAX);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+d]", INT_MAX);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+d], INT_MIN)"RESET"\n");
	i = printf("org: [%+d]", INT_MIN);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+d]", INT_MIN);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+d], INT_MAX + 1)"RESET"\n");
	i = printf("org: [%+d]", INT_MAX + 1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+d]", INT_MAX + 1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+d], INT_MIN - 1)"RESET"\n");
	i = printf("org: [%+d]", INT_MIN - 1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+d]", INT_MIN - 1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+5d], 123)"RESET"\n");
	i = printf("org: [%+5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+5d], -123)"RESET"\n");
	i = printf("org: [%+5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+-5d], 123)"RESET"\n");
	i = printf("org: [%+-5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+-5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+-5d], -123)"RESET"\n");
	i = printf("org: [%+-5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+-5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+05d], 123)"RESET"\n");
	i = printf("org: [%+05d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+05d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+05d], -123)"RESET"\n");
	i = printf("org: [%+05d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+05d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+05d], 0)"RESET"\n");
	i = printf("org: [%+05d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+05d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+.2d], 123)"RESET"\n");
	i = printf("org: [%+.2d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+.2d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+.2d], -123)"RESET"\n");
	i = printf("org: [%+.2d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+.2d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+.5d], 123)"RESET"\n");
	i = printf("org: [%+.5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+.5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+.5d], -123)"RESET"\n");
	i = printf("org: [%+.5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+.5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+08.5d], 123)"RESET"\n");
	i = printf("org: [%+08.5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+08.5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+08.5d], -123)"RESET"\n");
	i = printf("org: [%+08.5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+08.5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+.0d], 123)"RESET"\n");
	i = printf("org: [%+.0d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+.0d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+.0d], 0)"RESET"\n");
	i = printf("org: [%+.0d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+.0d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+.d], 123)"RESET"\n");
	i = printf("org: [%+.d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+.d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+.d], 0)"RESET"\n");
	i = printf("org: [%+.d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+.d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+.3d], 0)"RESET"\n");
	i = printf("org: [%+.3d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+.3d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+d], 0)"RESET"\n");
	i = printf("org: [%+d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+u], 255)"RESET"\n");
	i = printf("org: [%+u]", 255);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+u]", 255);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+x], 255)"RESET"\n");
	i = printf("org: [%+x]", 255);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+x]", 255);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%+s], \"test\")"RESET"\n");
	i = printf("org: [%+s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%+s]", "test");
	printf("(i = %d)\n\n", i);
}

void test_space(void)
{
	int i;
	printf(BOLD"printf([%% d], 123)"RESET"\n");
	i = printf("org: [% d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% d], -123)"RESET"\n");
	i = printf("org: [% d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% d], INT_MAX)"RESET"\n");
	i = printf("org: [% d]", INT_MAX);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% d]", INT_MAX);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% d], INT_MIN)"RESET"\n");
	i = printf("org: [% d]", INT_MIN);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% d]", INT_MIN);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% d], INT_MAX + 1)"RESET"\n");
	i = printf("org: [% d]", INT_MAX + 1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% d]", INT_MAX + 1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% d], INT_MIN - 1)"RESET"\n");
	i = printf("org: [% d]", INT_MIN - 1);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% d]", INT_MIN - 1);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% 5d], 123)"RESET"\n");
	i = printf("org: [% 5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% 5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% 5d], -123)"RESET"\n");
	i = printf("org: [% 5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% 5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% -5d], 123)"RESET"\n");
	i = printf("org: [% -5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% -5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% -5d], -123)"RESET"\n");
	i = printf("org: [% -5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% -5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% 05d], 123)"RESET"\n");
	i = printf("org: [% 05d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% 05d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% 05d], -123)"RESET"\n");
	i = printf("org: [% 05d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% 05d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% 05d], 0)"RESET"\n");
	i = printf("org: [% 05d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% 05d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% .2d], 123)"RESET"\n");
	i = printf("org: [% .2d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% .2d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% .2d], -123)"RESET"\n");
	i = printf("org: [% .2d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% .2d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% .5d], 123)"RESET"\n");
	i = printf("org: [% .5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% .5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% .5d], -123)"RESET"\n");
	i = printf("org: [% .5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% .5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% 08.5d], 123)"RESET"\n");
	i = printf("org: [% 08.5d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% 08.5d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% 08.5d], -123)"RESET"\n");
	i = printf("org: [% 08.5d]", -123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% 08.5d]", -123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% .0d], 123)"RESET"\n");
	i = printf("org: [% .0d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% .0d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% .0d], 0)"RESET"\n");
	i = printf("org: [% .0d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% .0d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% .d], 123)"RESET"\n");
	i = printf("org: [% .d]", 123);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% .d]", 123);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% .d], 0)"RESET"\n");
	i = printf("org: [% .d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% .d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% .3d], 0)"RESET"\n");
	i = printf("org: [% .3d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% .3d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% d], 0)"RESET"\n");
	i = printf("org: [% d]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% d]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% u], 255)"RESET"\n");
	i = printf("org: [% u]", 255);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% u]", 255);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% x], 255)"RESET"\n");
	i = printf("org: [% x]", 255);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% x]", 255);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%% s], \"test\")"RESET"\n");
	i = printf("org: [% s]", "test");
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [% s]", "test");
	printf("(i = %d)\n\n", i);
}

void test_hash(void)
{
	int i;
	printf(BOLD"printf([%%#x], 255)"RESET"\n");
	i = printf("org: [%#x]", 255);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#x]", 255);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#x], UINT_MAX)"RESET"\n");
	i = printf("org: [%#x]", UINT_MAX);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#x]", UINT_MAX);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#x], 4886718345)"RESET"\n");
	i = printf("org: [%#x]", 4886718345);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#x]", 4886718345);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#x], 11259375)"RESET"\n");
	i = printf("org: [%#x]", 11259375);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#x]", 11259375);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#.3x], 0)"RESET"\n");
	i = printf("org: [%#.3x]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#.3x]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#.x], 0)"RESET"\n");
	i = printf("org: [%#.x]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#.x]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#x], 0)"RESET"\n");
	i = printf("org: [%#x]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#x]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	// =============
	printf(BOLD"printf([%%#X], 255)"RESET"\n");
	i = printf("org: [%#X]", 255);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#X]", 255);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#X], UINT_MAX)"RESET"\n");
	i = printf("org: [%#X]", UINT_MAX);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#X]", UINT_MAX);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#X], 4886718345)"RESET"\n");
	i = printf("org: [%#X]", 4886718345);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#X]", 4886718345);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#X], 11259375)"RESET"\n");
	i = printf("org: [%#X]", 11259375);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#X]", 11259375);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#.3X], 0)"RESET"\n");
	i = printf("org: [%#.3X]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#.3X]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#.X], 0)"RESET"\n");
	i = printf("org: [%#.X]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#.X]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#X], 0)"RESET"\n");
	i = printf("org: [%#X]", 0);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#X]", 0);
	printf("(i = %d)\n\n", i);
	// =============
	// =============
	printf(BOLD"printf([%%#p], &i)"RESET"\n");
	i = printf("org: [%#p]", &i);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#p]", &i);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#20p], &i)"RESET"\n");
	i = printf("org: [%#20p]", &i);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#20p]", &i);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#.20p], &i)"RESET"\n");
	i = printf("org: [%#.20p]", &i);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#.20p]", &i);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#p], NULL)"RESET"\n");
	i = printf("org: [%#p]", NULL);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#p]", NULL);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#20p], NULL)"RESET"\n");
	i = printf("org: [%#20p]", NULL);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#20p]", NULL);
	printf("(i = %d)\n\n", i);
	// =============
	printf(BOLD"printf([%%#.20p], NULL)"RESET"\n");
	i = printf("org: [%#.20p]", NULL);
	printf("(i = %d)\n", i);
	i = ft_printf("ft : [%#.20p]", NULL);
	printf("(i = %d)\n\n", i);
}

int main (void)
{
	printf(BOLD"=====================\n");
	printf("test %%%%\n");
	printf("====================="RESET"\n");
	test_percent();

	printf(BOLD"=====================\n");
	printf("test %%c\n");
	printf("====================="RESET"\n");
	test_c();

	printf(BOLD"=====================\n");
	printf("test %%s\n");
	printf("====================="RESET"\n");
	test_s();

	printf(BOLD"=====================\n");
	printf("test %%d\n");
	printf("====================="RESET"\n");
	test_d();

	printf(BOLD"=====================\n");
	printf("test %%u\n");
	printf("====================="RESET"\n");
	test_u();

	printf(BOLD"=====================\n");
	printf("test %%x\n");
	printf("====================="RESET"\n");
	test_x();

	printf(BOLD"=====================\n");
	printf("test %%X\n");
	printf("====================="RESET"\n");
	test_X();

	printf(BOLD"=====================\n");
	printf("test %%p\n");
	printf("====================="RESET"\n");
	test_p();

	printf(BOLD"=====================\n");
	printf("test special\n");
	printf("====================="RESET"\n");
	test_special();

	printf(BOLD"=====================\n");
	printf("test bonus\n");
	printf("====================="RESET"\n");
	test_bonus();

	printf(BOLD"=====================\n");
	printf("test plus\n");
	printf("====================="RESET"\n");
	test_plus();

	printf(BOLD"=====================\n");
	printf("test space\n");
	printf("====================="RESET"\n");
	test_space();

	printf(BOLD"=====================\n");
	printf("test hash\n");
	printf("====================="RESET"\n");
	test_hash();

	printf("\n↓leakcheck\n");
	while(1);
}
