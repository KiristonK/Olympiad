 //Olimp(test).cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"

using namespace std;

/*level 1 (1)*/
//int simple_true(int n) {
//
//	int i, sq, num;
//
//	if (n % 2 == 0) { return 0; }
//	sq = (int)sqrt(n);
//	for (i = 3; i <= sq; i++) {
//		if ((n%i) == 0) { return 0; }
//	}
//	num = n;
//	return n;
//
//}
//
//int main()
//{
//	setlocale(LC_CTYPE, "ukrainian");
//	int m, n, d = 0;
//	cout << "Введiть граничнi значення для обчислень (2 <= M <= N <= 300000) :";
//	cin >> m >> n;
//	if (m == 2)
//	cout << "2 ";
//	for (int i = m; i <= n; i++) {
//			if (simple_true(i) != 0) cout << simple_true(i) << " ";
//			if (simple_true(i) == 0) d++;
//	}
//	if (d == n - m + 1) cout << "Простих чисел немає !\n";
//    return 0;
//}

/*2*/
//int main() {
//	int n, nd, nd1, nc = 0, nc1 = 0, c = 0, k =0;
//	cout << "Enter number : ";
//	cin >> n;
//	for (int i = 1; i < n; i++) {
//		for (int j = 1; j < n; j++) {
//			nd = n / i;
//			nd1 = n / j;
//			if (nc != nd && nc1 != nd1) {
//				if (nd * nd + nd1 * nd1 == n) {
//					cout << "A number can be written as the sum of two squares of numbers\n";
//					cout << nd << " " << nd1 << endl;
//					nc = nd;
//					nc1 = nd1;
//					if (nc == nd && nc1 == nd1) break;
//				}
//			}
//			else break;
//		}
//		if (nd * nd + nd1 * nd1 != n) c++;
//		if (nd * nd + nd1 * nd1 != n) k++;
//		if (c == n - 1 && k == n - 1) cout << "No such numbers :(\n";
//	}
//	return 0;
//}

/*3*/
//int main() {
//	int a;
//	cin >> a;
//	int b, c, d;
//	for (int i = 100; i < 1000; i++) {
//		b = i % 10;
//		c = i % 100 / 10;
//		d = i / 100;
//		if (d + b + c == a) cout << "a = " << b + c + d << " = " << b << " + " << c << " + " << d << endl;
//	}
//
//	return 0;
//}

/*4*/
//int main() {
//	srand(time(NULL));
//	int arr[10][10], min[10];
//	int minim, max, maxid;
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			arr[i][j] = rand() % 100 + 1;
//		}
//	}
//	cout << "\n";
//	for (int i = 0; i < 10; i++) {
//		minim = arr[i][0];
//		for (int j = 0; j < 9; j++) {
//			if (minim > arr[i][j + 1]) {
//				minim = arr[i][j + 1];
//			}
//			min[i] = minim;
//		}
//	}
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			cout << arr[i][j] << "\t";
//		}
//		cout << " min : " << min[i];
//		cout << endl << endl << endl;
//	}
//	max = min[0];
//	for (int i = 0; i < 9; i++) {
//		if (max < min[i + 1]) {
//			max = min[i + 1];
//			maxid = i + 1;
//		}
//	}
//	cout << endl << max << " No str :" << maxid + 1 << endl;
//	return 0;
//}

