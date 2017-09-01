import QtQuick 2.0

Rectangle {
    width: 720
    height: 450

    Image {
        id: bitmap_Sample;
        anchors.fill: parent;
        source: "pics/image_01.png"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            console.log("Image Clicked!");
            //Qt.quit();
        }
    }

}
