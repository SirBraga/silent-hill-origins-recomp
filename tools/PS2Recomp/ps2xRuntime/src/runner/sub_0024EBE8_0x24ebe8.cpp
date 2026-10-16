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

// Function: sub_0024EBE8
// Address: 0x24ebe8 - 0x24ec28
void sub_0024EBE8_0x24ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EBE8_0x24ebe8");
#endif

    switch (ctx->pc) {
        case 0x24ebe8u: goto label_24ebe8;
        case 0x24ebecu: goto label_24ebec;
        case 0x24ebf0u: goto label_24ebf0;
        case 0x24ebf4u: goto label_24ebf4;
        case 0x24ebf8u: goto label_24ebf8;
        case 0x24ebfcu: goto label_24ebfc;
        case 0x24ec00u: goto label_24ec00;
        case 0x24ec04u: goto label_24ec04;
        case 0x24ec08u: goto label_24ec08;
        case 0x24ec0cu: goto label_24ec0c;
        case 0x24ec10u: goto label_24ec10;
        case 0x24ec14u: goto label_24ec14;
        case 0x24ec18u: goto label_24ec18;
        case 0x24ec1cu: goto label_24ec1c;
        case 0x24ec20u: goto label_24ec20;
        case 0x24ec24u: goto label_24ec24;
        default: break;
    }

    ctx->pc = 0x24ebe8u;

label_24ebe8:
    // 0x24ebe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ebe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24ebec:
    // 0x24ebec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24ebecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_24ebf0:
    // 0x24ebf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24ebf4:
    // 0x24ebf4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24ebf8:
    // 0x24ebf8: 0x8c633f80  lw          $v1, 0x3F80($v1)
    ctx->pc = 0x24ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16256)));
label_24ebfc:
    // 0x24ebfc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24ec00:
    // 0x24ec00: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24ec04:
    // 0x24ec04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24ec08:
    // 0x24ec08: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_24ec0c:
    // 0x24ec0c: 0x40f809  jalr        $v0
label_24ec10:
    if (ctx->pc == 0x24EC10u) {
        ctx->pc = 0x24EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC0Cu;
        // 0x24ec10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC14u;
        goto label_24ec14;
    }
    ctx->pc = 0x24EC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24EC14u);
        ctx->pc = 0x24EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC0Cu;
        // 0x24ec10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EC0Cu, 0x24EC14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24EC14u;
label_24ec14:
    // 0x24ec14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24ec14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ec18:
    // 0x24ec18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24ec18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24ec1c:
    // 0x24ec1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ec1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24ec20:
    // 0x24ec20: 0x3e00008  jr          $ra
label_24ec24:
    if (ctx->pc == 0x24EC24u) {
        ctx->pc = 0x24EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC20u;
        // 0x24ec24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24EC28u;
        goto label_fallthrough_0x24ec20;
    }
    ctx->pc = 0x24EC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EC20u;
        // 0x24ec24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24ec20:
    ctx->pc = 0x24EC28u;
}
