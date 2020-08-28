#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

///*转二进制*/
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
///*判断输出*/
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

/*                     指针函数实现字符串大小写转换             */                               
//char *ToLowerCase(char *str) {  // 返回指针型数字类型
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
//	printf("请输入字符串:\n");
//	gets(str1);
//	puts(str1);
//	char *str2;     // 由于函数返回地址，所以str2需要指针类型
//	str2 = ToLowerCase(str1);
//	printf("%s\n", str2);
//	system("pause");
//	return 0;
//}


/*                 指针函数字符串便利   */

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
//	// 输出函数
//	put(str1);
//	system("pause");
//	return 0;
//} 



/*      将数组元素向右移动 K 个位置      */

#define N 7
void Move_Arr(int A[], int num, int k) {   // 数组被隐式转化成指针
	int temp = 0;
	int i, j;
	for (i = num; i <= k; i++) {  
		// 交换数组元素
		temp = A[i-1];
		A[i-1] = A[i];
		A [i] = temp;
	}
	return; // 无返回值， 这个 return 表示该函数结束。
}

int main() {
	int num = 0;
	int k = 0;
	int A[N] = { 10,20,45,20,5,5,4 };
	// 打印数组
	for (int i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("请输入要移动的第几个元素 num 和移动的位数 k ：");
	scanf("%d%d", &num,&k);
	printf("\n将第 num 个元素移动 k 位的结果为：\n");
	Move_Arr(A, num, k); // 调用移动函数
	// 打印移动后的数组
	for (int i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}



                  /*  删除数组元素 */
//# define N 10
//int main() {
//	int i, j, k= 0;
//	int m = 0;
//	// 创建数组
//	int A[N] = { 0,5,5,8,5,5,4,5,7,10 };
//	printf("删除前的数组元素为：\n");
//	for (i = 0; i < N; i++) {
//		printf("%d ", A[i]);
//	}
//	// 指定元素
//	printf("\n请输入要删除的元素：");
//	scanf("%d", &m);
//	// 删除
//	
//	for (i = 0; i < N; i++) {
//		if (A[i] == m) {
//			for (j = i; j < N; j++) {  
//				A[j] = A[j + 1];  // 删除一个，每个元素先前挪动一个人。
//			}
//			k++;
//			i = 0;  // 重新遍历一次，以防重复。如； 1，5，5，5，5
//		}
//	}
//	printf("删除后的数组有效元素个数为：%d:\n", (N - k));
//	for (i = 0; i < (N - k); i++) {
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


                    /*数组的排序、查找、插入*/
//#define N 15
//// 冒泡排序
//void SortArr(int Arr[N]) {
//	int i, j;
//	int temp = 0;
//	for (i = 0; i < N - 1; i++) { // 比较多少趟
//		for (j = 0; j < N - 1 - i; j++) {  // 比较多少次
//			if (Arr[j] > Arr[j + 1]) {
//				temp = Arr[j];
//				Arr[j] = Arr[j + 1];
//				Arr[j + 1] = temp;
//			}
//		}
//	}
//	return;
//}
//// 二分查找
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
//	// 循环结束， 返回 0 说明没有该元素值；
//}
//int main() {
//	// 创建数组
//	int A[N] = { 1,2,20,5,85,4,23,
//		59,75,21,36,52,70,90,82 };
//	int B[N+1] = { 0 };
//	int i, num;
//	int M = 0;
//	int temp = 0;
//	// 打印数组的有效元素
//	for (i = 0; i < N; i++) {
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	// 数组排序
//	SortArr(A);
//		// 打印由小到大排序后的数组
//	printf("由大到小排序：");
//	for (i = 0; i < N; i++) {
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	// 查找数组
//	printf("请输入要查找的元素：");
//	scanf("%d", &num);
//		// 返回索引值
//	M = Find_Arr(A, num);
//	if (M != 0) {
//		printf("找到了，是第%d个元素\n", M);
//	}
//	else {
//			// 若未索引到结果， 按顺序插入元素
//		for (i = 0; i < N; i++) {
//			B[i] = A[i];   // 数组B[i]最后一个元素为垃圾数字
//		}
//		for (i = 0; i < N; i++) {
//			if (B[i] < num && B[i + 1] > num) {
//				for (int j = N; j > i; j--) {
//					B[j+1] = B[j];  //将元素向后移动
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

                             /*  赎金信  */
//typedef int bool;   //定义  bool 类型数据类型
//#define true (bool) 1;  // 真返回 true 实际上数值为 1
//#define false (bool) 0;  // 假返回 false 实际上数值为 0
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
//	printf("输入 ransom :");
//	gets(ransom);
//	printf("\n输入 magazine ：");
//	gets(magazine);
//	printf("ransom ：");
//	puts(ransom);
//	printf("\nmagazine ：");
//	puts(magazine);
//	// 判断 ransom 是否可以由 magazine 组成
//	if (canContact(ransom, magazine)) {
//		printf("true\n");
//	}
//	else {
//		printf("false\n");
//	}
//	system("pause");
//	return 0;
//}

                             /* 回文数 */

/*int main() {
	int i, k = 0;
	int A[] = { 2,0,2,0,2,0,2};
	int left = 0;
	int right = sizeof(A)/sizeof(A[0]);
	int len = sizeof(A) / sizeof(A[0]);
	 //输出原数组
	printf("原数组");
	for (i = 0; i < len; i++) {
		printf("%d ", A[i]);
	}
	printf ("\n");
	// 将A数组倒序
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
		printf("是回文数\n");
	}
	else {
		printf("不是回文数\n");
	}
	system("pause");
	return 0;
} */

                         /* 统计单词个数  */
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
	printf("\n单词个数为：%d", k);
	system("pause");
	return 0;
}*/

                          /* 最后一个单词长度 */
/*int main() {
	int i, j = 0;
	char s[] = "fjk fgh jh fgh ";
	int len = strlen(s); // 字符串长度
	printf("字符串长度为%d\n", len); 
	for (i = len - 1; s[i] != ' '; i--) {
		if (s[len - 1] == ' ') {
			j = 0;
		}
		else {
		
		}		j++;

	}
	printf("最后一个单词长度为%d", j);

	system("pause");
	return 0;
}*/

                         /* 合并 并 排序数组*/

//
//int *Mester(int *A, int size01, int *B, int size02) {
//	int i,j ;
//	int temp = 0;
//	int *pTemp = malloc(size01 + size02); //分配一个长度为 size01 + size02 的长度空间
//	for (i = 0; i < size01; i++) {
//		pTemp[i] = A[i];
//	}
//	for (j = 0; j < size02; j++) {
//		pTemp[j + size01] = B[j];
//	}
//	// 排序  冒泡排序
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
//	printf("合并后的数组为：\n");
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
		printf("重复了\n");
	}
	else {
		printf("没重复\n");
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
//	// 取绝对值
//	for (i = 0; i < N; i++) {
//		if (A[i] < 0) {
//			A[i] = -A[i];
//		}
//	}
//	// 排序
//	for (i = 0; i < N - 1; i++) {
//		for (j = 0; j < N - i - 1; j++) {
//			if (A[j] > A[j+1]) {
//				temp = A[j];
//				A[j] = A[j + 1];
//				A[j + 1] = temp;
//			}
//		}
//	}
//	// 平方
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

                                  /*  day6 --5  反转字母但不反转数字 */
//int main() {
//	int i = 0;
//	char temp = 0;
//	int left, right;
//	char str[] = "ab1Cdef6gh5k";
//	int len = 0;
//	len = strlen(str);
//	left = 0;
//	right = len - 1;
//	while (left <= right) {  //左右都是字母时交换
//		while (((str[left] >= 97 && str[left] <= 122) || (str[left] >= 65 && str[left] <= 90)) &&
//			((str[right] >= 97 && str[right] <= 122) || (str[right] >= 65 && str[right] <= 90))) {
//			if (left < right) {   //避免多交换一次
//				temp = str[left];
//				str[left] = str[right];
//				str[right] = temp;
//			}
//			left++;
//			right--;
//		}
//		while (str[left] >= 48 && str[left] <= 57) {  // 左边开始， 是数字跳过
//			left++; 
//		}
//		while (str[right] >= 48 && str[right] <= 57) {  //  右边开始， 是数字跳过
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

								/* day07 4  使数组偶数在前，奇数在后*/
//int main() {
//	int i = 0;
//	int temp = 0;
//	int arr[] = { 2,5,4,6,3,1,5,8,9,7,6,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = size - 1;
//	while (left <= right) {
//		while (arr[left] % 2 == 0) { //，从前面开始，遇到偶数跳过，遇到奇数与后面的偶数交换
//			left++;
//		}
//		while (arr[right] % 2 == 1) {   // 从后面开始，遇到奇数跳过，遇到偶数与前面的奇数交换
//			right--;
//		}
//		if (left < right) {  // 最后一次，可能存在 right 已经小于等于 left 还是交换了；
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

                            /* day 07_4  数组中心索引*/
//int main() {
//	int i, j;
//	int sumLeft = 0;
//	int sumRight = 0;
//	int A[] = { 1,4,7,5,2,3,1,8,2,3,2 };
//	int size = sizeof(A) / sizeof(A[0])-1; // 数组最大角标
//	printf("%d \n", size);
//	for (i = 1; i < size; i++) {
//		sumLeft = 0;  // 比较过后将左右和清零
//		sumRight = 0;
//		for (j = 0; j < i; j++) {
//			sumLeft += A[j];  //左边之和
//		}  
//		printf("%d ", sumLeft);
//		for (j = i + 1; j <= size; j++) {
//			sumRight += A[j];		// 右边之和
//		}
//		printf("%d ", sumRight);   //打印左右数组和
//		printf("\n");
//		if (i == size-1) {
//			printf("-1 \n");  //遍历到最后一个也没有，即不存在索引中心
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

						/* day 08_4数组表示数字 + 1*/
// 计算数的位数
//int howNums(int a) {
//	int count = 0;
//	while (a != 0) {
//		a = a / 10;
//		count ++;
//	}
//	return count;
//}
//// 将数放在数组里
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
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	// 求数有多少位
//	count = howNums(a);   
//	// 再将每个数放在数组里
//	p = inArr(A, a);
//	// 打印数组
//	for (i = 0; i < count; i++) {
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//	// 将数 + 1
//	a = a + 1;
//	count = howNums(a);  //计算位数
//	p = inArr(A, a);    // 放入数组
//	for (i = 0; i < count; i++) {  //打印数组
//		printf("%d ", *p); 
//		p++;
//	}
//	system("pause");
//	return 0;
//}

				          /* day 08_5  返回第三大数 */
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

					             /* 快速排序 */
//// 交换元素
//void Swap(int A[], int left,int right) {
//	int temp;
//	temp = A[left];
//	A[left] = A[right];
//	A[right] = temp;
//}
//// 排序一次
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
//// 递归排序
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
//	// 元素交换函数
//
//	// 进行一次排序
//	
//	// 递归
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


					             /*  day 08_5 输出第三大数 */
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

							/*  day 10_4字符串转整数 */
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

			/* day 10_5  数组中找到目标值，返回目标值开始和结束下标 */

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
//	printf("请输入需要查找的值：");
//	scanf("%d", &target);
//	// 查找函数
//	toFind(A, size, target);
//
//	system("pause");
//	return 0;
//}

                               /* day 11_4 判断是否回文串 */
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
//		printf("是回文数\n");
//	}
//	else {
//		printf("不是回文数\n");
//	}
//
//	system("pause");
//	return 0;
//}



                               /* day 11_5  压缩字符串 */
// 压缩字符串
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
//	printf("原始字符串和长度： \n");
//	puts(str); 
//	printf("%d \n", len);
//	int newLen = (int)strCompress(str, len);
//	printf("压缩后字符串和长度： \n");
//	puts(str);
//	printf("%d \n", newLen);
//	system("pause");
//	return 0;
//}

/*day 12_4 最短无序子数组*/
//int main() {
//	int A[] = { 1,6,4,7,12,10,19 };
//	int size = sizeof(A) / sizeof(A[0]);
//	int i;
//	int min, max;
//	int left = 0;
//	int right = size - 1;
//	min = A[0];
//	max = A[0];
//	// 求最值
//	for (i = 0; i < size; i++) {
//		if (A[i] < min) {
//			min = A[i];
//		}
//		if (A[i] > max) {
//			max = A[i];
//		}
//	}
//	// 最值是否是头尾并移动左右值
//	while (left <= right) {
//		printf("最短无序数组下标：");
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
//	// 输出最小无序
//	printf("最短无序子数组： \n");
//	for (i = left; i <= right; i++) {
//		printf("%d ", A[i]);
//	}
//	printf(" \n");
//	system("pause");
//	return 0;
//}


								/* Day 13_4 数组所有子集 */


/*转二进制*/
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
///*判断输出*/
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
//	printf("请输入数字：\n");
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

                                               /* 求素数 */
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
	printf("\n%d 个 \n", count);
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