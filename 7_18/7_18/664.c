////���ֲ���
////��д������һ���������������в��Ҿ����ĳ����
////Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int tag = 0;
//	//int left=0, right=9, mid;
//	//�Ľ���ͨ�����������С��̬�������±�ĳ�ֵ.
//	//������ͨ��sizeof�������������ܴ�С���ֽ�����/һ��Ԫ�ش�С
//	int sz = sizeof(a) / sizeof(a[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	//�Լ�дʱ��û�������׵����⣺��δ���Ҫ�ҵ����ֲ��ڸ�����������
//	//�𰸣�ͨ�����ı���flag ��� �Ƿ��ҵ������֣�
//	//     ��ֵΪ��flag=0 �ҵ���flag=1 û�ҵ�flag��ȻΪ0 
//	//     ���ͨ��flag��ֵ ���жϽ�� �Ӷ����û�����
//	int flag = 0;
//	printf("�����������ҵ����֣�\n");
//	scanf("%d", &tag);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a[mid] < tag)
//			left = mid + 1;
//		else if (a[mid] > tag)
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ��ˣ��������±��ǣ�%d", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	printf("��Ǹ����Ҫ�ҵ����ֲ��ڸ��������棡\n");
//	return 0;
//}