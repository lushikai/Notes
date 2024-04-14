# mysql.ini
```
[mysql]
default-character-set=utf8
[mysqld]
port = xxxx
basedir = D:\Downloads\MySQL\mysql-8.0.36-winx64
datadir = D:\Downloads\MySQL\mysql-8.0.36-winx64\\data
max_connections = 20
character-set-server = utf8
default-storage-engine = INNODB
sql_mode = NO_ENGINE_SUBSTITUTION,STRICT_TRANS_TABLES
```

# Initial
```
mysqld --initialize-insecure
```
```
mysqld –-initialize
```

# Install
```
mysqld --install
```

# Start
```
net start mysql
```

# Login
```
mysql -u root -p
```

# Select password
```
select host,user,authentication_string from mysql.user;
```

# Set root password
```
use mysql; 
ALTER user 'root'@'localhost' IDENTIFIED BY 'xxxx';
FLUSH PRIVILEGES;
```

# Uninstall
```
net stop mysql
```
```
mysqld --remove mysql
```