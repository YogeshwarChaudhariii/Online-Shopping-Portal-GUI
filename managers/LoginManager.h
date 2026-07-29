#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H

#include <QString>

class LoginManager {
    public:
        LoginManager();

        bool authenticate( const QString &username,
                           const QString &password );
};

#endif
