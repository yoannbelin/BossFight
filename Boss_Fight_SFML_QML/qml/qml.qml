import QtQuick 2.7
import QtGraphicalEffects 1.0
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4
import "exampleCRUD"

Window {
//    property bool rootVisibleProp : Context.rootVisibility

    id : root
    visible : Context.rootVisibility

    width: 800
    height : 600

    Image {
        anchors.fill : parent
        source : "../Spritesheet/314394-Sepik.jpg"
        id : background
        property int largeurBouton : 140
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        
        Button {
            id: quitButton
            x: 736
            y: 0
            width: 64
            height: 64
            text: qsTr("")
            style : ButtonStyle {
                background : Image { source : "../Spritesheet/quitButton.png" }
            }
            onClicked: root.close()
        }
    }
    
    Button{
        id:playButton
        x: 18
        y : 232
        width: 165
        height: 55
        text: ""
        style : ButtonStyle {
            background : Image { source : "../Spritesheet/buttonplayBG.png" }
        }
        onClicked: {
            Context.doActionInCpp("play");
        }

        ScaleAnimator on scale {
            target : playButton
            from : 1
            to : 1.2
            easing.type: Easing.InQuad
            duration : 800
            loops: Animation.Infinite
        }
    }
}
