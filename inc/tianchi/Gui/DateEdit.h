// **************************************************************************
// Tianchi C++ library for Qt (open source)
// ��ع���Դ���
// ��Ȩ���� (C) ��ع���Դ��⿪����
// ��ȨЭ�飺���Ķ���ع���Դ��⸽������ȨЭ��
// **************************************************************************
// �ĵ�˵��������Ϊ�յ�����ѡ��ؼ�
// ==========================================================================
// ������־��
// ����         ��Ա        ˵��
// --------------------------------------------------------------------------
// 2013.04.10   ʥ������    ����
//
// ==========================================================================
/// @file DateEdit.h ����Ϊ�յ�����ѡ��ؼ�
// ==========================================================================
#ifndef TIANCHI_DATEEDIT_H
#define TIANCHI_DATEEDIT_H

#include <tianchi/Global.h>

#include <QComboBox>
#include <QCalendarWidget>

TIANCHI_BEGIN_NAMESPACE

QT_USE_NAMESPACE

/// @brief �����������ʾΪ�յ�����ѡ��ؼ�
/// @author ʥ������ Jonix@qtcn.org
/// @date 2013-04-10
class TIANCHI_API DateEdit : public QComboBox
{
    Q_OBJECT

    Q_PROPERTY(QDate date READ date WRITE setDate RESET unsetDate)

private Q_SLOTS:
    void calendarClicked(QDate);

private:
    QCalendarWidget *m_calendar;

protected:
    void focusInEvent(QFocusEvent *e);
    void mousePressEvent(QMouseEvent *e);

public:
    DateEdit(QWidget *parent = 0);
    virtual ~DateEdit();

    QDate date() const;
    void setDate(QDate value);
    void unsetDate();

    inline void setDate(QDateTime value) { setDate(value.date()); }
};

TIANCHI_END_NAMESPACE

#if 0
class TcDateEdit : public TIANCHI_PREPEND_NAMESPACE(DateEdit)
{
    Q_OBJECT
public:
    TcDateEdit(QT_PREPEND_NAMESPACE(QWidget) *parent = 0)
        : TIANCHI_PREPEND_NAMESPACE(DateEdit)(parent)
    {
    }
};
#endif
typedef TIANCHI_PREPEND_NAMESPACE(DateEdit) TcDateEdit;

#endif