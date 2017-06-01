# GeochatsMessages

## Types

* [typeGeochatsMessages](#geochatsmessagestypegeochatsmessages)
* [typeGeochatsMessagesSlice](#geochatsmessagestypegeochatsmessagesslice)

## GeochatsMessages::typeGeochatsMessages

#### Schema:

```c++
geochats.messages#d1526db1 messages:Vector<GeoChatMessage> chats:Vector<Chat> users:Vector<User> = geochats.Messages;
```

#### Parameters:

|Name|Type|
|----|----|
|messages|QList&lt;[GeoChatMessage](geochatmessage.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

## GeochatsMessages::typeGeochatsMessagesSlice

#### Schema:

```c++
geochats.messagesSlice#bc5863e8 count:int messages:Vector<GeoChatMessage> chats:Vector<Chat> users:Vector<User> = geochats.Messages;
```

#### Parameters:

|Name|Type|
|----|----|
|count|qint32|
|messages|QList&lt;[GeoChatMessage](geochatmessage.md)&gt;|
|chats|QList&lt;[Chat](chat.md)&gt;|
|users|QList&lt;[User](user.md)&gt;|

