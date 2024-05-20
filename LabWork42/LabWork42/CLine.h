#ifndef CLINE_H
#define CLINE_H

#include "CPoint.h"

// ����� CLine, ������������� �� CShape
class CLine : public CShape {
protected:
    CPoint start; // ��������� ����� �����
    CPoint end;   // �������� ����� �����

public:
    // ����������� �� ��������� � � �����������
    CLine(const CPoint& start_point = CPoint(), const CPoint& end_point = CPoint());

    // ��������� ��������� �����
    void setStart(const CPoint& start_point);

    // ��������� �������� �����
    void setEnd(const CPoint& end_point);

    // ��������� ��������� �����
    CPoint getStart() const;

    // ��������� �������� �����
    CPoint getEnd() const;
};

#endif // CLINE_H
