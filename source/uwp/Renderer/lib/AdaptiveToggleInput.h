// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "ToggleInput.h"
#include "AdaptiveInputElement.h"

namespace AdaptiveNamespace
{
    class DECLSPEC_UUID("502edea9-72fd-4856-a89e-54565181bed8") AdaptiveToggleInput
        : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
                                              ABI::AdaptiveNamespace::IAdaptiveToggleInput,
                                              ABI::AdaptiveNamespace::IAdaptiveInputElement,
                                              ABI::AdaptiveNamespace::IAdaptiveCardElement,
                                              Microsoft::WRL::CloakedIid<ITypePeek>,
                                              Microsoft::WRL::CloakedIid<AdaptiveNamespace::AdaptiveInputElementBase>>
    {
        AdaptiveRuntime(AdaptiveToggleInput);

    public:
        HRESULT RuntimeClassInitialize() noexcept;
        HRESULT RuntimeClassInitialize(const std::shared_ptr<AdaptiveSharedNamespace::ToggleInput>& sharedToggleInput);

        // IAdaptiveToggleInput
        IFACEMETHODIMP get_Title(_Outptr_ HSTRING* title);
        IFACEMETHODIMP put_Title(_In_ HSTRING title);

        IFACEMETHODIMP get_Wrap(_Out_ boolean* wrap);
        IFACEMETHODIMP put_Wrap(boolean wrap);

        IFACEMETHODIMP get_Value(_Outptr_ HSTRING* value);
        IFACEMETHODIMP put_Value(_In_ HSTRING value);

        IFACEMETHODIMP get_ValueOff(_Outptr_ HSTRING* value);
        IFACEMETHODIMP put_ValueOff(_In_ HSTRING value);

        IFACEMETHODIMP get_ValueOn(_Outptr_ HSTRING* value);
        IFACEMETHODIMP put_ValueOn(_In_ HSTRING value);

        // IAdaptiveInputElement
        IFACEMETHODIMP get_IsRequired(_Out_ boolean* isRequired)
        {
            return AdaptiveInputElementBase::get_IsRequired(isRequired);
        }
        IFACEMETHODIMP put_IsRequired(boolean isRequired)
        {
            return AdaptiveInputElementBase::put_IsRequired(isRequired);
        }

        IFACEMETHODIMP get_ErrorMessage(_Outptr_ HSTRING* errorMessage)
        {
            return AdaptiveInputElementBase::get_ErrorMessage(errorMessage);
        }
        IFACEMETHODIMP put_ErrorMessage(_In_ HSTRING errorMessage)
        {
            return AdaptiveInputElementBase::put_ErrorMessage(errorMessage);
        }

        // IAdaptiveCardElement
        IFACEMETHODIMP get_ElementType(_Out_ ABI::AdaptiveNamespace::ElementType* elementType);

        IFACEMETHODIMP get_Spacing(_Out_ ABI::AdaptiveNamespace::Spacing* spacing)
        {
            return AdaptiveCardElementBase::get_Spacing(spacing);
        }
        IFACEMETHODIMP put_Spacing(ABI::AdaptiveNamespace::Spacing spacing)
        {
            return AdaptiveCardElementBase::put_Spacing(spacing);
        }

        IFACEMETHODIMP get_Separator(_Out_ boolean* separator)
        {
            return AdaptiveCardElementBase::get_Separator(separator);
        }
        IFACEMETHODIMP put_Separator(boolean separator) { return AdaptiveCardElementBase::put_Separator(separator); }

        IFACEMETHODIMP get_IsVisible(_Out_ boolean* isVisible)
        {
            return AdaptiveCardElementBase::get_IsVisible(isVisible);
        }
        IFACEMETHODIMP put_IsVisible(boolean isVisible) { return AdaptiveCardElementBase::put_IsVisible(isVisible); }

        IFACEMETHODIMP get_Id(_Outptr_ HSTRING* id) { return AdaptiveCardElementBase::get_Id(id); }
        IFACEMETHODIMP put_Id(_In_ HSTRING id) { return AdaptiveCardElementBase::put_Id(id); }

        IFACEMETHODIMP get_FallbackType(_Out_ ABI::AdaptiveNamespace::FallbackType* fallback)
        {
            return AdaptiveCardElementBase::get_FallbackType(fallback);
        }
        IFACEMETHODIMP get_FallbackContent(_COM_Outptr_ ABI::AdaptiveNamespace::IAdaptiveCardElement** content)
        {
            return AdaptiveCardElementBase::get_FallbackContent(content);
        }

        IFACEMETHODIMP put_FallbackType(ABI::AdaptiveNamespace::FallbackType fallback)
        {
            return AdaptiveCardElementBase::put_FallbackType(fallback);
        }

        IFACEMETHODIMP put_FallbackContent(_In_ ABI::AdaptiveNamespace::IAdaptiveCardElement* content)
        {
            return AdaptiveCardElementBase::put_FallbackContent(content);
        }

        IFACEMETHODIMP get_ElementTypeString(_Outptr_ HSTRING* value)
        {
            return AdaptiveCardElementBase::get_ElementTypeString(value);
        }

        IFACEMETHODIMP get_AdditionalProperties(_COM_Outptr_ ABI::Windows::Data::Json::IJsonObject** result)
        {
            return AdaptiveCardElementBase::get_AdditionalProperties(result);
        }
        IFACEMETHODIMP put_AdditionalProperties(_In_ ABI::Windows::Data::Json::IJsonObject* value)
        {
            return AdaptiveCardElementBase::put_AdditionalProperties(value);
        }

        IFACEMETHODIMP get_Requirements(
            _COM_Outptr_ ABI::Windows::Foundation::Collections::IVector<ABI::AdaptiveNamespace::AdaptiveRequirement*>** requirements)
        {
            return AdaptiveCardElementBase::get_Requirements(requirements);
        }

        IFACEMETHODIMP ToJson(_COM_Outptr_ ABI::Windows::Data::Json::IJsonObject** result)
        {
            return AdaptiveCardElementBase::ToJson(result);
        }

        virtual HRESULT GetSharedModel(std::shared_ptr<AdaptiveSharedNamespace::BaseCardElement>& sharedModel) override;

        IFACEMETHODIMP get_Height(_Out_ ABI::AdaptiveNamespace::HeightType* height)
        {
            return AdaptiveCardElementBase::get_Height(height);
        }
        IFACEMETHODIMP put_Height(ABI::AdaptiveNamespace::HeightType height)
        {
            return AdaptiveCardElementBase::put_Height(height);
        }

        // ITypePeek method
        void* PeekAt(REFIID riid) override { return PeekHelper(riid, this); }

    private:
        Microsoft::WRL::Wrappers::HString m_title;
        Microsoft::WRL::Wrappers::HString m_value;
        Microsoft::WRL::Wrappers::HString m_valueOn;
        Microsoft::WRL::Wrappers::HString m_valueOff;
        boolean m_wrap;
    };

    ActivatableClass(AdaptiveToggleInput);
}
