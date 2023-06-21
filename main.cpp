#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QtPlugin>

int main(int argc, char **argv)
{
	QApplication app (argc, argv);

	// Show image as button label

	QPixmap pixmap (":/free-svg-file-ghost.svg");
	QLabel *label = new QLabel;
	label->setPixmap (pixmap);
	label->setScaledContents (true);
	// label->setFixedSize (100,100);

	label->show();

	return app.exec();
}