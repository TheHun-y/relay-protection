#include "..\\code\\dataStruct.h"
#include "..\\code\\common.h"


void line(Device* device) {
    // ������ֵ����˲ʱֵ����
    sample2inst(device);
    
    // ˲ʱֵ�˲�����벢�����˲�������
    dataFilter(device);
    
    // �����˲������ݼ���12ͨ������,����phasor����
    toPhasor(device);
    
    // �������о�, ʹ�ü���õ�������������ر����߼���ʵ��
    // code...
    device->relayFlag[0] = 12;
    
}