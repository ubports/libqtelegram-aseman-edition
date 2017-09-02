# MessageAction

## Types

* [typeMessageActionEmpty](#messageactiontypemessageactionempty)
* [typeMessageActionChatCreate](#messageactiontypemessageactionchatcreate)
* [typeMessageActionChatEditTitle](#messageactiontypemessageactionchatedittitle)
* [typeMessageActionChatEditPhoto](#messageactiontypemessageactionchateditphoto)
* [typeMessageActionChatDeletePhoto](#messageactiontypemessageactionchatdeletephoto)
* [typeMessageActionChatAddUser](#messageactiontypemessageactionchatadduser)
* [typeMessageActionChatDeleteUser](#messageactiontypemessageactionchatdeleteuser)
* [typeMessageActionChatJoinedByLink](#messageactiontypemessageactionchatjoinedbylink)

## MessageAction::typeMessageActionEmpty

#### Schema:

```c++
messageActionEmpty#b6aef7b0 = MessageAction;
```

#### Parameters:


## MessageAction::typeMessageActionChatCreate

#### Schema:

```c++
messageActionChatCreate#a6638b9a title:string users:Vector<int> = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|title|QString|
|users|QList&lt;qint32&gt;|

## MessageAction::typeMessageActionChatEditTitle

#### Schema:

```c++
messageActionChatEditTitle#b5a1ce5a title:string = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|title|QString|

## MessageAction::typeMessageActionChatEditPhoto

#### Schema:

```c++
messageActionChatEditPhoto#7fcb13a8 photo:Photo = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|photo|[Photo](photo.md)|

## MessageAction::typeMessageActionChatDeletePhoto

#### Schema:

```c++
messageActionChatDeletePhoto#95e3fbef = MessageAction;
```

#### Parameters:


## MessageAction::typeMessageActionChatAddUser

#### Schema:

```c++
messageActionChatAddUser#5e3cfc4b user_id:int = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|

## MessageAction::typeMessageActionChatDeleteUser

#### Schema:

```c++
messageActionChatDeleteUser#b2ae9b0c user_id:int = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|

## MessageAction::typeMessageActionChatJoinedByLink

#### Schema:

```c++
messageActionChatJoinedByLink#f89cf5e8 inviter_id:int = MessageAction;
```

#### Parameters:

|Name|Type|
|----|----|
|inviterId|qint32|

