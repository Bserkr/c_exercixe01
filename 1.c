#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

///*ת������*/
//unsigned D2B(int a[], unsigned d)
//{
//	int i = 0;
//	unsigned count = 0;
//	while (d)
//	{
//		a[i] = d % 2;
//		d = d / 2;
//		i++;
//		count++;
//	}
//	return count;
//}
//
///*�ж����*/
//void outPut(int b[], unsigned n)
//{
//	unsigned i, j, t;
//	int a[10];
//	for (i = 1; i < pow(2, n); i++)
//	{
//		printf("{");
//		t = D2B(a, i);
//		for (j = 0; j < t; j++)
//			if (a[j] == 1)
//				printf("%d ", b[j]);
//		printf("}\n");
//	}
//}
//
//int main() {
//	int b[] = { 1, 2, 11, 4, 5, 6, 7, 8, 9, 10 };
//	int n = sizeof(b) / sizeof(b[0]);
//	while (n)
//	{
//		printf("{}\n");
//		outPut(b, n);
//		scanf("%d", &n);
//	}
//	system("pause");
//	return 0;
//}

/*                     ָ�뺯��ʵ���ַ�����Сдת��             */                               
//char *ToLowerCase(char *str) {  // ����ָ������������
//	char *ret = str;
//	while (*str != '\0'){
//		if (*str >= 'A' && *str <= 'Z') {
//			*str = *str + 32;
//			str++;
//		}
//		else {
//			str++;
//		}
//	}
//	return ret;
//}
//
//int main() {
//	char str1[30];
//	printf("�������ַ���:\n");
//	gets(str1);
//	puts(str1);
//	char *str2;     // ���ں������ص�ַ������str2��Ҫָ������
//	str2 = ToLowerCase(str1);
//	printf("%s\n", str2);
//	system("pause");
//	return 0;
//}


/*                 ָ�뺯���ַ�������   */

//char *put(char *str) {
//	char *ret = str;
//	while (*str != '\0') {
//		printf("%c\n", *str);
//		str++;
//	}
//	return ret;
//}
//
//int main() {
//	char str1[30] = { "ghJFGHJKLhjk" };
//	// �������
//	put(str1);
//	system("pause");
//	return 0;
//} 



/*      ������Ԫ�������ƶ� K ��λ��      */

#define N 7
void Move_Arr(int A[], int num, int k) {   // ���鱻��ʽת����ָ��
	int temp = 0;
	int i, j;
	for (i = num; i <= k; i++) {  
		// ��������Ԫ��
		temp = A[i-1];
		A[i-1] = A[i];
		A [i] = temp;
	}
	return; // �޷���ֵ�� ��� return ��ʾ�ú���������
}

