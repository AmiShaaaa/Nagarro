$(document).ready(function () {
    $('#usernamevalidation').hide();
    $('#passwordvalidation').hide();
    $('#confirmpasswordvalidation').hide();

    var Error = true;
    var password_Error = true;
    var confirm_password_Error = true;
    var email_error = true;

    // Username Validation -->

    $('#username').keyup(function () {
        username_validation();
    });
    function username_validation() {
        var username_val = $('#username').val();
        if (username_val.length == '') {
            $('#usernamevalidation').show();
            $('#usernamevalidation').html('Username cannot be empty!!');
            $('#usernamevalidation').css('color', 'red');
            Error = false;
            return false;
        }
        else {
            $('#usernamevalidation').hide();
        }
        if (username_val.length < 4) {
            $('#usernamevalidation').show();
            $('#usernamevalidation').html('**Use atleast 4 characters');
            $('#usernamevalidation').css('color', 'red');
            Error = false;
            return false;
        }
        else {
            $('#usernamevalidation').hide();
        }
        if (username_val.length > 20) {
            $('#usernamevalidation').show();
            $('#usernamevalidation').html('**Word limit exceeded');
            $('#usernamevalidation').css('color', 'red');
            Error = false;
            return false;
        }
        else {
            $('#usernamevalidation').hide();
        }
    }

    // Password Validation -->

    $('#password').keyup(function () {
        password_validation();
    });
    function password_validation() {
        var password_val = $('#password').val();
        if (password_val.length == '') {
            $('#passwordvalidation').show();
            $('#passwordvalidation').html('**Password cannot be empty');
            $('#passwordvalidation').css('color', 'red');
            password_Error = false;
            return false;
        }
        else {
            $('#passwordvalidation').hide();
        }
        var password1 = new RegExp("^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#\$%\^&\*])(?=.{8,})");
        if(!password1.test(password_val)){
            $('#passwordvalidation').show();
            $('#passwordvalidation').html('Please type password in correct format');
            $('#passwordvalidation').css('color','red');
            password_error = false;
            return false;
        }
        else{
            $('#passwordvalidation').hide();
            password_error = true;
        }
        // if (password_val.length < 4) {
        //     $('#passwordvalidation').show();
        //     $('#passwordvalidation').html('Please enter password in correct format');
        //     $('#passwordvalidation').css('color', 'red');
        //     password_Error = false;
        //     return false;
        // }
        // else {
        //     $('#passwordvalidation').hide();
        // }
    }

    $('#confirmpassword').keyup(function () {
        confirm_password();
    });

    function confirm_password() {
        var confirm_password_val = $('#confirmpassword').val();
        var password_val = $('#password').val();
        if (password_val != confirm_password_val) {
            $('#confirmpasswordvalidation').show();
            $('#confirmpasswordvalidation').html('**Password did not match');
            $('#confirmpasswordvalidation').css('color', 'red');
            confirm_password_Error = false;
            return false;
        }
        else {
            $('#confirmpasswordvalidation').hide();
        }
    }



    $('#email').keyup(function(){
        email_validation();
    });

    function email_validation(){
        var email_val=$('#email').val();
        if(email_val.length==''){
            $('#emailvalidation').show();
            $('#emailvalidation').html('Email cannot be empty');
            $('#emailvalidation').css('color','red');
    
            email_error=false;
            return false;
        }
        var email1=/^([\-\.0-9a-zA-Z]+)@([\-\.0-9a-zA-Z]+)\.([a-zA-Z]){2,7}$/;
        if(!email1.test(email_val)){
            $('#emailvalidation').show();
            $('#emailvalidation').html('Enter email in correct format');
            $('#emailvalidation').css('color','red');
    
            email_error=false;
            return false;
        }
        else{
            $('#emailvalidation').hide();
            email_error=true;
        }
    }



    $('submitvalidation').click(function () {
        username_validation();
        password_validation();
        confirm_password();
        if (Error == true && password_Error == true && confirm_password_Error == true) {
            return true
        }
        else {
            return false;
        }
    });
});

// var strongRegex = new RegExp("^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#\$%\^&\*])(?=.{8,})");
// var emailregex = /^([_\-\.0-9a-zA-Z]+)@([_\-\.0-9a-zA-Z]+)\.([a-zA-Z]){2,7}$/;