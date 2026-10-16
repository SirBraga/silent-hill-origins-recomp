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

// Function: sub_0024EBA8
// Address: 0x24eba8 - 0x24ebe8
void sub_0024EBA8_0x24eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EBA8_0x24eba8");
#endif

    switch (ctx->pc) {
        case 0x24eba8u: goto label_24eba8;
        case 0x24ebacu: goto label_24ebac;
        case 0x24ebb0u: goto label_24ebb0;
        case 0x24ebb4u: goto label_24ebb4;
        case 0x24ebb8u: goto label_24ebb8;
        case 0x24ebbcu: goto label_24ebbc;
        case 0x24ebc0u: goto label_24ebc0;
        case 0x24ebc4u: goto label_24ebc4;
        case 0x24ebc8u: goto label_24ebc8;
        case 0x24ebccu: goto label_24ebcc;
        case 0x24ebd0u: goto label_24ebd0;
        case 0x24ebd4u: goto label_24ebd4;
        case 0x24ebd8u: goto label_24ebd8;
        case 0x24ebdcu: goto label_24ebdc;
        case 0x24ebe0u: goto label_24ebe0;
        case 0x24ebe4u: goto label_24ebe4;
        default: break;
    }

    ctx->pc = 0x24eba8u;

label_24eba8:
    // 0x24eba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24eba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24ebac:
    // 0x24ebac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_24ebb0:
    // 0x24ebb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24ebb4:
    // 0x24ebb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24ebb8:
    // 0x24ebb8: 0x8c633f80  lw          $v1, 0x3F80($v1)
    ctx->pc = 0x24ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16256)));
label_24ebbc:
    // 0x24ebbc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24ebc0:
    // 0x24ebc0: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24ebc4:
    // 0x24ebc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24ebc8:
    // 0x24ebc8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_24ebcc:
    // 0x24ebcc: 0x40f809  jalr        $v0
label_24ebd0:
    if (ctx->pc == 0x24EBD0u) {
        ctx->pc = 0x24EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBCCu;
        // 0x24ebd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EBD4u;
        goto label_24ebd4;
    }
    ctx->pc = 0x24EBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24EBD4u);
        ctx->pc = 0x24EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBCCu;
        // 0x24ebd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EBCCu, 0x24EBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24EBD4u;
label_24ebd4:
    // 0x24ebd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24ebd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ebd8:
    // 0x24ebd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24ebd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24ebdc:
    // 0x24ebdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ebdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24ebe0:
    // 0x24ebe0: 0x3e00008  jr          $ra
label_24ebe4:
    if (ctx->pc == 0x24EBE4u) {
        ctx->pc = 0x24EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBE0u;
        // 0x24ebe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EBE8u;
        goto label_fallthrough_0x24ebe0;
    }
    ctx->pc = 0x24EBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EBE0u;
        // 0x24ebe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24ebe0:
    ctx->pc = 0x24EBE8u;
}
