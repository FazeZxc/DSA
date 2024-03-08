var head;

class Node{
    constructor(d) {
        this.data = d;
        this.next = null;
    }
}

function push(new_data) {
    var new_node = new Node(new_data)
    new_node.next = head
    head = new_node
}

function insertAfter(prev_node, new_data){
    if(prev_node == null){
        document.write("The given previous node cannot be null")
        return
    }
    var new_node = new Node(new_data)
    new_node.next = prev_node.next  
    prev_node.next = new_node 
}

function append(new_data){
    var new_node = new Node(new_data)
    if(head == NULL){
        head = new Node(new_data)
        return
    }
    new_node.next = NULL
    var last = head 
    while(last.next != NULL){
        last = last.next
    }
    last.next = new_node
    return
}