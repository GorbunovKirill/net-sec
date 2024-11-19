#include <QCoreApplication>
#include <QTcpSocket>
#include <QSqlDatabase>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTcpSocket socket;
    socket.connectToHost("example.com", 80);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("example.db");

    return app.exec();
}
