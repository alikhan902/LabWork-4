#ifndef CCOLOREDLINE_H
#define CCOLOREDLINE_H

#include "CLine.h"
#include <string>

// ����� CColoredLine, ������������� �� CLine
class CColoredLine : public CLine {
private:
    std::string color; // ���� �����

public:
    // ����������� �� ��������� � � �����������
    CColoredLine(const CPoint& start_point = CPoint(), const CPoint& end_point = CPoint(), const std::string& color_val = "black");

    // ��������� �����
    void setColor(const std::string& color_val);

    // ��������� �����
    std::string getColor() const;
};

#endif // CCOLOREDLINE_H
