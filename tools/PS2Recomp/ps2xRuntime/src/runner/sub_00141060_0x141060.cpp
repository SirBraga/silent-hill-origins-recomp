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

// Function: sub_00141060
// Address: 0x141060 - 0x1410c0
void sub_00141060_0x141060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141060_0x141060");
#endif

    switch (ctx->pc) {
        case 0x141084u: goto label_141084;
        case 0x1410a0u: goto label_1410a0;
        case 0x1410acu: goto label_1410ac;
        default: break;
    }

    ctx->pc = 0x141060u;

    // 0x141060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x141060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x141064: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x141064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x141068: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x141068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14106c: 0x24a51010  addiu       $a1, $a1, 0x1010
    ctx->pc = 0x14106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4112));
    // 0x141070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141074: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x141074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x141078: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x141078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14107c: 0xc09545a  jal         func_255168
    ctx->pc = 0x14107Cu;
    SET_GPR_U32(ctx, 31, 0x141084u);
    ctx->pc = 0x141080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14107Cu;
    // 0x141080: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x14107Cu, 0x141084u)) {
        return;
    }
    ctx->pc = 0x141084u;
label_141084:
    // 0x141084: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x141084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141088: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141088u;
    {
        const bool branch_taken_0x141088 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x14108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141088u;
        // 0x14108c: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141088) {
            ctx->pc = 0x141098u;
            goto label_141098;
        }
    }
    ctx->pc = 0x141090u;
    // 0x141090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x141090u;
    {
        const bool branch_taken_0x141090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141090u;
        // 0x141094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141090) {
            ctx->pc = 0x1410B0u;
            goto label_1410b0;
        }
    }
    ctx->pc = 0x141098u;
label_141098:
    // 0x141098: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x141098u;
    SET_GPR_U32(ctx, 31, 0x1410A0u);
    ctx->pc = 0x14109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141098u;
    // 0x14109c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x141098u, 0x1410A0u)) {
        return;
    }
    ctx->pc = 0x1410A0u;
label_1410a0:
    // 0x1410a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1410a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1410a4: 0xc050212  jal         func_140848
    ctx->pc = 0x1410A4u;
    SET_GPR_U32(ctx, 31, 0x1410ACu);
    ctx->pc = 0x1410A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1410A4u;
    // 0x1410a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140848u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140848u, 0x1410A4u, 0x1410ACu)) {
        return;
    }
    ctx->pc = 0x1410ACu;
label_1410ac:
    // 0x1410ac: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x1410acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
label_1410b0:
    // 0x1410b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1410b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1410b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1410b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1410b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1410B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1410BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410B8u;
        // 0x1410bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1410B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1410C0u;
}