/*5*/
//int main() {
//	const int n = 10;
//	int arr[n];
//	int k = 0;
//	srand(time(NULL));
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 3;
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = i; j < n; j++) {
//			if (arr[j] == 1) {
//				swap(arr[i], arr[j]);
//				k++;
//			}
//		}
//	}
//	for (int i = k; i < n; i++) {
//		for (int j = i; j < n; j++) {
//			if (arr[j] == 0) {
//				swap(arr[i], arr[j]);
//				k++;
//			}
//		}
//	}
//	for (int i = k; i < n; i++) {
//		for (int j = i; j < n; j++) {
//			if (arr[j] == 0) {
//				swap(arr[i], arr[j]);
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << "  ";
//	}
//	return 0;
//}

/*6*/
//int main() {
//	int m, n, m1, n1;
//	cin >> m >> n;
//
//	return 0;
//}

/*7*/
//int main() {
//	srand(time(NULL));
//	int arr[10][10];
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			arr[i][j] = rand() % 20;
//		}
//	}
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			for (int k = j; k < 10; k++) {
//				if (arr[i][j] > arr[i][k]) swap(arr[i][j], arr[i][k]);
//			}
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl << endl << endl;
//	}
//	return 0;
//}

/*2 level (1)*/
//int main() {
//
//long long int m, n, d = 0, dm = 0;
//
//	cin >> m >> n;
//
//	d = m / n;
//	dm = m % n;
//	cout << d << endl << dm;
//
//	return 0;
//}

/*3*/
//int main() {
//	char znak[4] = { '+', '-', '*', '/' };
//	int y;
//	int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
//	int sol[120];
//	int k = 0;
//
//	/*for (int i = 0; i < 4; i++) {
//		if (znak[i] = '+') {
//			c = a + i + a + i + 1;
//		}
//		else if () {}
//
//	}*/
//	for (int i = 0; i < 4; i++) {
//		if (i == 0) sol[k] = a + b;
//		if (i == 1) sol[k] = a - b;
//		if (i == 2) sol[k] = a * b;
//		if (i == 3) sol[k] = a / b;
//		k++;
//	}
//	
//	return 0;
//}
//((((1?2)?3)?4)?5)?6  

/*4*/
//int N;
//
//int func(int n) {
//	int f;
//	if (n == 0) f = 0;
//	if (n == 1) f = 1;
//	if (n == 2 * N) f = N;
//	if (n == 2 * N + 1) f = n + n + 1;
//	return f;
//}
//int main() {
//	cin >> N;
//	cout << "n = 2n \t:" << func(2 * N) << endl;
//	cout << "n = 2n+1:" << func(2 * N + 1) << endl;
//	cout << "n = 0 \t:" << func(N = 0) << endl;
//	cout << "n = 1 \t:" << func(N = 1) << endl;
//	return 0;
//}

/*5*/
//int main() {
//	int a, b, c, d;
//
//	for (int i = 1000; i < 10000; i++) {
//		a = i / 1000;
//		b = i / 100 % 10;
//		c = i / 10 % 10;
//		d = i % 10;
//		if (a != b && a != c && a != d && b != c && b != d && c != d) cout << i << "\t";
//	}
//	return 0;
//}

/*6*/
//int main() {
//	srand(time(NULL));
//	const int size = 50;
//	int arr[size];
//	int k = 0, a = 0;
//	cout << endl;
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 2;
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++) {
//		if (arr[i] == 0) {
//			k++;
//		}
//		else k = 0;
//
//		if (k > a) {
//			a = k;
//		}
//	}
//	cout << endl << a << endl;
//	return 0;
//}

/*7*/
//int main() {
//	int k = 2;
//	for (int i = 1; i < 8; i++) {
//		for (int j = 2; j < 8; j++) {
//			if (i == 1 && i != j || i != j && j % i != 0 && i % j != 0 && i < j)cout << i << "/" << j << endl;
//			k++;
//		}
//		cout << endl;
//	}
//}

/*level 3 (1)*/

//int main() {
//
//	const int n = 100;
//	int n;
//	do {
//		cout << "n = ";
//		cin >> n;
//	} while (n < 1 || n < n);
//
//	int a[n][n];
//	int k = 1;
//	int i = 0;
//	int j = 0;
//	while (k <= n * n) {
//
//		a[i][j] = k;
//		if (i <= j + 1 && i + j < n - 1)
//			++j;
//		else if (i < j && i + j >= n - 1)
//			++i;
//		else if (i >= j && i + j > n - 1)
//			--j;
//		else
//			--i;
//		++k;
//	}
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j)
//			cout << setw(4) << a[i][j];
//		cout << endl << endl;
//	}
//}

/*4*/

int N;

void vokrug(char vir[], int type);
void right(char vir[], int type);
int main()
{
	char str[20];
	cin >> N;
	str[0] = '\0';
	if (N == 2) cout << "()" << endl << "[]" << endl;
	else
	{
		right(str, 0);
		right(str, 1);
	}
	return 0;
}

void vokrug(char vir[], int type)
{
	char str[20];
	int n = strlen(vir), i;
	if (n == N) return;
	for (i = 0; i<n; i++) str[i + 1] = vir[i];
	if (!type) str[0] = '(', str[n + 1] = ')', str[n + 2] = '\0';
	else str[0] = '[', str[n + 1] = ']', str[n + 2] = '\0';
	if (n == N - 2) cout << str << endl;
	vokrug(str, 0);
	vokrug(str, 1);
	right(str, 0);
	right(str, 1);
}

void right(char vir[], int type)
{
	char str[20];
	int n = strlen(vir), i;
	if (n == N) return;
	for (i = 0; i<n; i++) str[i] = vir[i];
	if (!type) str[n] = '(', str[n + 1] = ')', str[n + 2] = '\0';
	else str[n] = '[', str[n + 1] = ']', str[n + 2] = '\0';
	if (n == N - 2) cout << str << endl;
	vokrug(str, 0);
	vokrug(str, 1);
	right(str, 0);
	right(str, 1);
}

void pr(char *mas, int N)
{
	for (int i = 0; i<N; i++)
	{
		cout << mas[i];
	}
	cout << endl;
}

void rec(char *mas, int j, int N, int temp1, int temp2)
{
	if (j == N)
		pr(mas, N);
	else
	{
		int t1 = 0, t2 = 0, i, fl = 1;
		for (i = j - 1;fl && i >= 0; i--)
		{
			if (mas[i] == '(') t1--;
			if (mas[i] == '[') t2--;
			if (mas[i] == ')') t1++;
			if (mas[i] == ']') t2++;
			if (t1<0 || t2<0)
				fl = 0;
		}
		if (fl)
		{
			mas[j] = '(';
			rec(mas, j + 1, N, temp1 + 1, temp2);
			mas[j] = '[';
			rec(mas, j + 1, N, temp1, temp2 + 1);
		}
		else
		{
			if (t1<0)
			{
				mas[j] = ')';
				rec(mas, j + 1, N, temp1, temp2);
				if (temp1 + temp2<N / 2)
				{
					mas[j] = '(';
					rec(mas, j + 1, N, temp1 + 1, temp2);
					mas[j] = '[';
					rec(mas, j + 1, N, temp1, temp2 + 1);
				}
			}
			if (t2<0)
			{
				mas[j] = ']';
				rec(mas, j + 1, N, temp1, temp2);
				if (temp1 + temp2<N / 2)
				{
					mas[j] = '(';
					rec(mas, j + 1, N, temp1 + 1, temp2);
					mas[j] = '[';
					rec(mas, j + 1, N, temp1, temp2 + 1);
				}
			}
		}
	}
}

int main() {
	int N;
	char *mas;
	cin >> N;
	mas = new char[N];
	mas[0] = '(';
	rec(mas, 1, N, 1, 0);
	mas[0] = '[';
	rec(mas, 1, N, 0, 1);
	return 0;
}

/*12*/
//int main() {
//	int dr1[2][1], dr2[2][1];
//	char ch, m, k;
//	cin >> dr1[0][0] >> ch >> dr1[1][0] >> ch >> dr2[0][0] >> ch >> dr2[1][0];
//	cout << dr1[0][0] * dr2[0][0] << "/" << dr1[1][0] * dr2[1][0] << endl;
//	if (dr1[0][0] * dr2[0][0] == dr1[1][0] * dr2[1][0]) cout << "Drib " << dr1[0][0] * dr2[0][0] << "/" << dr1[1][0] * dr2[1][0] << " = 1\n";
//
//	if (dr1[0][0] * dr2[0][0] < dr1[1][0] * dr2[1][0]) {
//		m = dr1[0][0] * dr2[0][0];
//		for (int i = 2; i <= m; i++)
//			if ((dr1[0][0] * dr2[0][0]) % i == 0 && (dr1[1][0] * dr2[1][0]) % i == 0) {
//				cout << "Etapy skorochennya ((" << dr1[0][0] * dr2[0][0] << "/" << dr1[1][0] * dr2[1][0] << ")/" << i << "):" << (dr1[0][0] * dr2[0][0]) / i << "/" << (dr1[1][0] * dr2[1][0]) / i << endl;
//				if (dr1[0][0] * dr2[0][0] == dr1[1][0] * dr2[1][0]) cout << "Drib " << dr1[0][0] * dr2[0][0] << "/" << dr1[1][0] * dr2[1][0] << " = 1\n";
//			}
//	}
//	
//	if (dr1[0][0] * dr2[0][0] > dr1[1][0] * dr2[1][0]) {
//		m = dr1[1][0] * dr2[1][0];
//		for (int i = 2; i <= m; i++)
//			if ((dr1[0][0] * dr2[0][0]) % i == 0 && (dr1[1][0] * dr2[1][0]) % i == 0) {
//				cout << "Etapy skorochennya ((" << dr1[0][0] * dr2[0][0] << "/" << dr1[1][0] * dr2[1][0] << ")/" << i << "):" << (dr1[0][0] * dr2[0][0]) / i << "/" << (dr1[1][0] * dr2[1][0]) / i << endl;
//				if (dr1[0][0] * dr2[0][0] == dr1[1][0] * dr2[1][0]) cout << "Drib " << dr1[0][0] * dr2[0][0] << "/" << dr1[1][0] * dr2[1][0] << " = 1\n";
//			}
//	}
//	return 0; 
//}

/*17*/

//int main() {
//	char **mass = new char *[20];
//
//	int k;
//
//	cout << "Vvedt kilkist sliv v texti :";
//	cin >> k;
//
//	for (int i = 0; i < k;i++) {
//		mass[i] = new char[30];
//		cin >> mass[i];
//	}
//	for (int i = 0; i < k; i++) {
//		for (int j = i + 1; j < k; j++)
//			if (strcmp(mass[i], mass[j]) > 0) swap(mass[i], mass[j]);
//	}
//	cout << endl << "Slova z velykoyi litery zavzdy pershi! \n\n";
//	for (int i = 0; i < k; i++) {
//		cout << mass[i] << " ";
//	}
//
//	return 0;
//}


/**23*/
//int main() {
//	srand(time(NULL));
//	int weight[30], cost[30], max[30000];
//	int w = 0, c = 0, n;
//	for (int i = 0; i < 30; i++) {
//		w += 1;
//		weight[i] = w;
//		cost[i] = rand() % 50 + 10;
//		cout << "wieght : " << weight[i] << "; cost (" << cost[i] << ")\n";
//	}
//	cout << endl;
//	w = 0;
//	c = 0;
//	for (int i = 0; i < 30000; i++) {
//		do {
//			n = rand() % 30;
//			w += weight[n];
//			c += cost[n];
//		} while (w < 30);
//		max[i] = c;
//		w = 0;
//		c = 0;
//	}
//	int maxi = 0;
//	for (int i = 0; i < 30000; i++) {
//		if (maxi < max[i]) maxi = max[i];
//	}
//	cout << endl << "max cost : "<< maxi << endl;
//	return 0;
//}

/*7*/

//int n, sum[100];
//void print_terms(int left, int min = 0, int i = 0) {
//	if (left < 0 || min == n)
//		return;
//	sum[i] = min;
//	if (min != 0)
//	{
//		print_terms(left - min, min, i + 1);
//	}
//	print_terms(left - 1, min + 1, i);
//	if (left == 0)
//	{
//		for (int j = 0; j <= i; ++j)
//			cout << sum[j] << (j != i ? '+' : '\n');
//	}
//
//}
//int main() {
//	cin >> n;
//	print_terms(n);
//}

/*19*/
//int main() {
//	char word1[20], word2[20];
//	cin >> word1 >> word2;
//	char tmp[20];
//
//	for (int i = 0; i < strlen(word1); i++) {
//		for (int j = 0; j < strlen(word2); j++) {
//			if (word1[i] == word2[j]) tmp[i] = word2[i];
//		}
//	}
//	cout << endl;
//	int k = 0;
//	for (int i = 0; i < strlen(word2); i++) {
//			if (tmp[i] == word2[i]) k++;
//	}
//	
//	if (k < strlen(word2)) cout << "Not able\n";
//	if (k == strlen(word2)) cout << "Able" << endl;
//}

/*got_var*/
/*Вар 1*/
/*2*/
//int main() {
//	int m[20];
//	
//	srand(time(NULL));
//
//	for (int i = 0; i < 20; i++) {
//		m[i] = rand() % (-10) + 10;
//		cout << m[i] << " ";
//	}
//	cout << endl;
//	int k = 0; int s = -1;
//	int mk[20];
//	cout << endl;
//	for (int i = 0; i < 18; i++) {
//		if (m[i] < m[i + 1] && m[i + 1] > m[i + 2]) {
//			k+=1;
//			cout << m[i] << " " << m[i + 1]<< " " << m[i + 2] << setw(5);
//			i += 2;
//		}
//		else {
//			s += 1;
//			mk[s] = k;
//			k = 0;
//		}
//	}
//	k = mk[0];
//	cout << setw(0) << endl;
//	for (int i = 0; i < 20; i++) {
//		if (k < mk[i + 1]) k = mk[i + 1];
//	}
//	cout << setw(0) << endl << k << endl;
//	return 0;
//}


/*Вар2*/
/*2*/

//int _tmain(int argc, _TCHAR* argv[])
//{
//	cout << "vvedite kol-vo chisel v tablice inversij: "; // вывода на экран
//	int kol = 0; // переменная для учета количества элементов в массиве
//	cin >> kol; // ввод с клавиатуры количества чисел в матрице инверсий
//	cout << "Vvedite cherez probel tablicy inversij: "; // вывод на экран
//	int *mas_in; // создание указателя для динамического массива
//	mas_in = new int(kol); // создание динамического массива размера kol
//	for (int i = 0;i < kol;i++) // цикл для ввода элементов динамического массива
//		cin >> mas_in[i]; // ввод с клавиатуры i элемента
//	cout << "Tablica inversij: "; // вывод на экран
//	for (int i = 0;i < kol;i++) //цикл для вывода динамического массива инверсий
//		cout << mas_in[i]; // вывод i элемента
//	cout << endl;    // вывод с новой строки
//	string strP = ""; // строка выходная
//	char chislo[2];    // для преобразования из числа в строку
//	for (int i = 0;i < kol;i++) {// цикл перебора всех элементов матрицы инверсий
//		// для последовательности 1 ... 9 , начинаем с 9
//		if (mas_in[kol - i - 1] == 0) // если элемент матрицы инверсий равен 0, то сдвигаем влево
//			strP = _itoa(kol - i, chislo, 10) + strP; // переводим в строку номер порядковый kol-i и прибавляем всю остальную строку
//		else // если элемент матрицы инверсий не нулевой, то на n позиций надо передвинуть число в право от начала строки
//			if (strP.length() > mas_in[kol - i - 1]) // если длина выходной строки больше, то мы может вставить внутрь строки число
//				strP.insert(mas_in[kol - i - 1], _itoa(kol - i, chislo, 10));    //вставляем в строку на mas_in[kol-i-1] вправо
//			else
//				strP += _itoa(kol - i, chislo, 10);// иначе просто прибавляем к концу строки
//	};
//	cout << "Tablica perestanovok: " << strP << endl;// выводим нашу строку, в которой подряд идет последовательность перестановок
//		system("PAUSE"); // пауза для нажатия Enter
//		return 0;
//}


/*3*/

//int main() {
//	int n, x, y, x1, y1;
//	cout << "Vvedit kilkist pryamokutnkiv : ";
//	cin >> n;
//	int d = 0, d1 = 0;
//	double s;
//	int pk[30][2];
//	int k;
//	k = 30 - n;
//	pk[(30 - k) + 1][2];
//
//	for (int i = 0; i < n*2; i++) {
//		cout << "Vvedit x,y pryamokutnyka : \n(";
//		cin >> x >> y;
//		cout << ")\n";
//		pk[i][0] = x;
//		pk[i][1] = y;
//		}
//
//	for (int i = 0; i <= n + 1; i++) {
//		for (int j = 0; j < 2; j++) {
//			cout << pk[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "d:\n";
//	for (int i = 0; i <= n; i++) {
//		d += pk[i][0] * pk[i + 1][1];
//		cout << pk[i][0] << " * " << pk[i + 1][1] << "=" << d << endl;
//	}
//	cout << "d1:\n";
//	for (int i = n + 1; i > 0; i--) {
//		d1 += pk[i][0] * pk[i - 1][1];
//		cout << pk[i][0] << " * " << pk[i - 1][1] << "=" << d1 << endl;
//	}
//
//	s = abs(d - d1) / 2;
//	cout << "S = " << s;
//
//	return 0;
//}