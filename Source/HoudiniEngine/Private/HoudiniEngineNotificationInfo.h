/*
 * PROPRIETARY INFORMATION.  This software is proprietary to
 * Side Effects Software Inc., and is not to be reproduced,
 * transmitted, or disclosed in any way without written permission.
 *
 * Produced by:
 *      Mykola Konyk
 *      Side Effects Software Inc
 *      123 Front Street West, Suite 1401
 *      Toronto, Ontario
 *      Canada   M5J 2M2
 *      416-504-9876
 *
 */

#pragma once

struct FHoudiniEngineNotificationInfo : public FNotificationInfo
{
	/** Constructor which just passes parameter to the base class. **/
	FHoudiniEngineNotificationInfo(const FText& InText);

	/** Whether this notification is being removed. **/
	bool bScheduledRemoved;

	/** Whether this notification needs update. **/
	bool bScheduledUpdate;
};
