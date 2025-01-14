# MP3 Tag Reader

An MP3 Tag Reader is a software application designed to extract and display metadata embedded within MP3 audio files. This metadata, known as ID3 tags, includes information such as the song title, artist, album, release year, genre, and sometimes album artwork. ID3 tags enhance the user experience by organizing and displaying song information in media players and library management systems.

The primary function of an MP3 Tag Reader is to parse these ID3 tags and present the information in a human-readable format. This involves reading the MP3 file's binary data, identifying the presence and version of ID3 tags (such as ID3v1 or ID3v2), and extracting the relevant metadata fields. Advanced MP3 Tag Readers can handle various tag versions and gracefully manage files that may have missing or corrupted metadata.

## Features

- **Read MP3 Files**: Analyze and parse MP3 files to identify ID3 tags.
- **Detect ID3 Version**: Determine whether the file uses ID3v1 or ID3v2.
- **Display Metadata**: Extract and display key information such as Title, Artist, Album, Year, and Genre.
- **Handle Errors**: Manage cases where metadata is missing or the file does not contain ID3 tags.

## Sample Output

When you run the MP3 Tag Reader on a file, it displays the metadata in a structured format. For example:

```yaml
File: example.mp3
--------------------
Title: Imagine
Artist: John Lennon
Album: Imagine
Year: 1971
Genre: Rock
