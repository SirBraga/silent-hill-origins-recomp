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

// Function: sub_00162F50
// Address: 0x162f50 - 0x163040
void sub_00162F50_0x162f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162F50_0x162f50");
#endif

    switch (ctx->pc) {
        case 0x162f60u: goto label_162f60;
        case 0x162fd8u: goto label_162fd8;
        default: break;
    }

    ctx->pc = 0x162f50u;

    // 0x162f50: 0x8c82648c  lw          $v0, 0x648C($a0)
    ctx->pc = 0x162f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
    // 0x162f54: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x162F54u;
    {
        const bool branch_taken_0x162f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F54u;
        // 0x162f58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f54) {
            ctx->pc = 0x162FC0u;
            goto label_162fc0;
        }
    }
    ctx->pc = 0x162F5Cu;
    // 0x162f5c: 0x2487100c  addiu       $a3, $a0, 0x100C
    ctx->pc = 0x162f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4108));
label_162f60:
    // 0x162f60: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x162f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x162f64: 0x50c00012  beql        $a2, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x162F64u;
    {
        const bool branch_taken_0x162f64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x162f64) {
            ctx->pc = 0x162F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162F64u;
            // 0x162f68: 0x8c82648c  lw          $v0, 0x648C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162FB0u;
            goto label_162fb0;
        }
    }
    ctx->pc = 0x162F6Cu;
    // 0x162f6c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x162f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x162f70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x162f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162f74: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x162F74u;
    {
        const bool branch_taken_0x162f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162f74) {
            ctx->pc = 0x162F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162F74u;
            // 0x162f78: 0x8c82648c  lw          $v0, 0x648C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162FB0u;
            goto label_162fb0;
        }
    }
    ctx->pc = 0x162F7Cu;
    // 0x162f7c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x162f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x162f80: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x162f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x162f84: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x162F84u;
    {
        const bool branch_taken_0x162f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162f84) {
            ctx->pc = 0x162F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162F84u;
            // 0x162f88: 0x8c82648c  lw          $v0, 0x648C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162FB0u;
            goto label_162fb0;
        }
    }
    ctx->pc = 0x162F8Cu;
    // 0x162f8c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x162f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x162f90: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x162f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x162f94: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162F94u;
    {
        const bool branch_taken_0x162f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162f94) {
            ctx->pc = 0x162F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162F94u;
            // 0x162f98: 0x8c82648c  lw          $v0, 0x648C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162FB0u;
            goto label_162fb0;
        }
    }
    ctx->pc = 0x162F9Cu;
    // 0x162f9c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x162f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x162fa0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x162fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x162fa4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x162FA4u;
    {
        const bool branch_taken_0x162fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162fa4) {
            ctx->pc = 0x162FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162FA4u;
            // 0x162fa8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162FACu;
            goto label_162fac;
        }
    }
    ctx->pc = 0x162FACu;
label_162fac:
    // 0x162fac: 0x8c82648c  lw          $v0, 0x648C($a0)
    ctx->pc = 0x162facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
label_162fb0:
    // 0x162fb0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x162fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x162fb4: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x162fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x162fb8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x162FB8u;
    {
        const bool branch_taken_0x162fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FB8u;
        // 0x162fbc: 0x24e7002c  addiu       $a3, $a3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fb8) {
            ctx->pc = 0x162F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162f60;
        }
    }
    ctx->pc = 0x162FC0u;
label_162fc0:
    // 0x162fc0: 0x90821008  lbu         $v0, 0x1008($a0)
    ctx->pc = 0x162fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4104)));
    // 0x162fc4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x162FC4u;
    {
        const bool branch_taken_0x162fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FC4u;
        // 0x162fc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fc4) {
            ctx->pc = 0x163038u;
            goto label_163038;
        }
    }
    ctx->pc = 0x162FCCu;
    // 0x162fcc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x162fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162fd0: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x162fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x162fd4: 0x0  nop
    ctx->pc = 0x162fd4u;
    // NOP
label_162fd8:
    // 0x162fd8: 0x8c83fff4  lw          $v1, -0xC($a0)
    ctx->pc = 0x162fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967284)));
    // 0x162fdc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x162fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162fe0: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x162FE0u;
    {
        const bool branch_taken_0x162fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162fe0) {
            ctx->pc = 0x162FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162FE0u;
            // 0x162fe4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16302Cu;
            goto label_16302c;
        }
    }
    ctx->pc = 0x162FE8u;
    // 0x162fe8: 0x8c83fff8  lw          $v1, -0x8($a0)
    ctx->pc = 0x162fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
    // 0x162fec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x162fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x162ff0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x162FF0u;
    {
        const bool branch_taken_0x162ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x162FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FF0u;
        // 0x162ff4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ff0) {
            ctx->pc = 0x16302Cu;
            goto label_16302c;
        }
    }
    ctx->pc = 0x162FF8u;
    // 0x162ff8: 0x8c83fffc  lw          $v1, -0x4($a0)
    ctx->pc = 0x162ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x162ffc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x162ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x163000: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x163000u;
    {
        const bool branch_taken_0x163000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163000) {
            ctx->pc = 0x16302Cu;
            goto label_16302c;
        }
    }
    ctx->pc = 0x163008u;
    // 0x163008: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x163008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16300c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x16300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x163010: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163010u;
    {
        const bool branch_taken_0x163010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x163014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163010u;
        // 0x163014: 0xc7102b  sltu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163010) {
            ctx->pc = 0x163030u;
            goto label_163030;
        }
    }
    ctx->pc = 0x163018u;
    // 0x163018: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x163018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16301c: 0xac80fff4  sw          $zero, -0xC($a0)
    ctx->pc = 0x16301cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967284), GPR_U32(ctx, 0));
    // 0x163020: 0xac80fff8  sw          $zero, -0x8($a0)
    ctx->pc = 0x163020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 0));
    // 0x163024: 0x3e00008  jr          $ra
    ctx->pc = 0x163024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163024u;
        // 0x163028: 0xac80fffc  sw          $zero, -0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16302Cu;
label_16302c:
    // 0x16302c: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x16302cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_163030:
    // 0x163030: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x163030u;
    {
        const bool branch_taken_0x163030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163030u;
        // 0x163034: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163030) {
            ctx->pc = 0x162FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162fd8;
        }
    }
    ctx->pc = 0x163038u;
label_163038:
    // 0x163038: 0x3e00008  jr          $ra
    ctx->pc = 0x163038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163040u;
}
