#include <QDir>
#include <QFileInfoList>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>
#include "themeparser.h"

ThemeParser::ThemeParser(QString dirname, QObject *parent) :
  QObject(parent),
  themeDir(dirname)
{
  parseThemes();
}

ThemeParser::~ThemeParser()
{
}

void ThemeParser::parseThemes()
{
  QDir dir(themeDir);

  QFileInfoList themeFilesList =
      dir.entryInfoList(QDir::Files, QDir::Name | QDir::LocaleAware);

  // parse every file in directory
  for (auto &i : themeFilesList) {

    // read file
    QFile file(i.filePath());
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    // read file to temp string
    QString raw = file.readAll();

    // done with file
    file.close();

    // create json doc from temp string
    QJsonDocument jd = QJsonDocument::fromJson(raw.toUtf8());

    // extract json object
    QJsonObject jo = jd.object();

    // extract name string
    QString name = jo.value("name").toString();

    // extract colors array
    QJsonArray array = jo.value("colors").toArray();

    // instantiate theme with name
    Theme currentTheme(name);

    // fill theme with colors from array
    for (auto &j : array) {
      currentTheme._colors.append(j.toString());
    }

    // append theme to themes list
    themes.append(currentTheme);
  }

  // emit completion signal
  emit parsingComplete();
}
