#include "basicplugin.h"


Basicplugin::Basicplugin()
{
    delegate = Q_NULLPTR;
    parameterForm = new ParameterDialog();
}

Basicplugin::~Basicplugin(void)
{

}

QString Basicplugin::getModuleInformation()
{
    return QString("Test Detection Module");
}

QDialog& Basicplugin::getParameterForm()
{
    return *parameterForm;
}

bool Basicplugin::startAnalysis()
{
    if (delegate)
    {
        delegate->statusChanged(DetectionModuleInterface::started);
    }
    return true;
}

bool Basicplugin::stopAnalysis()
{
    if (delegate)
    {
        delegate->statusChanged(DetectionModuleInterface::stopped);
    }
    return true;
}

bool Basicplugin::pauseAnalysis()
{
    if (delegate)
    {
        delegate->statusChanged(DetectionModuleInterface::paused);
    }
    return true;
}

void Basicplugin::setSources(QList<QHash<QString, QVariant> > list)
{
    sources = list;
}

QList<QHash<QString, QVariant> > Basicplugin::getAnalysisResults()
{
    return results;
}


void Basicplugin::setDelegate(DetectionModuleHolder *delegate)
{
    this->delegate = delegate;
}

ParameterDialog::ParameterDialog(QWidget *parent) : QDialog(parent)
{

}