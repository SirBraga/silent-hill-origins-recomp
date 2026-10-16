#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D3048
// Address: 0x1d3048 - 0x1d3098
void sub_001D3048_0x1d3048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3048_0x1d3048");
#endif

    switch (ctx->pc) {
        case 0x1d3048u: goto label_1d3048;
        case 0x1d304cu: goto label_1d304c;
        case 0x1d3050u: goto label_1d3050;
        case 0x1d3054u: goto label_1d3054;
        case 0x1d3058u: goto label_1d3058;
        case 0x1d305cu: goto label_1d305c;
        case 0x1d3060u: goto label_1d3060;
        case 0x1d3064u: goto label_1d3064;
        case 0x1d3068u: goto label_1d3068;
        case 0x1d306cu: goto label_1d306c;
        case 0x1d3070u: goto label_1d3070;
        case 0x1d3074u: goto label_1d3074;
        case 0x1d3078u: goto label_1d3078;
        case 0x1d307cu: goto label_1d307c;
        case 0x1d3080u: goto label_1d3080;
        case 0x1d3084u: goto label_1d3084;
        case 0x1d3088u: goto label_1d3088;
        case 0x1d308cu: goto label_1d308c;
        case 0x1d3090u: goto label_1d3090;
        case 0x1d3094u: goto label_1d3094;
        default: break;
    }

    ctx->pc = 0x1d3048u;

label_1d3048:
    // 0x1d3048: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1d3048u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
label_1d304c:
    // 0x1d304c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d304cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d3050:
    // 0x1d3050: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d3050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d3054:
    // 0x1d3054: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d3054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1d3058:
    // 0x1d3058: 0x8d079b5c  lw          $a3, -0x64A4($t0)
    ctx->pc = 0x1d3058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941532)));
label_1d305c:
    // 0x1d305c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d3060:
    // 0x1d3060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3064:
    // 0x1d3064: 0xacc59b6c  sw          $a1, -0x6494($a2)
    ctx->pc = 0x1d3064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294941548), GPR_U32(ctx, 5));
label_1d3068:
    // 0x1d3068: 0xac649b68  sw          $a0, -0x6498($v1)
    ctx->pc = 0x1d3068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941544), GPR_U32(ctx, 4));
label_1d306c:
    // 0x1d306c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d306cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3070:
    // 0x1d3070: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1d3070u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1d3074:
    // 0x1d3074: 0x8d069b5c  lw          $a2, -0x64A4($t0)
    ctx->pc = 0x1d3074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941532)));
label_1d3078:
    // 0x1d3078: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1d307c:
    // 0x1d307c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1d307cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1d3080:
    // 0x1d3080: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1d3080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1d3084:
    // 0x1d3084: 0x60f809  jalr        $v1
label_1d3088:
    if (ctx->pc == 0x1D3088u) {
        ctx->pc = 0x1D3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3084u;
        // 0x1d3088: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D308Cu;
        goto label_1d308c;
    }
    ctx->pc = 0x1D3084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D308Cu);
        ctx->pc = 0x1D3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3084u;
        // 0x1d3088: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3084u, 0x1D308Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D308Cu;
label_1d308c:
    // 0x1d308c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d308cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3090:
    // 0x1d3090: 0x3e00008  jr          $ra
label_1d3094:
    if (ctx->pc == 0x1D3094u) {
        ctx->pc = 0x1D3094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3090u;
        // 0x1d3094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3098u;
        goto label_fallthrough_0x1d3090;
    }
    ctx->pc = 0x1D3090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3090u;
        // 0x1d3094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d3090:
    ctx->pc = 0x1D3098u;
}
