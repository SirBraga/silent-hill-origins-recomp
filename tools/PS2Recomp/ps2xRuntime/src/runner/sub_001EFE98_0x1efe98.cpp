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

// Function: sub_001EFE98
// Address: 0x1efe98 - 0x1eff10
void sub_001EFE98_0x1efe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFE98_0x1efe98");
#endif

    switch (ctx->pc) {
        case 0x1efe98u: goto label_1efe98;
        case 0x1efe9cu: goto label_1efe9c;
        case 0x1efea0u: goto label_1efea0;
        case 0x1efea4u: goto label_1efea4;
        case 0x1efea8u: goto label_1efea8;
        case 0x1efeacu: goto label_1efeac;
        case 0x1efeb0u: goto label_1efeb0;
        case 0x1efeb4u: goto label_1efeb4;
        case 0x1efeb8u: goto label_1efeb8;
        case 0x1efebcu: goto label_1efebc;
        case 0x1efec0u: goto label_1efec0;
        case 0x1efec4u: goto label_1efec4;
        case 0x1efec8u: goto label_1efec8;
        case 0x1efeccu: goto label_1efecc;
        case 0x1efed0u: goto label_1efed0;
        case 0x1efed4u: goto label_1efed4;
        case 0x1efed8u: goto label_1efed8;
        case 0x1efedcu: goto label_1efedc;
        case 0x1efee0u: goto label_1efee0;
        case 0x1efee4u: goto label_1efee4;
        case 0x1efee8u: goto label_1efee8;
        case 0x1efeecu: goto label_1efeec;
        case 0x1efef0u: goto label_1efef0;
        case 0x1efef4u: goto label_1efef4;
        case 0x1efef8u: goto label_1efef8;
        case 0x1efefcu: goto label_1efefc;
        case 0x1eff00u: goto label_1eff00;
        case 0x1eff04u: goto label_1eff04;
        case 0x1eff08u: goto label_1eff08;
        case 0x1eff0cu: goto label_1eff0c;
        default: break;
    }

    ctx->pc = 0x1efe98u;

label_1efe98:
    // 0x1efe98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1efe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1efe9c:
    // 0x1efe9c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1efe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1efea0:
    // 0x1efea0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1efea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1efea4:
    // 0x1efea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1efea8:
    // 0x1efea8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1efea8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1efeac:
    // 0x1efeac: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1efeacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1efeb0:
    // 0x1efeb0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1efeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1efeb4:
    // 0x1efeb4: 0x40f809  jalr        $v0
label_1efeb8:
    if (ctx->pc == 0x1EFEB8u) {
        ctx->pc = 0x1EFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEB4u;
        // 0x1efeb8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEBCu;
        goto label_1efebc;
    }
    ctx->pc = 0x1EFEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFEBCu);
        ctx->pc = 0x1EFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEB4u;
        // 0x1efeb8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFEB4u, 0x1EFEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFEBCu;
label_1efebc:
    // 0x1efebc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1efebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1efec0:
    // 0x1efec0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1efec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1efec4:
    // 0x1efec4: 0x40f809  jalr        $v0
label_1efec8:
    if (ctx->pc == 0x1EFEC8u) {
        ctx->pc = 0x1EFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEC4u;
        // 0x1efec8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFECCu;
        goto label_1efecc;
    }
    ctx->pc = 0x1EFEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFECCu);
        ctx->pc = 0x1EFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEC4u;
        // 0x1efec8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFEC4u, 0x1EFECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFECCu;
label_1efecc:
    // 0x1efecc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1efeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1efed0:
    // 0x1efed0: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1efed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1efed4:
    // 0x1efed4: 0x40f809  jalr        $v0
label_1efed8:
    if (ctx->pc == 0x1EFED8u) {
        ctx->pc = 0x1EFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFED4u;
        // 0x1efed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEDCu;
        goto label_1efedc;
    }
    ctx->pc = 0x1EFED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFEDCu);
        ctx->pc = 0x1EFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFED4u;
        // 0x1efed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFED4u, 0x1EFEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFEDCu;
label_1efedc:
    // 0x1efedc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1efedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1efee0:
    // 0x1efee0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1efee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1efee4:
    // 0x1efee4: 0x40f809  jalr        $v0
label_1efee8:
    if (ctx->pc == 0x1EFEE8u) {
        ctx->pc = 0x1EFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEE4u;
        // 0x1efee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEECu;
        goto label_1efeec;
    }
    ctx->pc = 0x1EFEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFEECu);
        ctx->pc = 0x1EFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEE4u;
        // 0x1efee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFEE4u, 0x1EFEECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFEECu;
label_1efeec:
    // 0x1efeec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1efeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1efef0:
    // 0x1efef0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1efef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1efef4:
    // 0x1efef4: 0x40f809  jalr        $v0
label_1efef8:
    if (ctx->pc == 0x1EFEF8u) {
        ctx->pc = 0x1EFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEF4u;
        // 0x1efef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEFCu;
        goto label_1efefc;
    }
    ctx->pc = 0x1EFEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFEFCu);
        ctx->pc = 0x1EFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEF4u;
        // 0x1efef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFEF4u, 0x1EFEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFEFCu;
label_1efefc:
    // 0x1efefc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1efefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eff00:
    // 0x1eff00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eff00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eff04:
    // 0x1eff04: 0x3e00008  jr          $ra
label_1eff08:
    if (ctx->pc == 0x1EFF08u) {
        ctx->pc = 0x1EFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF04u;
        // 0x1eff08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF0Cu;
        goto label_1eff0c;
    }
    ctx->pc = 0x1EFF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF04u;
        // 0x1eff08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFF0Cu;
label_1eff0c:
    // 0x1eff0c: 0x0  nop
    ctx->pc = 0x1eff0cu;
    // NOP
    ctx->pc = 0x1eff10u;
}
