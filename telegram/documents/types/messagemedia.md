# MessageMedia

## Types

* [typeMessageMediaEmpty](#messagemediatypemessagemediaempty)
* [typeMessageMediaPhoto](#messagemediatypemessagemediaphoto)
* [typeMessageMediaGeo](#messagemediatypemessagemediageo)
* [typeMessageMediaContact](#messagemediatypemessagemediacontact)
* [typeMessageMediaUnsupported](#messagemediatypemessagemediaunsupported)
* [typeMessageMediaDocument](#messagemediatypemessagemediadocument)
* [typeMessageMediaWebPage](#messagemediatypemessagemediawebpage)
* [typeMessageMediaVenue](#messagemediatypemessagemediavenue)

## MessageMedia::typeMessageMediaEmpty

#### Schema:

```c++
messageMediaEmpty#3ded6320 = MessageMedia;
```

#### Parameters:


## MessageMedia::typeMessageMediaPhoto

#### Schema:

```c++
messageMediaPhoto#3d8ce53d photo:Photo caption:string = MessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|photo|[Photo](photo.md)|
|caption|QString|

## MessageMedia::typeMessageMediaGeo

#### Schema:

```c++
messageMediaGeo#56e0d474 geo:GeoPoint = MessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|geo|[GeoPoint](geopoint.md)|

## MessageMedia::typeMessageMediaContact

#### Schema:

```c++
messageMediaContact#5e7d2f39 phone_number:string first_name:string last_name:string user_id:int = MessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|phoneNumber|QString|
|firstName|QString|
|lastName|QString|
|userId|qint32|

## MessageMedia::typeMessageMediaUnsupported

#### Schema:

```c++
messageMediaUnsupported#9f84f49e = MessageMedia;
```

#### Parameters:


## MessageMedia::typeMessageMediaDocument

#### Schema:

```c++
messageMediaDocument#f3e02ea8 document:Document caption:string = MessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|document|[Document](document.md)|
|caption|QString|

## MessageMedia::typeMessageMediaWebPage

#### Schema:

```c++
messageMediaWebPage#a32dd600 webpage:WebPage = MessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|webpage|[WebPage](webpage.md)|

## MessageMedia::typeMessageMediaVenue

#### Schema:

```c++
messageMediaVenue#7912b71f geo:GeoPoint title:string address:string provider:string venue_id:string = MessageMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|geo|[GeoPoint](geopoint.md)|
|title|QString|
|address|QString|
|provider|QString|
|venueId|QString|

