package wig.compiler.builder;

import wig.compiler.symbolkind.Field;
import wig.compiler.symbolkind.Schema;
import wig.node.AField;
import wig.node.ASchema;

public class SchemaSymbolTable {

	public static Schema buildSchemaSymbolKind(final ASchema node) {
		final Schema returnValue = new Schema();
		returnValue.setName(node.getIdentifier().toString());
		for (Object fieldNode : node.getField()) {
			final Field field = new Field();
			field.setName(((AField)fieldNode).getIdentifier().toString());
			field.setType(((AField)fieldNode).getSimpletype().toString());
			returnValue.addField(field);
		}
		return returnValue;
	}
}
