<?php
/**
 * @file
 * new_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function new_feature_taxonomy_default_vocabularies() {
  return array(
    'moviegenre' => array(
      'name' => 'moviegenre',
      'machine_name' => 'moviegenre',
      'description' => 'Movie Genre',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
