# MessagesSentMessage

## Types

* [typeMessagesSentMessage](#messagessentmessagetypemessagessentmessage)
* [typeMessagesSentMessageLink](#messagessentmessagetypemessagessentmessagelink)

## MessagesSentMessage::typeMessagesSentMessage

#### Schema:

```c++
messages.sentMessage#4c3d47f3 id:int date:int media:MessageMedia pts:int pts_count:int = messages.SentMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|date|qint32|
|media|[MessageMedia](messagemedia.md)|
|pts|qint32|
|ptsCount|qint32|

## MessagesSentMessage::typeMessagesSentMessageLink

#### Schema:

```c++
messages.sentMessageLink#35a1a663 id:int date:int media:MessageMedia pts:int pts_count:int links:Vector<contacts.Link> seq:int = messages.SentMessage;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|date|qint32|
|media|[MessageMedia](messagemedia.md)|
|pts|qint32|
|ptsCount|qint32|
|links|QList&lt;[ContactsLink](contactslink.md)&gt;|
|seq|qint32|

