# DS-project (XML-editor)
  the goal of this project is to apply data structures concepts and implement structures manually to build an XML editor with other extra functionalities <br />
  
# Functionalities
Home tab <br />
  ● GUI in which the user can specify the location of an input XML file.  <br />
  or create a new file 
 <br />
Format tab <br />
  ● consistency: The input XML may have inconsistencies like missing any of the closing and opening tags or not matching tags. <br />
      detects and visually shows any errors in consistency. <br />
  ● Fix: solves these errors(closes opened tags). <br />
  ● Formatting (Prettifying): formats the XML by keeping the indentation for each level. <br />
  ● Save: saves changes in current file or to a new file. <br />
 <br />
Compression tab <br />
  ● Converting XML to JSON: JSON (Javascript Object Notation) is another format that is used to represent data. <br />
  ● Minify: Since spaces and newlines (\n) are actually characters that can increase the size of an XML document. This feature aims at decreasing the size of an XML  <br />
    file (compressing it) by deleting the whitespaces and indentations. <br />
  ● Compression:  Using Huffman compression to compress the text <br />
  ● Decompressing: the compressed data to return to its original format. <br />
   <br />
Insights tab (Network Analysis) <br />
  this tab and search only works if the input file contained these requirements(for more information see the attached sample): <br />
  -the XML file represents the users data in a social network (their posts, followers, ...etc). <br />
  -The user contains: id (unique across the network), name, list of his posts and followers. <br />
  -starts with the tag: <users>
  <br /> 
  the relation between the followers is represented using the graph data hence there are some extracted important data <br />
  ● who is the most influencer user (has the most followers). <br />
  ● who is the most active user (connected to lots of users). <br />
  ● the mutual followers between 2 users (only visible when a user is selected). <br />
  ● for each user, suggest a list of users to follow (the followers of his followers) (only visible when a user is selected). <br />
  ● List of users in this network.  <br />
   <br />
Search tab (Network Analysis) <br />
  ● Post search: given a specific word or topic, get the posts where this word or topic was mentioned. <br />
 <br />
# Used tools 
  the GUI was made using microsoft visual studio cpp/clr winforms. the main method can be found in Form.cpp<br />
