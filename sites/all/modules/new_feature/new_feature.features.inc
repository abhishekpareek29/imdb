<?php
/**
 * @file
 * new_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function new_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function new_feature_node_info() {
  $items = array(
    'movie' => array(
      'name' => t('Movie'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Movie'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
