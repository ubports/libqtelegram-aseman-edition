// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_WEBPAGE_OBJECT
#define LQTG_TYPE_WEBPAGE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/webpage.h"

#include <QPointer>
#include "documentobject.h"
#include "photoobject.h"

class LIBQTELEGRAMSHARED_EXPORT WebPageObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(WebPageClassType)
    Q_PROPERTY(QString author READ author WRITE setAuthor NOTIFY authorChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(QString displayUrl READ displayUrl WRITE setDisplayUrl NOTIFY displayUrlChanged)
    Q_PROPERTY(DocumentObject* document READ document WRITE setDocument NOTIFY documentChanged)
    Q_PROPERTY(qint32 duration READ duration WRITE setDuration NOTIFY durationChanged)
    Q_PROPERTY(qint32 embedHeight READ embedHeight WRITE setEmbedHeight NOTIFY embedHeightChanged)
    Q_PROPERTY(QString embedType READ embedType WRITE setEmbedType NOTIFY embedTypeChanged)
    Q_PROPERTY(QString embedUrl READ embedUrl WRITE setEmbedUrl NOTIFY embedUrlChanged)
    Q_PROPERTY(qint32 embedWidth READ embedWidth WRITE setEmbedWidth NOTIFY embedWidthChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(PhotoObject* photo READ photo WRITE setPhoto NOTIFY photoChanged)
    Q_PROPERTY(QString siteName READ siteName WRITE setSiteName NOTIFY siteNameChanged)
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(QString type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(QString url READ url WRITE setUrl NOTIFY urlChanged)
    Q_PROPERTY(WebPage core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum WebPageClassType {
        TypeWebPageEmpty,
        TypeWebPagePending,
        TypeWebPage
    };

    WebPageObject(const WebPage &core, QObject *parent = 0);
    WebPageObject(QObject *parent = 0);
    virtual ~WebPageObject();

    void setAuthor(const QString &author);
    QString author() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDescription(const QString &description);
    QString description() const;

    void setDisplayUrl(const QString &displayUrl);
    QString displayUrl() const;

    void setDocument(DocumentObject* document);
    DocumentObject* document() const;

    void setDuration(qint32 duration);
    qint32 duration() const;

    void setEmbedHeight(qint32 embedHeight);
    qint32 embedHeight() const;

    void setEmbedType(const QString &embedType);
    QString embedType() const;

    void setEmbedUrl(const QString &embedUrl);
    QString embedUrl() const;

    void setEmbedWidth(qint32 embedWidth);
    qint32 embedWidth() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setId(qint64 id);
    qint64 id() const;

    void setPhoto(PhotoObject* photo);
    PhotoObject* photo() const;

    void setSiteName(const QString &siteName);
    QString siteName() const;

    void setTitle(const QString &title);
    QString title() const;

    void setType(const QString &type);
    QString type() const;

    void setUrl(const QString &url);
    QString url() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const WebPage &core);
    WebPage core() const;

    WebPageObject &operator =(const WebPage &b);
    bool operator ==(const WebPage &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void authorChanged();
    void dateChanged();
    void descriptionChanged();
    void displayUrlChanged();
    void documentChanged();
    void durationChanged();
    void embedHeightChanged();
    void embedTypeChanged();
    void embedUrlChanged();
    void embedWidthChanged();
    void flagsChanged();
    void idChanged();
    void photoChanged();
    void siteNameChanged();
    void titleChanged();
    void typeChanged();
    void urlChanged();

private Q_SLOTS:
    void coreDocumentChanged();
    void corePhotoChanged();

private:
    QPointer<DocumentObject> m_document;
    QPointer<PhotoObject> m_photo;
    WebPage m_core;
};

inline WebPageObject::WebPageObject(const WebPage &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_document(0),
    m_photo(0),
    m_core(core)
{
    m_document = new DocumentObject(m_core.document(), this);
    connect(m_document.data(), &DocumentObject::coreChanged, this, &WebPageObject::coreDocumentChanged);
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &PhotoObject::coreChanged, this, &WebPageObject::corePhotoChanged);
}

inline WebPageObject::WebPageObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_document(0),
    m_photo(0),
    m_core()
{
    m_document = new DocumentObject(m_core.document(), this);
    connect(m_document.data(), &DocumentObject::coreChanged, this, &WebPageObject::coreDocumentChanged);
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), &PhotoObject::coreChanged, this, &WebPageObject::corePhotoChanged);
}

inline WebPageObject::~WebPageObject() {
}

inline void WebPageObject::setAuthor(const QString &author) {
    if(m_core.author() == author) return;
    m_core.setAuthor(author);
    Q_EMIT authorChanged();
    Q_EMIT coreChanged();
}

inline QString WebPageObject::author() const {
    return m_core.author();
}

inline void WebPageObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

inline qint32 WebPageObject::date() const {
    return m_core.date();
}

inline void WebPageObject::setDescription(const QString &description) {
    if(m_core.description() == description) return;
    m_core.setDescription(description);
    Q_EMIT descriptionChanged();
    Q_EMIT coreChanged();
}

inline QString WebPageObject::description() const {
    return m_core.description();
}

inline void WebPageObject::setDisplayUrl(const QString &displayUrl) {
    if(m_core.displayUrl() == displayUrl) return;
    m_core.setDisplayUrl(displayUrl);
    Q_EMIT displayUrlChanged();
    Q_EMIT coreChanged();
}

inline QString WebPageObject::displayUrl() const {
    return m_core.displayUrl();
}

inline void WebPageObject::setDocument(DocumentObject* document) {
    if(m_document == document) return;
    if(m_document) delete m_document;
    m_document = document;
    if(m_document) {
        m_document->setParent(this);
        m_core.setDocument(m_document->core());
        connect(m_document.data(), &DocumentObject::coreChanged, this, &WebPageObject::coreDocumentChanged);
    }
    Q_EMIT documentChanged();
    Q_EMIT coreChanged();
}

inline DocumentObject*  WebPageObject::document() const {
    return m_document;
}

inline void WebPageObject::setDuration(qint32 duration) {
    if(m_core.duration() == duration) return;
    m_core.setDuration(duration);
    Q_EMIT durationChanged();
    Q_EMIT coreChanged();
}

inline qint32 WebPageObject::duration() const {
    return m_core.duration();
}

inline void WebPageObject::setEmbedHeight(qint32 embedHeight) {
    if(m_core.embedHeight() == embedHeight) return;
    m_core.setEmbedHeight(embedHeight);
    Q_EMIT embedHeightChanged();
    Q_EMIT coreChanged();
}

inline qint32 WebPageObject::embedHeight() const {
    return m_core.embedHeight();
}

inline void WebPageObject::setEmbedType(const QString &embedType) {
    if(m_core.embedType() == embedType) return;
    m_core.setEmbedType(embedType);
    Q_EMIT embedTypeChanged();
    Q_EMIT coreChanged();
}

inline QString WebPageObject::embedType() const {
    return m_core.embedType();
}

inline void WebPageObject::setEmbedUrl(const QString &embedUrl) {
    if(m_core.embedUrl() == embedUrl) return;
    m_core.setEmbedUrl(embedUrl);
    Q_EMIT embedUrlChanged();
    Q_EMIT coreChanged();
}

inline QString WebPageObject::embedUrl() const {
    return m_core.embedUrl();
}

inline void WebPageObject::setEmbedWidth(qint32 embedWidth) {
    if(m_core.embedWidth() == embedWidth) return;
    m_core.setEmbedWidth(embedWidth);
    Q_EMIT embedWidthChanged();
    Q_EMIT coreChanged();
}

inline qint32 WebPageObject::embedWidth() const {
    return m_core.embedWidth();
}

inline void WebPageObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

inline qint32 WebPageObject::flags() const {
    return m_core.flags();
}

inline void WebPageObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

inline qint64 WebPageObject::id() const {
    return m_core.id();
}

inline void WebPageObject::setPhoto(PhotoObject* photo) {
    if(m_photo == photo) return;
    if(m_photo) delete m_photo;
    m_photo = photo;
    if(m_photo) {
        m_photo->setParent(this);
        m_core.setPhoto(m_photo->core());
        connect(m_photo.data(), &PhotoObject::coreChanged, this, &WebPageObject::corePhotoChanged);
    }
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

inline PhotoObject*  WebPageObject::photo() const {
    return m_photo;
}

inline void WebPageObject::setSiteName(const QString &siteName) {
    if(m_core.siteName() == siteName) return;
    m_core.setSiteName(siteName);
    Q_EMIT siteNameChanged();
    Q_EMIT coreChanged();
}

inline QString WebPageObject::siteName() const {
    return m_core.siteName();
}

inline void WebPageObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

inline QString WebPageObject::title() const {
    return m_core.title();
}

inline void WebPageObject::setType(const QString &type) {
    if(m_core.type() == type) return;
    m_core.setType(type);
    Q_EMIT typeChanged();
    Q_EMIT coreChanged();
}

inline QString WebPageObject::type() const {
    return m_core.type();
}

inline void WebPageObject::setUrl(const QString &url) {
    if(m_core.url() == url) return;
    m_core.setUrl(url);
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
}

inline QString WebPageObject::url() const {
    return m_core.url();
}

inline WebPageObject &WebPageObject::operator =(const WebPage &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_document->setCore(b.document());
    m_photo->setCore(b.photo());

    Q_EMIT authorChanged();
    Q_EMIT dateChanged();
    Q_EMIT descriptionChanged();
    Q_EMIT displayUrlChanged();
    Q_EMIT documentChanged();
    Q_EMIT durationChanged();
    Q_EMIT embedHeightChanged();
    Q_EMIT embedTypeChanged();
    Q_EMIT embedUrlChanged();
    Q_EMIT embedWidthChanged();
    Q_EMIT flagsChanged();
    Q_EMIT idChanged();
    Q_EMIT photoChanged();
    Q_EMIT siteNameChanged();
    Q_EMIT titleChanged();
    Q_EMIT typeChanged();
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool WebPageObject::operator ==(const WebPage &b) const {
    return m_core == b;
}

inline void WebPageObject::setClassType(quint32 classType) {
    WebPage::WebPageClassType result;
    switch(classType) {
    case TypeWebPageEmpty:
        result = WebPage::typeWebPageEmpty;
        break;
    case TypeWebPagePending:
        result = WebPage::typeWebPagePending;
        break;
    case TypeWebPage:
        result = WebPage::typeWebPage;
        break;
    default:
        result = WebPage::typeWebPageEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 WebPageObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case WebPage::typeWebPageEmpty:
        result = TypeWebPageEmpty;
        break;
    case WebPage::typeWebPagePending:
        result = TypeWebPagePending;
        break;
    case WebPage::typeWebPage:
        result = TypeWebPage;
        break;
    default:
        result = TypeWebPageEmpty;
        break;
    }

    return result;
}

inline void WebPageObject::setCore(const WebPage &core) {
    operator =(core);
}

inline WebPage WebPageObject::core() const {
    return m_core;
}

inline void WebPageObject::coreDocumentChanged() {
    if(m_core.document() == m_document->core()) return;
    m_core.setDocument(m_document->core());
    Q_EMIT documentChanged();
    Q_EMIT coreChanged();
}

inline void WebPageObject::corePhotoChanged() {
    if(m_core.photo() == m_photo->core()) return;
    m_core.setPhoto(m_photo->core());
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

#endif // LQTG_TYPE_WEBPAGE_OBJECT
