#include "..\\code\\dataStruct.h"

// ����ȫ�ֱ���
Device lineDevice01, lineDevice02;

// ������������(��������ֻ������һ���Ӻ���!)
void sample(Device* device, double, double, double, double, double, double, double, double, double, double, double, double);

// �������ౣ������
extern double line(Device*); // ��·����


void line_1_p(double* vma, double* vmb, double* vmc, double* ima, double* imb, double* imc, double* vna, double* vnb, double* vnc, double* ina, double* inb, double* inc, double* time, double* p1, double* p2, double* p3) {
    sample(&lineDevice01, *vma, *vmb, *vmc, *ima, *imb, *imc, *vna, *vnb, *vnc, *ina, *inb, *inc);
    
    line(&lineDevice01);
    
    *p1 = lineDevice01.relayFlag[0];
}




void line_1_q(double* vma, double* vmb, double* vmc, double* ima, double* imb, double* imc, double* vna, double* vnb, double* vnc, double* ina, double* inb, double* inc, double* time, double* p1, double* p2, double* p3) {
    

    *p1 = 12;
}


// ----------------��������----------------------
void sample(Device* device, double vma, double vmb, double vmc, double ima, double imb, double imc, double vna, double vnb, double vnc, double ina, double inb, double inc) {
    device->sample[0] = vma;
    device->sample[1] = vmb;
    device->sample[2] = vmc;
    device->sample[3] = ima;
    device->sample[4] = imb;
    device->sample[5] = imc;
    device->sample[6] = vna;
    device->sample[7] = vnb;
    device->sample[8] = vnc;
    device->sample[9] = ina;
    device->sample[10] = inb;
    device->sample[11] = inc;
}









