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

// Function: sub_001D0FE0
// Address: 0x1d0fe0 - 0x1d1018
void sub_001D0FE0_0x1d0fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0FE0_0x1d0fe0");
#endif

    switch (ctx->pc) {
        case 0x1d0fe0u: goto label_1d0fe0;
        case 0x1d0fe4u: goto label_1d0fe4;
        case 0x1d0fe8u: goto label_1d0fe8;
        case 0x1d0fecu: goto label_1d0fec;
        case 0x1d0ff0u: goto label_1d0ff0;
        case 0x1d0ff4u: goto label_1d0ff4;
        case 0x1d0ff8u: goto label_1d0ff8;
        case 0x1d0ffcu: goto label_1d0ffc;
        case 0x1d1000u: goto label_1d1000;
        case 0x1d1004u: goto label_1d1004;
        case 0x1d1008u: goto label_1d1008;
        case 0x1d100cu: goto label_1d100c;
        case 0x1d1010u: goto label_1d1010;
        case 0x1d1014u: goto label_1d1014;
        default: break;
    }

    ctx->pc = 0x1d0fe0u;

label_1d0fe0:
    // 0x1d0fe0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d0fe4:
    // 0x1d0fe4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0fe8:
    // 0x1d0fe8: 0x8c459a34  lw          $a1, -0x65CC($v0)
    ctx->pc = 0x1d0fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941236)));
label_1d0fec:
    // 0x1d0fec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1d0ff0:
    if (ctx->pc == 0x1D0FF0u) {
        ctx->pc = 0x1D0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FECu;
        // 0x1d0ff0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0FF4u;
        goto label_1d0ff4;
    }
    ctx->pc = 0x1D0FECu;
    {
        const bool branch_taken_0x1d0fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FECu;
        // 0x1d0ff0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0fec) {
            ctx->pc = 0x1D1008u;
            goto label_1d1008;
        }
    }
    ctx->pc = 0x1D0FF4u;
label_1d0ff4:
    // 0x1d0ff4: 0x8ca20258  lw          $v0, 0x258($a1)
    ctx->pc = 0x1d0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_1d0ff8:
    // 0x1d0ff8: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d0ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1d0ffc:
    // 0x1d0ffc: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1d0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1d1000:
    // 0x1d1000: 0x60f809  jalr        $v1
label_1d1004:
    if (ctx->pc == 0x1D1004u) {
        ctx->pc = 0x1D1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1000u;
        // 0x1d1004: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1008u;
        goto label_1d1008;
    }
    ctx->pc = 0x1D1000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D1008u);
        ctx->pc = 0x1D1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1000u;
        // 0x1d1004: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1000u, 0x1D1008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1008u;
label_1d1008:
    // 0x1d1008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d100c:
    // 0x1d100c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1010:
    // 0x1d1010: 0x3e00008  jr          $ra
label_1d1014:
    if (ctx->pc == 0x1D1014u) {
        ctx->pc = 0x1D1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1010u;
        // 0x1d1014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1018u;
        goto label_fallthrough_0x1d1010;
    }
    ctx->pc = 0x1D1010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1010u;
        // 0x1d1014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d1010:
    ctx->pc = 0x1D1018u;
}
