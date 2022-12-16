#include "operations.h"
#include "XmlToTree.h"

int main()
{
    string xml = "<users>\
    <user>\
        <id>1</id>\
        <name>Ahmed Ali</name>\
        <posts>\
            <post>\
                <body>\
                    Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\
                </body>\
                <topics>\
                    <topic>\
                        economy\
                    </topic>\
                    <topic>\
                        finance\
                    </topic>\
                </topics>\
            </post>\
            <post>\
                <body>\
                    Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\
                </body>\
                <topics>\
                    <topic>\
                        solar_energy\
                    </topic>\
                </topics>\
            </post>\
        </posts>\
        <followers>\
            <follower>\
                <id>2</id>\
            </follower>\
            <follower>\
                <id>3</id>\
            </follower>\
        </followers>\
    </user>\
    <user>\
        <id>2</id>\
        <name>Yasser Ahmed</name>\
        <posts>\
            <post>\
                <body>\
                    Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\
                </body>\
                <topics>\
                    <topic>\
                        education\
                    </topic>\
                </topics>\
            </post>\
        </posts>\
        <followers>\
            <follower>\
                <id>1</id>\
            </follower>\
        </followers>\
    </user>\
    <user>\
        <id>3</id>\
        <name>Mohamed Sherif</name>\
        <posts>\
            <post>\
                <body>\
                    Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\
                </body>\
                <topics>\
                    <topic>\
                        sports\
                    </topic>\
                </topics>\
            </post>\
        </posts>\
        <followers>\
            <follower>\
                <id>1</id>\
            </follower>\
        </followers>\
    </user>\
</users>";

    string minXML = minify(xml);
    cout << minXML;

    // test XmlToTree
    vector<string> elementsTry = {"<Users>", "<user>", "<id>", "1", "</id>", "<name>", "Ahmed Ali", "</name>", "</user>", "<user>", "<id>", "2", "</id>"};
    // string elements[] = {"<Users>", "<user>", "<id>", "1", "</id>", "<name>", "Ahmed Ali", "</name>"};
    Node *trial = new Node(elementsTry[0]);
    // Node *trial =new Node("5");
    trial->buildTree(elementsTry);
    cout << "finish";
    return 0;
}
