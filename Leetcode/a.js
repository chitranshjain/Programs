const getProductsByCategory = async (req, res, next) => {
  const category = req.params.category;
  let products;
  try {
    products = await Product.find({ category: category }).sort({
      price: "asc",
    });
  } catch (error) {
    const err = new HttpError("Could not find places.", 404);
    return next(err);
  }

  products.forEach((prod) => {
    prod.image = prod.image.replace(/\\/g, "/");
  });

  res.status(200).json({
    products: products.map((prod) => prod.toObject({ getters: true })),
  });
};
