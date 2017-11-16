#include "game.h"
#include <QDebug>
#include "sfml.h"
#include <QDir>
#include <iostream>
#include <QList>
#include <QCoreApplication>


Game::Game(QObject *parent) : QObject(parent), m_context(nullptr)
{
//    if(!m_textFont.loadFromFile("C:/Users/34011-58-14/Documents/Qt_Projects/BossFight-master/Boss_Fight_SFML_QML/Polices/Powerful.ttf"));
//    {
//        qDebug() << "fail load Police";
//    }
}

void Game::setContext(QQmlContext *context)
{
    m_context = context;
    m_context->setContextProperty("Context", this);
}

void Game::load()
{
    QList<QString> fichiersQML;
    fichiersQML << QString("qml");

    for (int t(0); t<1; t++)
    {
        makeQMLtab(fichiersQML[t]);
        std::cout << t << " has been loaded" << std::endl;
    }
}

void Game::makeQMLtab(QString nomFichierQMLsansExtension)
{
    QQuickView* view = new QQuickView();
    quickViews.push_back(view);

    m_QMLcontexts << view->engine()->rootContext();

    m_qmlContext = m_QMLcontexts.at(0);
    m_qmlContext->setContextProperty("Context", this->getInstance());

    QString repertoireProjet = getRepertoireProjet();

    QString fichierQML = repertoireProjet + QString("/qml/") + nomFichierQMLsansExtension + QString(".qml");
    std::cout  << "charge le fichier QML : " << fichierQML.toLatin1().constData() << std::endl;

    view->setSource( QUrl::fromLocalFile(fichierQML));
    view->hide(); //affiche ou non le rectangle de la QQuickView
}

QString Game::getRepertoireProjet(bool trace)//false
{
    QString repertoireduFichierApplication( qApp->applicationFilePath() );
    if(trace)
        std::cout << "qApp->applicationFilePath() = "<< repertoireduFichierApplication.toLatin1().constData() << std::endl;

    QDir fichier(repertoireduFichierApplication);
    fichier.cdUp() ;
    fichier.cdUp() ;
    if(trace)
        std::cout << "qApp->applicationName() = "<< qApp->applicationName().toLatin1().constData() << std::endl;

    fichier.cd(qApp->applicationName());
    QString repertoireProjet  = fichier.absolutePath() ;
    if(trace)
        std::cout  << "repertoireProjet : " << repertoireProjet.toLatin1().constData() << std::endl;

    return repertoireProjet;
}

void Game::doActionInCpp(QString nomAction)
{
    if( nomAction== "play" )
    {
//        std::cout << "PLAY" << std::endl;
        setRootVisibility(false);
        qDebug() << rootVisibility();
        sfml.testSFML();
    }
    else if (nomAction == "stop")
    {
        std::cout << "STOP" << std::endl;
        load();
        std::cout << rootVisibility() << std::endl;
    }
}

//sf::Text Game::getTextDamages() const
//{
//    qDebug() << "getTextDamages";
//    return m_textDamages;
//}

//void Game::setTextDamages(const sf::Text &textDamages)
//{
//    qDebug() << "setTextDamages";
//    m_textDamages = textDamages;
//}

//sf::Font Game::getTextFont() const
//{
//    qDebug() << "getTextFont";
//    return m_textFont;
//}

//void Game::setTextFont(const sf::Font &textFont)
//{
//    qDebug() << "setTextFont";
//    m_textFont = textFont;
//}

//sf::Text Game::getResetText() const
//{
//    qDebug() << "getResetText";
//    return m_resetText;
//}

//int Game::getCompteurText() const
//{
//    qDebug() << "getCompteurText";
//    return m_compteurText;
//}

//void Game::setCompteurText(int compteurText)
//{
//    qDebug() << "setCompteurText";
//    m_compteurText = compteurText;
//}
