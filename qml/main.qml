import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: loader.width
    height: loader.height

    Loader {
        id: loader

        function reload() {
            source = "";
            $QmlEngine.clearCache();
            source = $file;
        }

        anchors.centerIn: parent
        source: $file
    }

    Connections {
        target: $FileSystemWatcher

        onFileChanged: {
            loader.reload();
        }
    }
}
