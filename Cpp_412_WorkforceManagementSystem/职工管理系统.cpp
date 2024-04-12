#include "workerManager.h"

int main()
{
	WorkerManager wm;
	
	int input = 0;
	
	do 
	{
		// չʾ�˵�
		wm.ShowMenu();
		cout << "��ѡ��> ";
		cin >> input;
		switch (input)
		{
			case 0:
				// �˳�ϵͳ
				wm.ExitSystem();
				break;
			case 1:
				// ���Ա��
				wm.AddWorkers();
				break;
			case 2:
				// ��ʾְ����Ϣ
				wm.ShowWorkersInfo();
				break;
			case 3:
				// ɾ����ְְ��,���ձ��ɾ��ָ����ְ��
				wm.DelWorker();
				break;

			case 4:
				// �޸�ְ����Ϣ:���ձ���޸�ְ��������Ϣ
				wm.ModifyWorkerInfo();
				break;
			case 5:
				// ����ְ����Ϣ:����ְ���ı�Ż���ְ�����������в�����ص���Ա��Ϣ
				wm.FindWorker();
				break;
			case 6:
				// ���ձ������:����ְ����ţ�������������������û�ָ��
				wm.SortById();
				break;
			case 7:
				// ��������ĵ�
				wm.ClearFile();
				break;

			default:
				system("cls");
				break;
		}

		
	} while (input);

	return 0;
}