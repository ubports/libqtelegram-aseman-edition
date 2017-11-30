# InputMedia

## Types

* [typeInputMediaEmpty](#inputmediatypeinputmediaempty)
* [typeInputMediaUploadedPhoto](#inputmediatypeinputmediauploadedphoto)
* [typeInputMediaPhoto](#inputmediatypeinputmediaphoto)
* [typeInputMediaGeoPoint](#inputmediatypeinputmediageopoint)
* [typeInputMediaContact](#inputmediatypeinputmediacontact)
* [typeInputMediaUploadedVideo](#inputmediatypeinputmediauploadedvideo)
* [typeInputMediaUploadedThumbVideo](#inputmediatypeinputmediauploadedthumbvideo)
* [typeInputMediaVideo](#inputmediatypeinputmediavideo)
* [typeInputMediaUploadedAudio](#inputmediatypeinputmediauploadedaudio)
* [typeInputMediaAudio](#inputmediatypeinputmediaaudio)
* [typeInputMediaUploadedDocument](#inputmediatypeinputmediauploadeddocument)
* [typeInputMediaUploadedThumbDocument](#inputmediatypeinputmediauploadedthumbdocument)
* [typeInputMediaDocument](#inputmediatypeinputmediadocument)
* [typeInputMediaVenue](#inputmediatypeinputmediavenue)

## InputMedia::typeInputMediaEmpty

#### Schema:

```c++
inputMediaEmpty#9664f57f = InputMedia;
```

#### Parameters:


## InputMedia::typeInputMediaUploadedPhoto

#### Schema:

```c++
inputMediaUploadedPhoto#f7aff1c0 file:InputFile caption:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|caption|QString|

## InputMedia::typeInputMediaPhoto

#### Schema:

```c++
inputMediaPhoto#e9bfb4f3 id:InputPhoto caption:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|id|[InputPhoto](inputphoto.md)|
|caption|QString|

## InputMedia::typeInputMediaGeoPoint

#### Schema:

```c++
inputMediaGeoPoint#f9c44144 geo_point:InputGeoPoint = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|geoPoint|[InputGeoPoint](inputgeopoint.md)|

## InputMedia::typeInputMediaContact

#### Schema:

```c++
inputMediaContact#a6e45987 phone_number:string first_name:string last_name:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|phoneNumber|QString|
|firstName|QString|
|lastName|QString|

## InputMedia::typeInputMediaUploadedVideo

#### Schema:

```c++
inputMediaUploadedVideo#82713fdf file:InputFile duration:int w:int h:int mime_type:string caption:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|duration|qint32|
|w|qint32|
|h|qint32|
|mimeType|QString|
|caption|QString|

## InputMedia::typeInputMediaUploadedThumbVideo

#### Schema:

```c++
inputMediaUploadedThumbVideo#7780ddf9 file:InputFile thumb:InputFile duration:int w:int h:int mime_type:string caption:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|thumb|[InputFile](inputfile.md)|
|duration|qint32|
|w|qint32|
|h|qint32|
|mimeType|QString|
|caption|QString|

## InputMedia::typeInputMediaVideo

#### Schema:

```c++
inputMediaVideo#936a4ebd id:InputVideo caption:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|id|[InputVideo](inputvideo.md)|
|caption|QString|

## InputMedia::typeInputMediaUploadedAudio

#### Schema:

```c++
inputMediaUploadedAudio#4e498cab file:InputFile duration:int mime_type:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|duration|qint32|
|mimeType|QString|

## InputMedia::typeInputMediaAudio

#### Schema:

```c++
inputMediaAudio#89938781 id:InputAudio = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|id|[InputAudio](inputaudio.md)|

## InputMedia::typeInputMediaUploadedDocument

#### Schema:

```c++
inputMediaUploadedDocument#ffe76b78 file:InputFile mime_type:string attributes:Vector<DocumentAttribute> = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|mimeType|QString|
|attributes|QList&lt;[DocumentAttribute](documentattribute.md)&gt;|

## InputMedia::typeInputMediaUploadedThumbDocument

#### Schema:

```c++
inputMediaUploadedThumbDocument#41481486 file:InputFile thumb:InputFile mime_type:string attributes:Vector<DocumentAttribute> = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|file|[InputFile](inputfile.md)|
|thumb|[InputFile](inputfile.md)|
|mimeType|QString|
|attributes|QList&lt;[DocumentAttribute](documentattribute.md)&gt;|

## InputMedia::typeInputMediaDocument

#### Schema:

```c++
inputMediaDocument#d184e841 id:InputDocument = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|id|[InputDocument](inputdocument.md)|

## InputMedia::typeInputMediaVenue

#### Schema:

```c++
inputMediaVenue#2827a81a geo_point:InputGeoPoint title:string address:string provider:string venue_id:string = InputMedia;
```

#### Parameters:

|Name|Type|
|----|----|
|geoPoint|[InputGeoPoint](inputgeopoint.md)|
|title|QString|
|address|QString|
|provider|QString|
|venueId|QString|

