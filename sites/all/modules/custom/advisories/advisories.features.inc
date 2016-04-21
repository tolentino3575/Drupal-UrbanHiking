<?php
/**
 * @file
 * advisories.features.inc
 */

/**
 * Implements hook_node_info().
 */
function advisories_node_info() {
  $items = array(
    'advisory' => array(
      'name' => t('Advisory'),
      'base' => 'node_content',
      'description' => t('Create an advisory for people looking into the hikes'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
