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

// Function: sub_00286FA8
// Address: 0x286fa8 - 0x287080
void sub_00286FA8_0x286fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286FA8_0x286fa8");
#endif

    switch (ctx->pc) {
        case 0x287028u: goto label_287028;
        default: break;
    }

    ctx->pc = 0x286fa8u;

    // 0x286fa8: 0x8f8288bc  lw          $v0, -0x7744($gp)
    ctx->pc = 0x286fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x286fac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x286facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286fb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286fb4: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x286FB4u;
    {
        const bool branch_taken_0x286fb4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x286FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FB4u;
        // 0x286fb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fb4) {
            ctx->pc = 0x287064u;
            goto label_287064;
        }
    }
    ctx->pc = 0x286FBCu;
    // 0x286fbc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x286fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x286fc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x286fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fc4: 0x71023  negu        $v0, $a3
    ctx->pc = 0x286fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x286fc8: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x286fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x286fcc: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x286FCCu;
    {
        const bool branch_taken_0x286fcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FCCu;
        // 0x286fd0: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fcc) {
            ctx->pc = 0x287024u;
            goto label_287024;
        }
    }
    ctx->pc = 0x286FD4u;
    // 0x286fd4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x286fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x286fd8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x286FD8u;
    {
        const bool branch_taken_0x286fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FD8u;
        // 0x286fdc: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fd8) {
            ctx->pc = 0x28700Cu;
            goto label_28700c;
        }
    }
    ctx->pc = 0x286FE0u;
    // 0x286fe0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x286FE0u;
    {
        const bool branch_taken_0x286fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286fe0) {
            ctx->pc = 0x286FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286FE0u;
            // 0x286fe4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286FFCu;
            goto label_286ffc;
        }
    }
    ctx->pc = 0x286FE8u;
    // 0x286fe8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x286fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x286fec: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x286fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x286ff0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x286ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x286ff4: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x286ff4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x286ff8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x286ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_286ffc:
    // 0x286ffc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x286ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287000: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x287000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x287004: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x287004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x287008: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x287008u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
label_28700c:
    // 0x28700c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x28700cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x287010: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x287010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287014: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x287014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x287018: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x287018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28701c: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x28701Cu;
    {
        const bool branch_taken_0x28701c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x287020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28701Cu;
        // 0x287020: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28701c) {
            ctx->pc = 0x287064u;
            goto label_287064;
        }
    }
    ctx->pc = 0x287024u;
label_287024:
    // 0x287024: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x287024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_287028:
    // 0x287028: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x287028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28702c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287030: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x287030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x287034: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x287034u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x287038: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x287038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x28703c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287040: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x287040u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x287044: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x287044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x287048: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x287048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28704c: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x28704cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x287050: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x287050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x287054: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x287054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287058: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x287058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x28705c: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x28705Cu;
    {
        const bool branch_taken_0x28705c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x287060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28705Cu;
        // 0x287060: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28705c) {
            ctx->pc = 0x287028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287028;
        }
    }
    ctx->pc = 0x287064u;
label_287064:
    // 0x287064: 0x3e00008  jr          $ra
    ctx->pc = 0x287064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287064u;
        // 0x287068: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28706Cu;
    // 0x28706c: 0x0  nop
    ctx->pc = 0x28706cu;
    // NOP
    // 0x287070: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x287070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x287074: 0x0  nop
    ctx->pc = 0x287074u;
    // NOP
    // 0x287078: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x287078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28707c: 0x0  nop
    ctx->pc = 0x28707cu;
    // NOP
    ctx->pc = 0x287080u;
}
