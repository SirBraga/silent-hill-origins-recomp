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

// Function: sub_001D2FF8
// Address: 0x1d2ff8 - 0x1d3048
void sub_001D2FF8_0x1d2ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2FF8_0x1d2ff8");
#endif

    switch (ctx->pc) {
        case 0x1d2ff8u: goto label_1d2ff8;
        case 0x1d2ffcu: goto label_1d2ffc;
        case 0x1d3000u: goto label_1d3000;
        case 0x1d3004u: goto label_1d3004;
        case 0x1d3008u: goto label_1d3008;
        case 0x1d300cu: goto label_1d300c;
        case 0x1d3010u: goto label_1d3010;
        case 0x1d3014u: goto label_1d3014;
        case 0x1d3018u: goto label_1d3018;
        case 0x1d301cu: goto label_1d301c;
        case 0x1d3020u: goto label_1d3020;
        case 0x1d3024u: goto label_1d3024;
        case 0x1d3028u: goto label_1d3028;
        case 0x1d302cu: goto label_1d302c;
        case 0x1d3030u: goto label_1d3030;
        case 0x1d3034u: goto label_1d3034;
        case 0x1d3038u: goto label_1d3038;
        case 0x1d303cu: goto label_1d303c;
        case 0x1d3040u: goto label_1d3040;
        case 0x1d3044u: goto label_1d3044;
        default: break;
    }

    ctx->pc = 0x1d2ff8u;

label_1d2ff8:
    // 0x1d2ff8: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1d2ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
label_1d2ffc:
    // 0x1d2ffc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d3000:
    // 0x1d3000: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d3000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d3004:
    // 0x1d3004: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d3004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1d3008:
    // 0x1d3008: 0x8d079b5c  lw          $a3, -0x64A4($t0)
    ctx->pc = 0x1d3008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941532)));
label_1d300c:
    // 0x1d300c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d3010:
    // 0x1d3010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3014:
    // 0x1d3014: 0xacc59b6c  sw          $a1, -0x6494($a2)
    ctx->pc = 0x1d3014u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294941548), GPR_U32(ctx, 5));
label_1d3018:
    // 0x1d3018: 0xac649b68  sw          $a0, -0x6498($v1)
    ctx->pc = 0x1d3018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941544), GPR_U32(ctx, 4));
label_1d301c:
    // 0x1d301c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3020:
    // 0x1d3020: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1d3020u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1d3024:
    // 0x1d3024: 0x8d069b5c  lw          $a2, -0x64A4($t0)
    ctx->pc = 0x1d3024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941532)));
label_1d3028:
    // 0x1d3028: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1d3028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1d302c:
    // 0x1d302c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1d302cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1d3030:
    // 0x1d3030: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1d3030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1d3034:
    // 0x1d3034: 0x60f809  jalr        $v1
label_1d3038:
    if (ctx->pc == 0x1D3038u) {
        ctx->pc = 0x1D3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3034u;
        // 0x1d3038: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D303Cu;
        goto label_1d303c;
    }
    ctx->pc = 0x1D3034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D303Cu);
        ctx->pc = 0x1D3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3034u;
        // 0x1d3038: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3034u, 0x1D303Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D303Cu;
label_1d303c:
    // 0x1d303c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d303cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3040:
    // 0x1d3040: 0x3e00008  jr          $ra
label_1d3044:
    if (ctx->pc == 0x1D3044u) {
        ctx->pc = 0x1D3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3040u;
        // 0x1d3044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3048u;
        goto label_fallthrough_0x1d3040;
    }
    ctx->pc = 0x1D3040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3040u;
        // 0x1d3044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d3040:
    ctx->pc = 0x1D3048u;
}
