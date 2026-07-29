#include <QFile>
#include <QTextStream>
#include <QDebug>

#include "LoginManager.h"

LoginManager :: LoginManager() {

}

bool LoginManager :: authenticate( const QString &username,
                                   const QString &password ) {

    QFile file("../data/users.txt");

    if ( !file.open( QIODevice :: ReadOnly | QIODevice :: Text )) {
        return false;
    }

    QTextStream in ( &file );

    while ( !in.atEnd() ) {
        QString line = in.readLine();

        QStringList parts = line.split(",");

        if ( parts.size() != 2 ) 
            continue;

        QString storedUser = parts[0].trimmed();
        QString storedPassword = parts[1].trimmed();

        if ( username == storedUser &&
             password == storedPassword ) {
                file.close();
            
                qDebug() << "User authenticate" << username;

                return true;
        }
    }
    file.close();

    return false;
}