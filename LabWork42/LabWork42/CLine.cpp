#include "CLine.h"

// ���������� ������������
CLine::CLine(const CPoint& start_point, const CPoint& end_point)
    : start(start_point), end(end_point) {}

// ���������� ������ ��������� ��������� �����
void CLine::setStart(const CPoint& start_point) {
    start = start_point;
}

// ���������� ������ ��������� �������� �����
void CLine::setEnd(const CPoint& end_point) {
    end = end_point;
}

// ���������� ������ ��������� ��������� �����
CPoint CLine::getStart() const { return start; }

// ���������� ������ ��������� �������� �����
CPoint CLine::getEnd() const { return end; }
