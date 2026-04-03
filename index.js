const express = require("express");
const app = express();

app.get("/", (req, res) => {
  res.send("🚀 My server is running on Cloudflare Tunnel!");
});

app.listen(3000, () => {
  console.log("Server running on port 3000");
});
