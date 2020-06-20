#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAbstractItemModel;
class QComboBox;
class QCompleter;
class QLabel;
class QLineEdit;
class QProgressBar;
class QCheckBox;
class QSpinBox;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void about();
    void changeCase(int);
    void changeMode(int);
    void changeModel();
    void changeMaxVisible(int);

private:
    void createMenu();
    QAbstractItemModel *modelFromFile(const QString &fileName);

    QComboBox *caseCombo, *modeCombo, *modelCombo;
    QSpinBox *maxVisibleSpinBox;
    QCheckBox *wrapCheckBox;
    QCompleter *completer;
    QLabel *contentsLabel;
    QLineEdit *lineEdit;
};

#endif // MAINWINDOW_H
