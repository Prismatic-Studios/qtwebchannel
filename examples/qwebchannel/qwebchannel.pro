TEMPLATE = subdirs

qtHaveModule(widgets):qtHaveModule(websockets) {
    SUBDIRS += standalone
}
