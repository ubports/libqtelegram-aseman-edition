# ChatParticipants

## Types

* [typeChatParticipantsForbidden](#chatparticipantstypechatparticipantsforbidden)
* [typeChatParticipants](#chatparticipantstypechatparticipants)

## ChatParticipants::typeChatParticipantsForbidden

#### Schema:

```c++
chatParticipantsForbidden#fd2bb8a chat_id:int = ChatParticipants;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|

## ChatParticipants::typeChatParticipants

#### Schema:

```c++
chatParticipants#7841b415 chat_id:int admin_id:int participants:Vector<ChatParticipant> version:int = ChatParticipants;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|
|adminId|qint32|
|participants|QList&lt;[ChatParticipant](chatparticipant.md)&gt;|
|version|qint32|

