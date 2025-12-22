const ft_list = document.getElementById("ft_list");

let count = 0;
if (localStorage.getItem("last_count") != null) {
    count = Number(localStorage.getItem("last_count")) + 1;
    
    load_cookie();
    
    localStorage.clear();
};

function checkinsert () {
    let task_name = window.prompt("Please enter the task name:");
    
    if (task_name != null && task_name != "" ) {

        let new_id = "div"+count;

        add_task(new_id, task_name);

        localStorage.setItem("minhas_tasks", ft_list.innerHTML);
    
    } else {
        window.alert("Forgot the task name!");
    }

}

function add_task(id, task_name) {

    const new_div = document.createElement("div");

    new_div.setAttribute("id", id);

    new_div.innerText = task_name;

    new_div.setAttribute("onclick", "remove_el('"+id+"')");
    
    ft_list.prepend(new_div);

    // console.log(new_id + "=" + task_name);

    count += 1;
    localStorage.setItem("last_count", count);

}

function remove_el (id) {

    if ( window.confirm("Delete task?") ) {
        document.getElementById(id).remove();

        localStorage.setItem("minhas_tasks", ft_list.innerHTML);

        // localStorage.removeItem(id);
        // console.log(id + " - deleted");
    }

}

function load_cookie() {

    const saved_tasks = localStorage.getItem("minhas_tasks");

    ft_list.innerHTML = saved_tasks;

}


