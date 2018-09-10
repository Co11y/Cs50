#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void) {
	int total_coins = 0;
	int used_coins = 0;
	int coin;
	float fake_money;
	do
	{
		fake_money = get_float("how many?:");
	} while (fake_money < 0);
	int money = round(fake_money * 100);
=======
	int money = fake_money * 100;
	int coins[4] = { 25, 10, 5, 1 };
	for (int i = 0; i < 4;) {
		coin = coins[i];
		while (money - coin >= 0) {
			used_coins++;
			money = money - coin;
		}
		printf("used\n");
		printf("%d shtuk\n", used_coins);
		printf("%d$\n", coin);
		total_coins = total_coins + used_coins;
		used_coins = 0;
		if (money == 0) {
			break;
		}
		i++;
	}
	printf("%d\n", total_coins);

}