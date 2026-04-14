server {
    listen 80;
    server_name storage.lootops.me;

    # 📁 FILES (UPLOADS)
    location /uploads/ {
        alias /var/www/storage/uploads/;
        autoindex on;
        try_files $uri $uri/ =404;
    }

    # 🚀 NODE API SERVER
    location / {
        proxy_pass http://localhost:5000;
        proxy_http_version 1.1;
        proxy_set_header Upgrade $http_upgrade;
        proxy_set_header Connection "upgrade";
        proxy_set_header Host $host;
        proxy_cache_bypass $http_upgrade;
    }
}
