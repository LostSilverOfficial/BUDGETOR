#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int budget_total;
float food, wife, husb, kids, trans, hkeep, divide, entert, save, budget_used; /* значения переменных
																			   узнаете, когда ваш бюджет
																			   будет рассчитан... */
main ()
{
	setlocale (LC_ALL, "Rus");
	system ("Color 0A");
	printf ("БЮДЖЕТОР v1.0\n");
	printf ("(c) Lost Silver, 2017 г.\n");
	printf ("\n");
	printf ("Введите сумму семейного бюджета: \n");
	scanf ("%d", &budget_total);
	printf ("--------------------------------\n");
	food=(budget_total/100)*22.75;
	hkeep=(budget_total/100)*12.5;
	wife=(budget_total/100)*12.7;
	kids=(budget_total/100)*20;
	entert=(budget_total/100)*11.26;
	trans=(budget_total/100)*2.42;
	husb=(budget_total/100)*1.46;
	save=(budget_total/100)*5;
	budget_used=food+hkeep+wife+kids+entert+trans+husb+save; //а сюда мы вписываем распределённый бюджет
	divide=budget_total-budget_used; //распил бюджета
	printf ("\aРАСПРЕДЕЛЕНИЕ БЮДЖЕТА\n");
	printf ("Всего: %d\n", budget_total);
	printf ("Питание: %.2f (22.75%%)\n", food);
	printf ("Коммуналка: %.2f (12.5%%)\n", hkeep);
	printf ("На жену: %.2f (12.7%%)\n", wife);
	printf ("На детей: %.2f (20%%)\n", kids);
	printf ("Развлечения: %.2f (11.26%%)\n", entert);
	printf ("Транспорт: %.2f (2.42%%)\n", trans);
	printf ("На мужа: %.2f (1.46%%)\n", husb);
	printf ("Накопления: %.2f (5%%)\n", save);
	printf ("Распилить: %.2f (11.91%%)\n", divide);
	printf ("--------------------------------\n");
	printf ("Результат окончательный, обжалованию не подлежит!\n");
	printf ("НЕ ЗАБУДЬТЕ ПЕРЕПИСАТЬ РЕЗУЛЬТАТЫ РАСПРЕДЕЛЕНИЯ НА ОТДЕЛЬНЫЙ ЛИСТ/БЛАНК!\n");
	printf ("Для закрытия программы нажмите Enter\n");
	getchar ();
	getchar ();
}
