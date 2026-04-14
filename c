tunnel: lootops-storage
credentials-file: /home/subhan/.cloudflared/5fc7cd56-54a0-4ff2-aa97-f252042169f5.json

# 🌐 Ingress rules (traffic routing)
ingress:

  # 📁 MAIN WEBSITE (Node.js API + Admin Panel)
  - hostname: storage.lootops.me
    service: http://localhost:80

  # 🛒 OPTIONAL: future admin panel subdomain
  - hostname: admin.lootops.me
    service: http://localhost:3000

  # 📦 OPTIONAL: API subdomain (future scaling)
  - hostname: api.lootops.me
    service: http://localhost:5000

  # ❌ Catch-all (required)
  - service: http_status:404
