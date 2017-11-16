#ifndef MYAPP_H
#define MYAPP_H

#include <QObject>
#include <QQmlContext>
#include <QDebug>
#include "sfml.h"
#include <SFML/Graphics.hpp>
#include <QStringList>
#include <QQuickView>
#include <QQmlEngine>
#include <vector>
#include <QQmlApplicationEngine>

class Game : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool rootVisibility READ rootVisibility WRITE setRootVisibility NOTIFY rootVisibilityChanged)

protected:
    std::vector<QQuickView*> quickViews;

    QString getRepertoireProjet(bool trace = false);
    QVector<QQmlContext*> m_QMLcontexts;
    QQmlContext* m_qmlContext;

public:
    explicit Game(QObject *parent = nullptr);

    static Game *getInstance() {
        if (nullptr == _singleton) {
            _singleton = new Game;
        }
        return _singleton;
    }

    void load();
    void setContext(QQmlContext *contexte);
    void updateContext();
    void updateTable1();
    void updateQML_model(QString nomModele, QStringList sl);

    Sfml sfml;


    bool rootVisibility() const
    {
        return m_rootVisibility;
    }

//    sf::Font getTextFont() const;
//    void setTextFont(const sf::Font &textFont);

//    sf::Text getTextDamages() const;
//    void setTextDamages(const sf::Text &textDamages);

//    sf::Text getResetText() const;

//    int getCompteurText() const;

//    void setCompteurText(int compteurText);

private :
    static Game *_singleton;
    void makeQMLtab(QString nomFichierQMLsansExtension);

public slots:
    Q_INVOKABLE void doActionInCpp(QString nomAction);

    void setRootVisibility(bool rootVisibility)
    {
        if (m_rootVisibility == rootVisibility)
            return;

        m_rootVisibility = rootVisibility;
        emit rootVisibilityChanged(m_rootVisibility);
    }

signals:
    void rootVisibilityChanged(bool rootVisibility);

private :
    QQmlContext* m_context;

    //sf::Font m_textFont;

    //sf::Text m_textDamages;

    //sf::Text m_resetText;

    bool m_rootVisibility;

    //int m_compteurText;
};

#endif // MYAPP_H
