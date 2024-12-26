const mongoose = require("mongoose");
const AutoIncrement = require("mongoose-sequence")(mongoose);

const accountSchema = new mongoose.Schema({
  name: { type: String, required: true },
  email: { type: String, required: true, unique: true },
  password: { type: String, required: true },
});

// Add auto-increment plugin for the `id` field
accountSchema.plugin(AutoIncrement, { inc_field: "id" });

module.exports = mongoose.model("Account", accountSchema);
