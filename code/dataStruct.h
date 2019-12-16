// ���ݴ��ܳ�(����������)
#define WINDOW 1600
// ÿ�ܲ���������
#define POINTS 400

/*
* ����
*/
typedef struct Phasor {
    double real;
    double img;
} Phasor;


/* ����װ��ͨ�õ����ݽṹ--ȫ�ֱ���
* sample, ����12ͨ������ֵ
* instVma, instVmb������: ˲ʱֵ����
* phasor ��������������
* setValue����: ͨ������ֵ����,����ÿһ��Ԫ��������ĵ�����ֵ���������������˵��
* relayTime����, ͨ����ʱ���� 
* relayFlag����, ͨ����բ���
*/
typedef struct Device {
    double sample[12];
    
    // ֻ��Ҫ����������ʷ���������˲�����
    double instVma[10];
    double instVmb[10];
    double instVmc[10];
    double instIma[10];
    double instImb[10];
    double instImc[10];
    double instVna[10];
    double instVnb[10];
    double instVnc[10];
    double instIna[10];
    double instInb[10];
    double instInc[10];
    
    double filterVma[WINDOW];
    double filterVmb[WINDOW];
    double filterVmc[WINDOW];
    double filterIma[WINDOW];
    double filterImb[WINDOW];
    double filterImc[WINDOW];
    double filterVna[WINDOW];
    double filterVnb[WINDOW];
    double filterVnc[WINDOW];
    double filterIna[WINDOW];
    double filterInb[WINDOW];
    double filterInc[WINDOW];
    
    Phasor phasor[12];
    double setValue[20];
    double relayTime[20];
    int relayFlag[20];
    
} Device;

