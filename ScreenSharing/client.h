#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QWidget>
#include <QTcpSocket>

class QDialogButtonBox;
class QLabel;
class QLineEdit;
class QPushButton;
class QTcpSocket;
class QNetworkSession;


class Client : public QWidget
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = 0);


private slots:
    void requestNew();
    void read();
    void displayError(QAbstractSocket::SocketError socketError);
    void enableButton();
    void sessionOpened();

private:
    QLabel *hostLabel;
    QLabel *portLabel;
    QLineEdit *hostLineEdit;
    QLineEdit *portLineEdit;
    QLabel *statusLabel;
    QPushButton *connectButton;
    QPushButton *quitButton;
    QDialogButtonBox *buttonBox;

    QTcpSocket *tcpSocket;
    QByteArray data;
    quint16 blockSize;

    QNetworkSession *networkSession;
};

#endif // CLIENT_H
