# DS-project (XML-editor)
  the goal of this project is to apply data structures concepts and implement structures manually to build an XML editor with other extra functionalities
  
# Functionalities
Home tab
  ● GUI in which the user can specify the location of an input XML file. 
  or create a new file 
  
Format tab
  ● consistency: The input XML may have inconsistencies like missing any of the closing and opening tags or not matching tags.
      detects and visually shows any errors in consistency.
  ● Fix: solves these errors(closes opened tags).
  ● Formatting (Prettifying): formats the XML by keeping the indentation for each level.
  ● Save: saves changes in current file or to a new file.

Compression tab
  ● Converting XML to JSON: JSON (Javascript Object Notation) is another format that is used to represent data.
  ● Minify: Since spaces and newlines (\n) are actually characters that can increase the size of an XML document. This feature aims at decreasing the size of an XML 
    file (compressing it) by deleting the whitespaces and indentations.
  ● Compression: ...
  ● Decompressing the compressed data to return to its original format.
  
Insights tab (Network Analysis)
  this tab and search only works if the input file contained these requirements(for more information see the attached sample):
  -the XML file represents the users data in a social network (their posts, followers, ...etc).
  -The user contains: id (unique across the network), name, list of his posts and followers.
  
  the relation between the followers is represented using the graph data hence there are some extracted important data
  ● who is the most influencer user (has the most followers).
  ● who is the most active user (connected to lots of users).
  ● the mutual followers between 2 users (only visible when a user is selected).
  ● for each user, suggest a list of users to follow (the followers of his followers) (only visible when a user is selected).
  ● List of users in this network. 
  
Search tab (Network Analysis)
  ● Post search: given a specific word or topic, get the posts where this word or topic was mentioned.

#Used tools
  the GUI was made using microsoft visual studio cpp/clr winforms.
