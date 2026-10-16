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

// Function: sub_001D2EB0
// Address: 0x1d2eb0 - 0x1d2f30
void sub_001D2EB0_0x1d2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2EB0_0x1d2eb0");
#endif

    switch (ctx->pc) {
        case 0x1d2eb0u: goto label_1d2eb0;
        case 0x1d2eb4u: goto label_1d2eb4;
        case 0x1d2eb8u: goto label_1d2eb8;
        case 0x1d2ebcu: goto label_1d2ebc;
        case 0x1d2ec0u: goto label_1d2ec0;
        case 0x1d2ec4u: goto label_1d2ec4;
        case 0x1d2ec8u: goto label_1d2ec8;
        case 0x1d2eccu: goto label_1d2ecc;
        case 0x1d2ed0u: goto label_1d2ed0;
        case 0x1d2ed4u: goto label_1d2ed4;
        case 0x1d2ed8u: goto label_1d2ed8;
        case 0x1d2edcu: goto label_1d2edc;
        case 0x1d2ee0u: goto label_1d2ee0;
        case 0x1d2ee4u: goto label_1d2ee4;
        case 0x1d2ee8u: goto label_1d2ee8;
        case 0x1d2eecu: goto label_1d2eec;
        case 0x1d2ef0u: goto label_1d2ef0;
        case 0x1d2ef4u: goto label_1d2ef4;
        case 0x1d2ef8u: goto label_1d2ef8;
        case 0x1d2efcu: goto label_1d2efc;
        case 0x1d2f00u: goto label_1d2f00;
        case 0x1d2f04u: goto label_1d2f04;
        case 0x1d2f08u: goto label_1d2f08;
        case 0x1d2f0cu: goto label_1d2f0c;
        case 0x1d2f10u: goto label_1d2f10;
        case 0x1d2f14u: goto label_1d2f14;
        case 0x1d2f18u: goto label_1d2f18;
        case 0x1d2f1cu: goto label_1d2f1c;
        case 0x1d2f20u: goto label_1d2f20;
        case 0x1d2f24u: goto label_1d2f24;
        case 0x1d2f28u: goto label_1d2f28;
        case 0x1d2f2cu: goto label_1d2f2c;
        default: break;
    }

    ctx->pc = 0x1d2eb0u;

label_1d2eb0:
    // 0x1d2eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d2eb4:
    // 0x1d2eb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d2eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d2eb8:
    // 0x1d2eb8: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1d2eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_1d2ebc:
    // 0x1d2ebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d2ec0:
    // 0x1d2ec0: 0x8e059b5c  lw          $a1, -0x64A4($s0)
    ctx->pc = 0x1d2ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941532)));
label_1d2ec4:
    // 0x1d2ec4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1d2ec8:
    if (ctx->pc == 0x1D2EC8u) {
        ctx->pc = 0x1D2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EC4u;
        // 0x1d2ec8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2ECCu;
        goto label_1d2ecc;
    }
    ctx->pc = 0x1D2EC4u;
    {
        const bool branch_taken_0x1d2ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EC4u;
        // 0x1d2ec8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ec4) {
            ctx->pc = 0x1D2EE0u;
            goto label_1d2ee0;
        }
    }
    ctx->pc = 0x1D2ECCu;
label_1d2ecc:
    // 0x1d2ecc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1d2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d2ed0:
    // 0x1d2ed0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d2ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d2ed4:
    // 0x1d2ed4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d2ed8:
    // 0x1d2ed8: 0x60f809  jalr        $v1
label_1d2edc:
    if (ctx->pc == 0x1D2EDCu) {
        ctx->pc = 0x1D2EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2ED8u;
        // 0x1d2edc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2EE0u;
        goto label_1d2ee0;
    }
    ctx->pc = 0x1D2ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D2EE0u);
        ctx->pc = 0x1D2EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2ED8u;
        // 0x1d2edc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2ED8u, 0x1D2EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2EE0u;
label_1d2ee0:
    // 0x1d2ee0: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1d2ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
label_1d2ee4:
    // 0x1d2ee4: 0x8e229b60  lw          $v0, -0x64A0($s1)
    ctx->pc = 0x1d2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941536)));
label_1d2ee8:
    // 0x1d2ee8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d2eec:
    if (ctx->pc == 0x1D2EECu) {
        ctx->pc = 0x1D2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EE8u;
        // 0x1d2eec: 0x8e069b5c  lw          $a2, -0x64A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2EF0u;
        goto label_1d2ef0;
    }
    ctx->pc = 0x1D2EE8u;
    {
        const bool branch_taken_0x1d2ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EE8u;
        // 0x1d2eec: 0x8e069b5c  lw          $a2, -0x64A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ee8) {
            ctx->pc = 0x1D2F14u;
            goto label_1d2f14;
        }
    }
    ctx->pc = 0x1D2EF0u;
label_1d2ef0:
    // 0x1d2ef0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d2ef4:
    if (ctx->pc == 0x1D2EF4u) {
        ctx->pc = 0x1D2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EF0u;
        // 0x1d2ef4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2EF8u;
        goto label_1d2ef8;
    }
    ctx->pc = 0x1D2EF0u;
    {
        const bool branch_taken_0x1d2ef0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EF0u;
        // 0x1d2ef4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ef0) {
            ctx->pc = 0x1D2F10u;
            goto label_1d2f10;
        }
    }
    ctx->pc = 0x1D2EF8u;
label_1d2ef8:
    // 0x1d2ef8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1d2ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1d2efc:
    // 0x1d2efc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1d2efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1d2f00:
    // 0x1d2f00: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1d2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d2f04:
    // 0x1d2f04: 0x60f809  jalr        $v1
label_1d2f08:
    if (ctx->pc == 0x1D2F08u) {
        ctx->pc = 0x1D2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F04u;
        // 0x1d2f08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F0Cu;
        goto label_1d2f0c;
    }
    ctx->pc = 0x1D2F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D2F0Cu);
        ctx->pc = 0x1D2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F04u;
        // 0x1d2f08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2F04u, 0x1D2F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2F0Cu;
label_1d2f0c:
    // 0x1d2f0c: 0xae009b5c  sw          $zero, -0x64A4($s0)
    ctx->pc = 0x1d2f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941532), GPR_U32(ctx, 0));
label_1d2f10:
    // 0x1d2f10: 0xae209b60  sw          $zero, -0x64A0($s1)
    ctx->pc = 0x1d2f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294941536), GPR_U32(ctx, 0));
label_1d2f14:
    // 0x1d2f14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d2f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2f18:
    // 0x1d2f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2f1c:
    // 0x1d2f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2f20:
    // 0x1d2f20: 0x3e00008  jr          $ra
label_1d2f24:
    if (ctx->pc == 0x1D2F24u) {
        ctx->pc = 0x1D2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F20u;
        // 0x1d2f24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F28u;
        goto label_1d2f28;
    }
    ctx->pc = 0x1D2F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F20u;
        // 0x1d2f24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2F28u;
label_1d2f28:
    // 0x1d2f28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d2f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d2f2c:
    // 0x1d2f2c: 0x0  nop
    ctx->pc = 0x1d2f2cu;
    // NOP
    ctx->pc = 0x1d2f30u;
}
