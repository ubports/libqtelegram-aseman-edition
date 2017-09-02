# UpdatesType

## Types

* [typeUpdatesTooLong](#updatestypetypeupdatestoolong)
* [typeUpdateShortMessage](#updatestypetypeupdateshortmessage)
* [typeUpdateShortChatMessage](#updatestypetypeupdateshortchatmessage)
* [typeUpdateShort](#updatestypetypeupdateshort)
* [typeUpdatesCombined](#updatestypetypeupdatescombined)
* [typeUpdates](#updatestypetypeupdates)
* [typeUpdateShortSentMessage](#updatestypetypeupdateshortsentmessage)

## UpdatesType::typeUpdatesTooLong

#### Schema:

```c++
updatesTooLong#e317af7e = Updates;
```

#### Parameters:


## UpdatesType::typeUpdateShortMessage

#### Schema:

```c++
updateShortMessage#3f32d858 flags:# id:int user_id:int message:string pts:int pts_count:int date:int fwd_from_id:flags.2?int fwd_date:flags.2?int reply_to_msg_id:flags.3?int entities:flags.7?Vector<MessageEntity> = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|userId|qint32|
|message|QString|
|pts|qint32|
|ptsCount|qint32|
|date|qint32|
|fwdFromId|qint32|
|fwdDate|qint32|
|replyToMsgId|qint32|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|

## UpdatesType::typeUpdateShortChatMessage

#### Schema:

```c++
updateShortChatMessage#f9409b3d flags:# id:int from_id:int chat_id:int message:string pts:int pts_count:int date:int fwd_from_id:flags.2?int fwd_date:flags.2?int reply_to_msg_id:flags.3?int entities:flags.7?Vector<MessageEntity> = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|fromId|qint32|
|chatId|qint32|
|message|QString|
|pts|qint32|
|ptsCount|qint32|
|date|qint32|
|fwdFromId|qint32|
|fwdDate|qint32|
|replyToMsgId|qint32|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|

## UpdatesType::typeUpdateShort

#### Schema:

```c++
updateShort#78d4dec1 update:Update date:int = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|update|[Update](update.md)|
|date|qint32|

## UpdatesType::typeUpdatesCombined

#### Schema:

```c++
updatesCombined#725b04c3 updates:Vector<Update> users:Vector<User> chats:Vector<Chat> date:int seq_start:int seq:int = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|updates|QList&lt;[Update](update.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|date|qint32|
|seqStart|qint32|
|seq|qint32|

## UpdatesType::typeUpdates

#### Schema:

```c++
updates#74ae4240 updates:Vector<Update> users:Vector<User> chats:Vector<Chat> date:int seq:int = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|updates|QList&lt;[Update](update.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|date|qint32|
|seq|qint32|

## UpdatesType::typeUpdateShortSentMessage

#### Schema:

```c++
updateShortSentMessage#11f1331c flags:# id:int pts:int pts_count:int date:int media:flags.9?MessageMedia entities:flags.7?Vector<MessageEntity> = Updates;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|pts|qint32|
|ptsCount|qint32|
|date|qint32|
|media|[MessageMedia](messagemedia.md)|
|entities|QList&lt;[MessageEntity](messageentity.md)&gt;|

