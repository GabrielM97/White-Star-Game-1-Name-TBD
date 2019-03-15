#include "OverworldUiClass.h"

OverworldUiClass::OverworldUiClass()
{
}

OverworldUiClass::~OverworldUiClass()
{
}

bool OverworldUIWIndowTest::Initialise()
{
	EnemyTerritoryHexSheet->GetTransformComp().SetPosition({ 100, 600 });
	return true;
}

void OverworldUIWIndowTest::Update()
{
	BattleMapBackground->Render(SCREEN_SURFACE);
	EnemyTerritoryHexSheet->Render(SCREEN_SURFACE);
	SCREEN_SURFACE->DrawText(HAPISPACE::VectorI(EnemyTerritoryHexSheet->GetTransformComp().GetPosition().x + EnemyTerritoryHexSheet->GetCurrentFrame().rect.right/4 - 45, EnemyTerritoryHexSheet->GetTransformComp().GetPosition().y + EnemyTerritoryHexSheet->GetCurrentFrame().rect.bottom/4), HAPISPACE::Colour255::RED, "5.7", 90);
	if (true)//mouse colides with hex
	{
		EnemyTerritoryHexSheet->SetFrameNumber(1);
	}
	else
	{
		EnemyTerritoryHexSheet->SetFrameNumber(0);
	}
}



void OverworldUIWIndowTest::OnMouseEvent(EMouseEvent mouseEvent, const HAPI_TMouseData& mouseData)
{
	if (mouseEvent == EMouseEvent::eWheelForward)
	{
		cameraZoom += 0.1f;
		//m_heliSprite->GetTransformComp().SetScaling(m_heliSprite->GetTransformComp().GetScale() + 0.1f);//scales the sprites indevidually, temp solution. Will eventually scale camera. Also need to ask kieth if i was alowed to change his vector operator.
		//m_logoSprite->GetTransformComp().SetScaling(m_logoSprite->GetTransformComp().GetScale() + 0.1f);
		//m_stickySprite->GetTransformComp().SetScaling(m_stickySprite->GetTransformComp().GetScale() + 0.1f);
	}
	else if (mouseEvent == EMouseEvent::eWheelBack)
	{
		cameraZoom -= 0.1f;
		//m_heliSprite->GetTransformComp().SetScaling(m_heliSprite->GetTransformComp().GetScale() + -0.1f);//scales the sprites indevidually, temp solution
		//m_logoSprite->GetTransformComp().SetScaling(m_logoSprite->GetTransformComp().GetScale() + -0.1f);
		//m_stickySprite->GetTransformComp().SetScaling(m_stickySprite->GetTransformComp().GetScale() + -0.1f);
	}

	if (mouseEvent == EMouseEvent::eLeftButtonDown)
	{
		//mouseData.x//how do you check if a mouse click collided with a collider?
	}
}

void OverworldUIWIndowTest::OnKeyEvent(EKeyEvent keyEvent, BYTE keyCode)
{

}

/*
	This function is called from the UI when a radio button in the window changes state (pressed or unpressed)
	The userId is something that can be provided on creation but not used in this demo
*/
void OverworldUIWIndowTest::UI_RadioButtonChangeState(UIWindow& window, const std::string& buttonName, bool pressed, int* userId)
{
	/*if (buttonName == "EnableCollisionInfo")
	{
		m_stickySprite->GetColliderComp().CalculateCollisionData(pressed);
	}

	if (buttonName == "EnablePixelPerfect")
	{
		m_stickySprite->GetColliderComp().EnablePixelPerfectCollisions(pressed);
	}

	if (buttonName == "ShowBounds")
	{
		m_showBounds = pressed;
	}

	if (buttonName == "ShowNormals")
	{
		m_showNormals = pressed;
	}*/
}