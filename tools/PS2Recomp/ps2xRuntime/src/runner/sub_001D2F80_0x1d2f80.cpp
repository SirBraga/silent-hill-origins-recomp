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

// Function: sub_001D2F80
// Address: 0x1d2f80 - 0x1d2ff8
void sub_001D2F80_0x1d2f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2F80_0x1d2f80");
#endif

    switch (ctx->pc) {
        case 0x1d2f80u: goto label_1d2f80;
        case 0x1d2f84u: goto label_1d2f84;
        case 0x1d2f88u: goto label_1d2f88;
        case 0x1d2f8cu: goto label_1d2f8c;
        case 0x1d2f90u: goto label_1d2f90;
        case 0x1d2f94u: goto label_1d2f94;
        case 0x1d2f98u: goto label_1d2f98;
        case 0x1d2f9cu: goto label_1d2f9c;
        case 0x1d2fa0u: goto label_1d2fa0;
        case 0x1d2fa4u: goto label_1d2fa4;
        case 0x1d2fa8u: goto label_1d2fa8;
        case 0x1d2facu: goto label_1d2fac;
        case 0x1d2fb0u: goto label_1d2fb0;
        case 0x1d2fb4u: goto label_1d2fb4;
        case 0x1d2fb8u: goto label_1d2fb8;
        case 0x1d2fbcu: goto label_1d2fbc;
        case 0x1d2fc0u: goto label_1d2fc0;
        case 0x1d2fc4u: goto label_1d2fc4;
        case 0x1d2fc8u: goto label_1d2fc8;
        case 0x1d2fccu: goto label_1d2fcc;
        case 0x1d2fd0u: goto label_1d2fd0;
        case 0x1d2fd4u: goto label_1d2fd4;
        case 0x1d2fd8u: goto label_1d2fd8;
        case 0x1d2fdcu: goto label_1d2fdc;
        case 0x1d2fe0u: goto label_1d2fe0;
        case 0x1d2fe4u: goto label_1d2fe4;
        case 0x1d2fe8u: goto label_1d2fe8;
        case 0x1d2fecu: goto label_1d2fec;
        case 0x1d2ff0u: goto label_1d2ff0;
        case 0x1d2ff4u: goto label_1d2ff4;
        default: break;
    }

    ctx->pc = 0x1d2f80u;

label_1d2f80:
    // 0x1d2f80: 0x3c0b0034  lui         $t3, 0x34
    ctx->pc = 0x1d2f80u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)52 << 16));
label_1d2f84:
    // 0x1d2f84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d2f88:
    // 0x1d2f88: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d2f8c:
    // 0x1d2f8c: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x1d2f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
label_1d2f90:
    // 0x1d2f90: 0x8d6a9b5c  lw          $t2, -0x64A4($t3)
    ctx->pc = 0x1d2f90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294941532)));
label_1d2f94:
    // 0x1d2f94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d2f98:
    // 0x1d2f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d2f9c:
    // 0x1d2f9c: 0xac479b68  sw          $a3, -0x6498($v0)
    ctx->pc = 0x1d2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941544), GPR_U32(ctx, 7));
label_1d2fa0:
    // 0x1d2fa0: 0xad289b6c  sw          $t0, -0x6494($t1)
    ctx->pc = 0x1d2fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294941548), GPR_U32(ctx, 8));
label_1d2fa4:
    // 0x1d2fa4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d2fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2fa8:
    // 0x1d2fa8: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x1d2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
label_1d2fac:
    // 0x1d2fac: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d2facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d2fb0:
    // 0x1d2fb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d2fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2fb4:
    // 0x1d2fb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d2fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2fb8:
    // 0x1d2fb8: 0x8d689b5c  lw          $t0, -0x64A4($t3)
    ctx->pc = 0x1d2fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294941532)));
label_1d2fbc:
    // 0x1d2fbc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1d2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1d2fc0:
    // 0x1d2fc0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1d2fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1d2fc4:
    // 0x1d2fc4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1d2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1d2fc8:
    // 0x1d2fc8: 0x60f809  jalr        $v1
label_1d2fcc:
    if (ctx->pc == 0x1D2FCCu) {
        ctx->pc = 0x1D2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FC8u;
        // 0x1d2fcc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2FD0u;
        goto label_1d2fd0;
    }
    ctx->pc = 0x1D2FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D2FD0u);
        ctx->pc = 0x1D2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FC8u;
        // 0x1d2fcc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2FC8u, 0x1D2FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2FD0u;
label_1d2fd0:
    // 0x1d2fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2fd4:
    // 0x1d2fd4: 0x3e00008  jr          $ra
label_1d2fd8:
    if (ctx->pc == 0x1D2FD8u) {
        ctx->pc = 0x1D2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FD4u;
        // 0x1d2fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2FDCu;
        goto label_1d2fdc;
    }
    ctx->pc = 0x1D2FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FD4u;
        // 0x1d2fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2FDCu;
label_1d2fdc:
    // 0x1d2fdc: 0x0  nop
    ctx->pc = 0x1d2fdcu;
    // NOP
label_1d2fe0:
    // 0x1d2fe0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d2fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d2fe4:
    // 0x1d2fe4: 0x0  nop
    ctx->pc = 0x1d2fe4u;
    // NOP
label_1d2fe8:
    // 0x1d2fe8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d2fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d2fec:
    // 0x1d2fec: 0x0  nop
    ctx->pc = 0x1d2fecu;
    // NOP
label_1d2ff0:
    // 0x1d2ff0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d2ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d2ff4:
    // 0x1d2ff4: 0x0  nop
    ctx->pc = 0x1d2ff4u;
    // NOP
    ctx->pc = 0x1d2ff8u;
}