int main() {
	int num = 0;
	int k = 0;
	int A[N] = { 10,20,45,20,5,5,4 };
	// ��ӡ����
	for (int i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("������Ҫ�ƶ��ĵڼ���Ԫ�� num ���ƶ���λ�� k ��");
	scanf("%d%d", &num,&k);
	printf("\n���� num ��Ԫ���ƶ� k λ�Ľ��Ϊ��\n");
	Move_Arr(A, num, k); // �����ƶ�����
	// ��ӡ�ƶ��������
	for (int i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}



                  /*  ɾ������Ԫ�� */
//# define N 10
//int main() {
//	int i, j, k= 0;
//	int m = 0;
//	// ��������
//	int A[N] = { 0,5,5,8,5,5,4,5,7,10 };
//	printf("ɾ��ǰ������Ԫ��Ϊ��\n");
//	for (i = 0; i < N; i++) {
//		printf("%d ", A[i]);
//	}
//	// ָ��Ԫ��
//	printf("\n������Ҫɾ����Ԫ�أ�");
//	scanf("%d", &m);
//	// ɾ��
//	
//	for (i = 0; i < N; i++) {
//		if (A[i] == m) {
//			for (j = i; j < N; j++) {  
//				A[j] = A[j + 1];  // ɾ��һ����ÿ��Ԫ����ǰŲ��һ���ˡ�
//			}
//			k++;
//			i = 0;  // ���±���һ�Σ��Է��ظ����磻 1��5��5��5��5
//		}
//	}
//	printf("ɾ�����������ЧԪ�ظ���Ϊ��%d:\n", (N - k));
//	for (i = 0; i < (N - k); i++) {
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


                    /*��������򡢲��ҡ�����*/
//#define N 15
//// ð������
//void SortArr(int Arr[N]) {
//	int i, j;
//	int temp = 0;
//	for (i = 0; i < N - 1; i++) { // �Ƚ϶�����
//		for (j = 0; j < N - 1 - i; j++) {  // �Ƚ϶��ٴ�
//			if (Arr[j] > Arr[j + 1]) {
//				temp = Arr[j];
//				Arr[j] = Arr[j + 1];
//				Arr[j + 1] = temp;
//			}
//		}
//	}
//	return;
//}
//// ���ֲ���
//int Find_Arr(int a[N], int num) {
//	int left = 0;
//	int right = N - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (a[mid] > num) {
//			right = mid - 1;
//		}
//		else if (a[mid] < num){
//			left = mid + 1;
//		}
//		else if (a[mid] == num) {
//			return mid+1;
//		}
//	}
//	return 0;
//	// ѭ�������� ���� 0 ˵��û�и�Ԫ��ֵ��
//}
//int main() {
//	// ��������
//	int A[N] = { 1,2,20,5,85,4,23,
//		59,75,21,36,52,70,90,82 };
//	int B[N+1] = { 0 };
//	int i, num;
//	int M = 0;
//	int temp = 0;
//	// ��ӡ�������ЧԪ��
//	for (i = 0; i < N; i++) {
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	// ��������
//	SortArr(A);
//		// ��ӡ��С��������������
//	printf("�ɴ�С����");
//	for (i = 0; i < N; i++) {
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	// ��������
//	printf("������Ҫ���ҵ�Ԫ�أ�");
//	scanf("%d", &num);
//		// ��������ֵ
//	M = Find_Arr(A, num);
//	if (M != 0) {
//		printf("�ҵ��ˣ��ǵ�%d��Ԫ��\n", M);
//	}
//	else {
//			// ��δ����������� ��˳�����Ԫ��
//		for (i = 0; i < N; i++) {
//			B[i] = A[i];   // ����B[i]���һ��Ԫ��Ϊ��������
//		}
//		for (i = 0; i < N; i++) {
//			if (B[i] < num && B[i + 1] > num) {
//				for (int j = N; j > i; j--) {
//					B[j+1] = B[j];  //��Ԫ������ƶ�
//				}
//				B[i+1] = num;
//			}
//		 }
//		for (i = 0; i < N + 1; i++) {
//			printf("%d ", B[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}

                             /*  �����  */
//typedef int bool;   //����  bool ������������
//#define true (bool) 1;  // �淵�� true ʵ������ֵΪ 1
//#define false (bool) 0;  // �ٷ��� false ʵ������ֵΪ 0
//
//bool canContact(char *ransom, char *magazine) {
//	int i;
//	int k = 0;
//	int arr1[26];
//	int arr2[26];
//	int len1 = strlen(ransom);
//	int len2 = strlen(magazine);
//	for (i = 0; i < len1; i++) {
//		arr1[ransom[i] - 'a']++;
//	}
//	for (i = 0; i < len2; i++) {
//		arr2[magazine[i] - 'a']++;
//	}
//	for (i = 0; i < 26; i++) {
//		if (arr1[i] <= arr2[i]) {
//			k++;
//		}
//	}
//	if (k == 26) {
//		return true;
//	}
//	return false;
//}
//
//int main() {
//	char ransom[30];
//	char magazine[30];
//	printf("���� ransom :");
//	gets(ransom);
//	printf("\n���� magazine ��");
//	gets(magazine);
//	printf("ransom ��");
//	puts(ransom);
//	printf("\nmagazine ��");
//	puts(magazine);
//	// �ж� ransom �Ƿ������ magazine ���
//	if (canContact(ransom, magazine)) {
//		printf("true\n");
//	}
//	else {
//		printf("false\n");
//	}
//	system("pause");
//	return 0;
//}

                             /* ������ */

/*int main() {
	int i, k = 0;
	int A[] = { 2,0,2,0,2,0,2};
	int left = 0;
	int right = sizeof(A)/sizeof(A[0]);
	int len = sizeof(A) / sizeof(A[0]);
	 //���ԭ����
	printf("ԭ����");
	for (i = 0; i < len; i++) {
		printf("%d ", A[i]);
	}
	printf ("\n");
	// ��A���鵹��
	while (left < right) {
		if (A[left] == A[right - 1]) {
			left++;
			right--;
			k++;
		}
		else {
			k = 0;
			break;
		}
	}
	if (k) {
		printf("�ǻ�����\n");
	}
	else {
		printf("���ǻ�����\n");
	}
	system("pause");
	return 0;
} */

                         /* ͳ�Ƶ��ʸ���  */
/*int main() {
	int i, k = 0;
	char s[] = " ";
	for (i = 0; s[i] != '\0'; i++) {
		printf("%c", s[i]);
		if (s[0] == ' ') {
			k = 0;
		}
		else if (s[i] == ' ' && s[i + 1] != ' ' || s[i + 1] == '\0') {
			k++;
		}
	}
	printf("\n���ʸ���Ϊ��%d", k);
	system("pause");
	return 0;
}*/

                          /* ���һ�����ʳ��� */
/*int main() {
	int i, j = 0;
	char s[] = "fjk fgh jh fgh ";
	int len = strlen(s); // �ַ�������
	printf("�ַ�������Ϊ%d\n", len); 
	for (i = len - 1; s[i] != ' '; i--) {
		if (s[len - 1] == ' ') {
			j = 0;
		}
		else {
		
		}		j++;

	}
	printf("���һ�����ʳ���Ϊ%d", j);

	system("pause");
	return 0;
}*/

                         /* �ϲ� �� ��������*/

//
//int *Mester(int *A, int size01, int *B, int size02) {
//	int i,j ;
//	int temp = 0;
//	int *pTemp = malloc(size01 + size02); //����һ������Ϊ size01 + size02 �ĳ��ȿռ�
//	for (i = 0; i < size01; i++) {
//		pTemp[i] = A[i];
//	}
//	for (j = 0; j < size02; j++) {
//		pTemp[j + size01] = B[j];
//	}
//	// ����  ð������
//	for (i = 0; i < size01 + size02 - 1; i++) {
//		for (j = 0; j < size01 + size02 - 1 - i; j++) {
//			if (pTemp[j] > pTemp[j + 1]) {
//				temp = pTemp[j];
//				pTemp[j] = pTemp[j + 1];
//				pTemp[j + 1] = temp;
//			}
//		}
//	}
//
//	return pTemp;
//}
//
//int main() {
//	int i = 0;
//	int A[] = { 1,2,5,6,9,10 };
//	int B[] = { 5,6,7,8,9,10,12 };
//	int size01 = sizeof(A) / sizeof(A[0]);
//	int size02 = sizeof(B) / sizeof(B[0]);
//	int *p = Mester(A, size01, B, size02);
//	int n = size01 + size02;
//	printf("�ϲ��������Ϊ��\n");
//	for (i = 0; i < n; i++) {
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//
//
//	system("pause");
//	return 0;
//}


/*
int main() {
	int i = 0;
	int count = 0;
	int A[] = { 1, 2, 34,52,2};
	int size = sizeof(A) / sizeof(A[0]);
	int B[20] = { 0 };
	for (i = 0; i < size; i++) {
		B[A[i]]++;
	}
	for (i = 0; i < 20; i++) {
		if (B[i] >= 2) {
			count++;
		}
	}
	if (count) {
		printf("�ظ���\n");
	}
	else {
		printf("û�ظ�\n");
	}
	system("pause");
	return 0;
}
*/


//# define N 10
//
//int *sortArr(int *A) {
//	int i,j;
//	int temp = 0;
//	// ȡ����ֵ
//	for (i = 0; i < N; i++) {
//		if (A[i] < 0) {
//			A[i] = -A[i];
//		}
//	}
//	// ����
//	for (i = 0; i < N - 1; i++) {
//		for (j = 0; j < N - i - 1; j++) {
//			if (A[j] > A[j+1]) {
//				temp = A[j];
//				A[j] = A[j + 1];
//				A[j + 1] = temp;
//			}
//		}
//	}
//	// ƽ��
//	for (i = 0; i < N; i++) {
//		A[i] = A[i] * A[i];
//	}
//	return A;
//}
//
//int main() {
//	int i;
//	int *p;
//	int A[N] = { -10,-5,-2,-1,0,2,3,5,8,9 };
//	p = sortArr(A);
//	for (i = 0; i < N; i++) {
//		printf("%d ", *p);
//		p++;
//	}
//	system("pause");
//	return 0;
//}

                                  /*  day6 --5  ��ת��ĸ������ת���� */
//int main() {
//	int i = 0;
//	char temp = 0;
//	int left, right;
//	char str[] = "ab1Cdef6gh5k";
//	int len = 0;
//	len = strlen(str);
//	left = 0;
//	right = len - 1;
//	while (left <= right) {  //���Ҷ�����ĸʱ����
//		while (((str[left] >= 97 && str[left] <= 122) || (str[left] >= 65 && str[left] <= 90)) &&
//			((str[right] >= 97 && str[right] <= 122) || (str[right] >= 65 && str[right] <= 90))) {
//			if (left < right) {   //����ཻ��һ��
//				temp = str[left];
//				str[left] = str[right];
//				str[right] = temp;
//			}
//			left++;
//			right--;
//		}
//		while (str[left] >= 48 && str[left] <= 57) {  // ��߿�ʼ�� ����������
//			left++; 
//		}
//		while (str[right] >= 48 && str[right] <= 57) {  //  �ұ߿�ʼ�� ����������
//			right--;
//		}
//
//	}
//	for (i = 0; i < len; i++) {
//		printf("%c", str[i]);		
//	}
//	system("pause");
//	return 0;
//}

								/* day07 4  ʹ����ż����ǰ�������ں�*/
//int main() {
//	int i = 0;
//	int temp = 0;
//	int arr[] = { 2,5,4,6,3,1,5,8,9,7,6,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = size - 1;
//	while (left <= right) {
//		while (arr[left] % 2 == 0) { //����ǰ�濪ʼ������ż����������������������ż������
//			left++;
//		}
//		while (arr[right] % 2 == 1) {   // �Ӻ��濪ʼ��������������������ż����ǰ�����������
//			right--;
//		}
//		if (left < right) {  // ���һ�Σ����ܴ��� right �Ѿ�С�ڵ��� left ���ǽ����ˣ�
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//	for (i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

                            /* day 07_4  ������������*/
//int main() {
//	int i, j;
//	int sumLeft = 0;
//	int sumRight = 0;
//	int A[] = { 1,4,7,5,2,3,1,8,2,3,2 };
//	int size = sizeof(A) / sizeof(A[0])-1; // �������Ǳ�
//	printf("%d \n", size);
//	for (i = 1; i < size; i++) {
//		sumLeft = 0;  // �ȽϹ������Һ�����
//		sumRight = 0;
//		for (j = 0; j < i; j++) {
//			sumLeft += A[j];  //���֮��
//		}  
//		printf("%d ", sumLeft);
//		for (j = i + 1; j <= size; j++) {
//			sumRight += A[j];		// �ұ�֮��
//		}
//		printf("%d ", sumRight);   //��ӡ���������
//		printf("\n");
//		if (i == size-1) {
//			printf("-1 \n");  //���������һ��Ҳû�У�����������������
//			break;
//		}
//		if (sumLeft == sumRight) {
//			printf("%d \n", i);		
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

						/* day 08_4�����ʾ���� + 1*/
// ��������λ��
//int howNums(int a) {
//	int count = 0;
//	while (a != 0) {
//		a = a / 10;
//		count ++;
//	}
//	return count;
//}
//// ��������������
//int *inArr(int *A, int a) {
//	int count = 0;
//	int i = 0;
//	count = howNums(a);
//	for (i = count; i > 0; i--) {
//		A[i - 1] = a % 10;
//		a = a / 10;
//	}
//	return A;
//}
//
//int main() {
//	int a = 0;
//	int count = 0;
//	int i;
//	int *p;
//	int A[10] = { 0 };
//	printf("������һ��������");
//	scanf("%d", &a);
//	// �����ж���λ
//	count = howNums(a);   
//	// �ٽ�ÿ��������������
//	p = inArr(A, a);
//	// ��ӡ����
//	for (i = 0; i < count; i++) {
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//	// ���� + 1
//	a = a + 1;
//	count = howNums(a);  //����λ��
//	p = inArr(A, a);    // ��������
//	for (i = 0; i < count; i++) {  //��ӡ����
//		printf("%d ", *p); 
//		p++;
//	}
//	system("pause");
//	return 0;
//}

				          /* day 08_5  ���ص������� */
//int main() {
//	int A[] = {-1,-5,4,9,6,8,-6,8,78,500,46};
//	int size = sizeof(A) / sizeof(A[0]);
//	int i = 0;
//	int Max = A[0];
//	int seconMax = 0;
//	int thirdMax = 0;
//	for (i = 0; i < size; i++) {
//		if (Max < A[i]) {
//
//		}
//	}
//
//
//	system("pause");
//	return 0;
//}

					             /* �������� */
//// ����Ԫ��
//void Swap(int A[], int left,int right) {
//	int temp;
//	temp = A[left];
//	A[left] = A[right];
//	A[right] = temp;
//}
//// ����һ��
//int Sort(int A[], int left, int right) {
//	int base = A[left];
//	while (left <= right) {
//		while (left < right && A[right] >= base) {
//			right--;
//		}
//		Swap(A, A[left], A[right]);
//		while (left < right && A[left] <= base) {
//			left++;
//		}
//		Swap(A, A[left], A[right]);
//	}
//	return A[left];
//}
//// �ݹ�����
//void quikSort(int A[], int left, int right) {
//	if (left < right)
//	{
//		int base = Sort(A, left, right);
//		quikSort(A, left, base - 1);
//		quikSort(A, base + 1, right);
//	}
//	return;
//}
//
//
//int main() {
//	int A[] = { 0,2,58,46 };
//	int size = sizeof(A) / sizeof(A[0]) - 1;
//	int i;
//	// Ԫ�ؽ�������
//
//	// ����һ������
//	
//	// �ݹ�
//	quikSort(A, 0, size);
//	for (i = 0; i < size; i++) {
//		printf("%d ", A[i]);
//	}
//
//
//
//	system("pause");
//	return 0;
//}


					             /*  day 08_5 ����������� */
//int main() {
//	int A[] = { 10,2,45,6,42,95,2,50 };
//	int size = sizeof(A) / sizeof(A[0]);
//	int k = 3;
//	int temp = 0;
//	int i, j;
//	for (i = 0; i < k; i++) {
//		for (j = i+1; j < size; j++) {
//			if (A[j] < A[j + 1]) {
//				temp = A[j];
//				A[j] = A[j + 1];
//				A[j + 1] = A[j];
//			}
//		}
//	}
//	printf("%d ", A[2]);
//	system("pause");
//	return 0;
//}

							/*  day 10_4�ַ���ת���� */
//int charToint(char *a) {
//	int num = 0;
//	while (*a) {
//		num = num*10 + *a-'0';  
//		a++;
//	}
//	return num;
//}
//
//int main (){
//	char a[] = "1235";
//	int num = charToint(a);
//	printf("%d ", num);
//	system("pause");
//	return 0;
//}

			/* day 10_5  �������ҵ�Ŀ��ֵ������Ŀ��ֵ��ʼ�ͽ����±� */

//void toFind(int *A, int size, int target) {
//	 int left = 0;
//	 int right = size - 1;
//	 while (left <= right) {
//		int mid = (left + right) / 2;
//		if (A[mid] < target) {
//			left = mid;
//		}
//		else if (A[mid] > target) {
//			right = mid;
//		}
//		else if (A[mid] == target) {
//			printf("%d ", mid);
//			while (A[++mid]== target){
//				printf("%d ", mid);
//			}
//			break;
//		}
//		else {
//			printf("-1 -1\n");
//		}
//	 }
//
//	 return;
//}
//
//int main() {
//	int A[] = { -2,-2,-1,0,1,2,3,3,3,5,5,6,8,9,9,10 };
//	int size = (int)sizeof(A) / sizeof(A[0]);
//	int target = 0;
//	printf("��������Ҫ���ҵ�ֵ��");
//	scanf("%d", &target);
//	// ���Һ���
//	toFind(A, size, target);
//
//	system("pause");
//	return 0;
//}

                               /* day 11_4 �ж��Ƿ���Ĵ� */
//int main() {
//	int i, k = 0;
//	char str[] = "Op2bccB2Po";
//	int len = (int)strlen(str);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right) {
//		if (str[left] == str[right]|| str[left] + 32 == str[right] 
//			|| str[left] - 32 == str[right]) {
//			left++;
//			right--;
//			k++;
//		}
//		else {
//			k = 0;
//			break;
//		}
//	}
//	if (k) {
//		printf("�ǻ�����\n");
//	}
//	else {
//		printf("���ǻ�����\n");
//	}
//
//	system("pause");
//	return 0;
//}



                               /* day 11_5  ѹ���ַ��� */
// ѹ���ַ���
//int strCompress(char s[], int len) {
//	int i, j = 0;
//	int count;
//	for (i = 0; i < len; i++) {
//		count = 1;
//		while (s[i] == s[i + 1]) {
//			i++;
//			count++;
//		}
//		if (count > 1) {
//			s[j] = count + '0';
//			j++;
//
//		}
//		s[j] = s[i];
//		j++;
//	}
//	s[j] = '\0';
//	int newLen = (int)strlen(s);
//	return newLen;
//}
//
//int main() {
//	char str[] = "aaassdkkssssss";
//	int len = (int)strlen(str);
//	printf("ԭʼ�ַ����ͳ��ȣ� \n");
//	puts(str); 
//	printf("%d \n", len);
//	int newLen = (int)strCompress(str, len);
//	printf("ѹ�����ַ����ͳ��ȣ� \n");
//	puts(str);
//	printf("%d \n", newLen);
//	system("pause");
//	return 0;
//}

/*day 12_4 �������������*/
//int main() {
//	int A[] = { 1,6,4,7,12,10,19 };
//	int size = sizeof(A) / sizeof(A[0]);
//	int i;
//	int min, max;
//	int left = 0;
//	int right = size - 1;
//	min = A[0];
//	max = A[0];
//	// ����ֵ
//	for (i = 0; i < size; i++) {
//		if (A[i] < min) {
//			min = A[i];
//		}
//		if (A[i] > max) {
//			max = A[i];
//		}
//	}
//	// ��ֵ�Ƿ���ͷβ���ƶ�����ֵ
//	while (left <= right) {
//		printf("������������±꣺");
//		if (A[left] == min && A[right] != max) {
//			while (A[left] < A[left + 1]) {
//				left++;
//			}
//			printf("%d %d\n", left, right);
//			break;
//		}
//		else if (A[left] != min && A[right] == max) {
//			while (A[right] > A[right - 1]) {
//				right--;
//			}
//			printf("%d %d\n", left, right);
//			break;
//		}
//		else if (A[left] != min && A[right] != max) {
//			printf("%d %d\n", left, right);
//		}
//		else if (A[left] == min && A[right] == max) {
//			while (A[left] < A[left + 1]) {
//				left++;
//			}
//			while (A[right] > A[right - 1]) {
//				right--;
//			}
//			printf("%d %d\n", left, right);
//			break;
//		}
//	}
//	// �����С����
//	printf("������������飺 \n");
//	for (i = left; i <= right; i++) {
//		printf("%d ", A[i]);
//	}
//	printf(" \n");
//	system("pause");
//	return 0;
//}


								/* Day 13_4 ���������Ӽ� */


/*ת������*/
//unsigned D2B(int a[], unsigned d)
//{
//	int i = 0;
//	unsigned count = 0;
//	while (d)
//	{
//		a[i] = d % 2;
//		d = d / 2;
//		i++;
//		count++;
//	}
//	return count;
//}
//
///*�ж����*/
//void outPut(int b[],unsigned n)
//{
//	unsigned i, j, t;
//	int a[10];
//	for (i = 1; i < pow(2, n); i++)
//	{
//		printf("{");
//		t = D2B(a, i);
//		for (j = 0; j < t; j++)
//			if (a[j] == 1)
//				printf("%d ", b[j]);
//		printf("}\n");
//	}
//}
//
//int main(){
//	int b[] = { 1, 2, 11, 4, 5, 6, 7, 8, 9, 10};
//	int n = sizeof(b) / sizeof(b[0]);
//	while (n)
//	{
//		printf("{}\n");
//		outPut(b,n);
//		scanf("%d", &n);
//	}
//	system("pause");
//	return 0;
//}

//int main() {
//	int num = 0;
//	int i = 0;
//	int k = 0;
//	int A[20] = { 0 };
//	printf("���������֣�\n");
//	scanf("%d%d", &num,&k);
//	while (num) {
//		A[i] = num % k;
//		num = num / k;
//		i++;
//	}
//	while (i) {
//		printf("%d ", A[i - 1]);
//		i--;
//	}
//	system("pause");
//	return 0;
//}

                                               /* ������ */
int main() {
	int num = 100;
	int i, j;
	int count = 0;
	for (i = 2; i < 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d �� \n", count);
	system("pause");
	return 0;
}

int main() {
	char a = 128; 
	printf("%u  ", a);

	system("pause");
	return 0;
}                 


/*****************************/
int main() {
	AddressBook address_book;
	Init(&address_book);

	typedef void(*Func)(AddressBook);
	Func func_table[] = {
		NULL,
		AddPersoninfo,
		DelPersoninfo,

	};
	system("pause");
	return 0;
}