# InputPeer

## Types

* [typeInputPeerEmpty](#inputpeertypeinputpeerempty)
* [typeInputPeerSelf](#inputpeertypeinputpeerself)
* [typeInputPeerContact](#inputpeertypeinputpeercontact)
* [typeInputPeerForeign](#inputpeertypeinputpeerforeign)
* [typeInputPeerChat](#inputpeertypeinputpeerchat)

## InputPeer::typeInputPeerEmpty

#### Schema:

```c++
inputPeerEmpty#7f3b18ea = InputPeer;
```

#### Parameters:


## InputPeer::typeInputPeerSelf

#### Schema:

```c++
inputPeerSelf#7da07ec9 = InputPeer;
```

#### Parameters:


## InputPeer::typeInputPeerContact

#### Schema:

```c++
inputPeerContact#1023dbe8 user_id:int = InputPeer;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|

## InputPeer::typeInputPeerForeign

#### Schema:

```c++
inputPeerForeign#9b447325 user_id:int access_hash:long = InputPeer;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|accessHash|qint64|

## InputPeer::typeInputPeerChat

#### Schema:

```c++
inputPeerChat#179be863 chat_id:int = InputPeer;
```

#### Parameters:

|Name|Type|
|----|----|
|chatId|qint32|

