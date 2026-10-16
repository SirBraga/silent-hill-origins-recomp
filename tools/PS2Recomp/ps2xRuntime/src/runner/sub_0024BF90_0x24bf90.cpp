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

// Function: sub_0024BF90
// Address: 0x24bf90 - 0x24bfd0
void sub_0024BF90_0x24bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BF90_0x24bf90");
#endif

    switch (ctx->pc) {
        case 0x24bf90u: goto label_24bf90;
        case 0x24bf94u: goto label_24bf94;
        case 0x24bf98u: goto label_24bf98;
        case 0x24bf9cu: goto label_24bf9c;
        case 0x24bfa0u: goto label_24bfa0;
        case 0x24bfa4u: goto label_24bfa4;
        case 0x24bfa8u: goto label_24bfa8;
        case 0x24bfacu: goto label_24bfac;
        case 0x24bfb0u: goto label_24bfb0;
        case 0x24bfb4u: goto label_24bfb4;
        case 0x24bfb8u: goto label_24bfb8;
        case 0x24bfbcu: goto label_24bfbc;
        case 0x24bfc0u: goto label_24bfc0;
        case 0x24bfc4u: goto label_24bfc4;
        case 0x24bfc8u: goto label_24bfc8;
        case 0x24bfccu: goto label_24bfcc;
        default: break;
    }

    ctx->pc = 0x24bf90u;

label_24bf90:
    // 0x24bf90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24bf94:
    // 0x24bf94: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x24bf94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_24bf98:
    // 0x24bf98: 0x8cc63f60  lw          $a2, 0x3F60($a2)
    ctx->pc = 0x24bf98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16224)));
label_24bf9c:
    // 0x24bf9c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24bfa0:
    // 0x24bfa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24bfa4:
    // 0x24bfa4: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_24bfa8:
    // 0x24bfa8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24bfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24bfac:
    // 0x24bfac: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x24bfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_24bfb0:
    // 0x24bfb0: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x24bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_24bfb4:
    // 0x24bfb4: 0x40f809  jalr        $v0
label_24bfb8:
    if (ctx->pc == 0x24BFB8u) {
        ctx->pc = 0x24BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFB4u;
        // 0x24bfb8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BFBCu;
        goto label_24bfbc;
    }
    ctx->pc = 0x24BFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24BFBCu);
        ctx->pc = 0x24BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFB4u;
        // 0x24bfb8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BFB4u, 0x24BFBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BFBCu;
label_24bfbc:
    // 0x24bfbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24bfc0:
    // 0x24bfc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24bfc4:
    // 0x24bfc4: 0x3e00008  jr          $ra
label_24bfc8:
    if (ctx->pc == 0x24BFC8u) {
        ctx->pc = 0x24BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFC4u;
        // 0x24bfc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BFCCu;
        goto label_24bfcc;
    }
    ctx->pc = 0x24BFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFC4u;
        // 0x24bfc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BFCCu;
label_24bfcc:
    // 0x24bfcc: 0x0  nop
    ctx->pc = 0x24bfccu;
    // NOP
    ctx->pc = 0x24bfd0u;
}
