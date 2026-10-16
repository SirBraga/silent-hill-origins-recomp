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

// Function: sub_00175E68
// Address: 0x175e68 - 0x175f60
void sub_00175E68_0x175e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175E68_0x175e68");
#endif

    switch (ctx->pc) {
        case 0x175e88u: goto label_175e88;
        case 0x175e9cu: goto label_175e9c;
        case 0x175eb8u: goto label_175eb8;
        case 0x175eecu: goto label_175eec;
        case 0x175f00u: goto label_175f00;
        case 0x175f18u: goto label_175f18;
        case 0x175f34u: goto label_175f34;
        default: break;
    }

    ctx->pc = 0x175e68u;

    // 0x175e68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x175e6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x175e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x175e70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x175e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x175e74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175e7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175e80: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x175E80u;
    SET_GPR_U32(ctx, 31, 0x175E88u);
    ctx->pc = 0x175E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E80u;
    // 0x175e84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x175E80u, 0x175E88u)) {
        return;
    }
    ctx->pc = 0x175E88u;
label_175e88:
    // 0x175e88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x175e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x175e8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e90: 0x8c46f830  lw          $a2, -0x7D0($v0)
    ctx->pc = 0x175e90u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF830u));
    // 0x175e94: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x175E94u;
    SET_GPR_U32(ctx, 31, 0x175E9Cu);
    ctx->pc = 0x175E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E94u;
    // 0x175e98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x175E94u, 0x175E9Cu)) {
        return;
    }
    ctx->pc = 0x175E9Cu;
label_175e9c:
    // 0x175e9c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x175e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175ea0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175ea4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x175EA4u;
    {
        const bool branch_taken_0x175ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EA4u;
        // 0x175ea8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ea4) {
            ctx->pc = 0x175F44u;
            goto label_175f44;
        }
    }
    ctx->pc = 0x175EACu;
    // 0x175eac: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x175eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175eb0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x175eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175eb4: 0x0  nop
    ctx->pc = 0x175eb4u;
    // NOP
label_175eb8:
    // 0x175eb8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x175eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x175ebc: 0x5052000d  beql        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x175EBCu;
    {
        const bool branch_taken_0x175ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x175ebc) {
            ctx->pc = 0x175EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175EBCu;
            // 0x175ec0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175EF4u;
            goto label_175ef4;
        }
    }
    ctx->pc = 0x175EC4u;
    // 0x175ec4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175EC4u;
    {
        const bool branch_taken_0x175ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EC4u;
        // 0x175ec8: 0x24a60008  addiu       $a2, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ec4) {
            ctx->pc = 0x175EDCu;
            goto label_175edc;
        }
    }
    ctx->pc = 0x175ECCu;
    // 0x175ecc: 0x1050000e  beq         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x175ECCu;
    {
        const bool branch_taken_0x175ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x175ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175ECCu;
        // 0x175ed0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ecc) {
            ctx->pc = 0x175F08u;
            goto label_175f08;
        }
    }
    ctx->pc = 0x175ED4u;
    // 0x175ed4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x175ED4u;
    {
        const bool branch_taken_0x175ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175ED4u;
        // 0x175ed8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ed4) {
            ctx->pc = 0x175F20u;
            goto label_175f20;
        }
    }
    ctx->pc = 0x175EDCu;
label_175edc:
    // 0x175edc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x175edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x175ee0: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x175ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x175ee4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x175EE4u;
    SET_GPR_U32(ctx, 31, 0x175EECu);
    ctx->pc = 0x175EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175EE4u;
    // 0x175ee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x175EE4u, 0x175EECu)) {
        return;
    }
    ctx->pc = 0x175EECu;
label_175eec:
    // 0x175eec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x175EECu;
    {
        const bool branch_taken_0x175eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EECu;
        // 0x175ef0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175eec) {
            ctx->pc = 0x175F1Cu;
            goto label_175f1c;
        }
    }
    ctx->pc = 0x175EF4u;
label_175ef4:
    // 0x175ef4: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x175ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x175ef8: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x175EF8u;
    SET_GPR_U32(ctx, 31, 0x175F00u);
    ctx->pc = 0x175EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175EF8u;
    // 0x175efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x175EF8u, 0x175F00u)) {
        return;
    }
    ctx->pc = 0x175F00u;
label_175f00:
    // 0x175f00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x175F00u;
    {
        const bool branch_taken_0x175f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F00u;
        // 0x175f04: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f00) {
            ctx->pc = 0x175F1Cu;
            goto label_175f1c;
        }
    }
    ctx->pc = 0x175F08u;
label_175f08:
    // 0x175f08: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x175f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x175f0c: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x175f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x175f10: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x175F10u;
    SET_GPR_U32(ctx, 31, 0x175F18u);
    ctx->pc = 0x175F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F10u;
    // 0x175f14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x175F10u, 0x175F18u)) {
        return;
    }
    ctx->pc = 0x175F18u;
label_175f18:
    // 0x175f18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x175f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_175f1c:
    // 0x175f1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x175f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175f20:
    // 0x175f20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x175f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175f24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x175f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175f28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175f2c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x175F2Cu;
    SET_GPR_U32(ctx, 31, 0x175F34u);
    ctx->pc = 0x175F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F2Cu;
    // 0x175f30: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x175F2Cu, 0x175F34u)) {
        return;
    }
    ctx->pc = 0x175F34u;
label_175f34:
    // 0x175f34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x175f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175f38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175f3c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x175F3Cu;
    {
        const bool branch_taken_0x175f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F3Cu;
        // 0x175f40: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f3c) {
            ctx->pc = 0x175EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175eb8;
        }
    }
    ctx->pc = 0x175F44u;
label_175f44:
    // 0x175f44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x175f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175f48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x175f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175f4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175f50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175f54: 0x3e00008  jr          $ra
    ctx->pc = 0x175F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F54u;
        // 0x175f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175F5Cu;
    // 0x175f5c: 0x0  nop
    ctx->pc = 0x175f5cu;
    // NOP
    ctx->pc = 0x175f60u;
}
