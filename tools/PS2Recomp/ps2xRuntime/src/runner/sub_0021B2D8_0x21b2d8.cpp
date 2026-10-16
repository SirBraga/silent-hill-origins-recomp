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

// Function: sub_0021B2D8
// Address: 0x21b2d8 - 0x21b318
void sub_0021B2D8_0x21b2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B2D8_0x21b2d8");
#endif

    switch (ctx->pc) {
        case 0x21b2d8u: goto label_21b2d8;
        case 0x21b2dcu: goto label_21b2dc;
        case 0x21b2e0u: goto label_21b2e0;
        case 0x21b2e4u: goto label_21b2e4;
        case 0x21b2e8u: goto label_21b2e8;
        case 0x21b2ecu: goto label_21b2ec;
        case 0x21b2f0u: goto label_21b2f0;
        case 0x21b2f4u: goto label_21b2f4;
        case 0x21b2f8u: goto label_21b2f8;
        case 0x21b2fcu: goto label_21b2fc;
        case 0x21b300u: goto label_21b300;
        case 0x21b304u: goto label_21b304;
        case 0x21b308u: goto label_21b308;
        case 0x21b30cu: goto label_21b30c;
        case 0x21b310u: goto label_21b310;
        case 0x21b314u: goto label_21b314;
        default: break;
    }

    ctx->pc = 0x21b2d8u;

label_21b2d8:
    // 0x21b2d8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x21b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_21b2dc:
    // 0x21b2dc: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x21b2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_21b2e0:
    // 0x21b2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21b2e4:
    // 0x21b2e4: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x21b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_21b2e8:
    // 0x21b2e8: 0x8cc402c0  lw          $a0, 0x2C0($a2)
    ctx->pc = 0x21b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 704)));
label_21b2ec:
    // 0x21b2ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21b2f0:
    // 0x21b2f0: 0x40f809  jalr        $v0
label_21b2f4:
    if (ctx->pc == 0x21B2F4u) {
        ctx->pc = 0x21B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2F0u;
        // 0x21b2f4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B2F8u;
        goto label_21b2f8;
    }
    ctx->pc = 0x21B2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B2F8u);
        ctx->pc = 0x21B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2F0u;
        // 0x21b2f4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B2F0u, 0x21B2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B2F8u;
label_21b2f8:
    // 0x21b2f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21b2f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b2fc:
    // 0x21b2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21b300:
    // 0x21b300: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x21b300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_21b304:
    // 0x21b304: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x21b304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_21b308:
    // 0x21b308: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x21b308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_21b30c:
    // 0x21b30c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x21b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_21b310:
    // 0x21b310: 0x3e00008  jr          $ra
label_21b314:
    if (ctx->pc == 0x21B314u) {
        ctx->pc = 0x21B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B310u;
        // 0x21b314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B318u;
        goto label_fallthrough_0x21b310;
    }
    ctx->pc = 0x21B310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B310u;
        // 0x21b314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21b310:
    ctx->pc = 0x21B318u;
}
