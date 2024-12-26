const mongoose = require("mongoose");
const moment = require("moment");

const accountSchema = new mongoose.Schema({
  sender: { type: String, required: true },
  receiver: { type: String, required: true },
  content: { type: String, required: true },
  date: { 
    type: String, 
    default: () => moment().format("YYYY-MM-DD") 
  }, // Default date in YYYY-MM-DD format
  time: { 
    type: String, 
    default: () => moment().format("hh:mm a") 
  } // Default time in hh:mm am/pm format
});

// Middleware to log data before saving
accountSchema.pre("save", function (next) {
  console.log(`Saving Chat: ${this}`);
  next();
});

module.exports = mongoose.model("Chat", accountSchema);
