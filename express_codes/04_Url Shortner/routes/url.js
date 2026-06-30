const express = require("express");
const { handleGenerateNewShortURL } = require("../controllers/url");
const { handleClickRequest } = require("../controllers/click");
const { handleGetAnalytics } = require("../controllers/analytics")
const handleCheckDuplicatedUrl = require("../middlewares/redirect_url");
const router = express.Router();

router.post("/", handleCheckDuplicatedUrl, handleGenerateNewShortURL);
router.get("/url/:shortId", handleClickRequest);
router.get("/analytics", handleGetAnalytics);

module.exports = router;