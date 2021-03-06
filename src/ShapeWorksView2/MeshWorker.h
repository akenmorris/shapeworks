/*
 * Shapeworks license
 */

/**
 * @file MeshWorker.h
 * @brief Worker class for parallel mesh reconstruction
 *
 * The MeshWorker implements each threads mesh construction management
 */

#ifndef MESH_WORKER_H
#define MESH_WORKER_H

#include <QObject>
#include <QWaitCondition>

#include <MeshWorkQueue.h>
#include <MeshCache.h>
#include <MeshGenerator.h>

class MeshWorker : public QObject
{
  Q_OBJECT

public:
	MeshWorker(Preferences& prefs, 
		const vnl_vector<double> shape, 
		MeshWorkQueue *queue,
		MeshCache * cache);
	~MeshWorker();
  MeshGenerator* getMeshGenerator();

public Q_SLOTS:
  void process();

Q_SIGNALS:
  void result_ready();

private:
  Preferences& prefs_;
  MeshGenerator meshGenerator_;
  vnl_vector<double> shape_;
  MeshWorkQueue *queue_;
  MeshCache * cache_;

};

#endif // ifndef MESH_WORKER_H
