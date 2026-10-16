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

// Function: sub_00162E78
// Address: 0x162e78 - 0x162f50
void sub_00162E78_0x162e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162E78_0x162e78");
#endif

    switch (ctx->pc) {
        case 0x162e90u: goto label_162e90;
        case 0x162ed8u: goto label_162ed8;
        default: break;
    }

    ctx->pc = 0x162e78u;

    // 0x162e78: 0x8c83648c  lw          $v1, 0x648C($a0)
    ctx->pc = 0x162e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25740)));
    // 0x162e7c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x162E7Cu;
    {
        const bool branch_taken_0x162e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E7Cu;
        // 0x162e80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e7c) {
            ctx->pc = 0x162F48u;
            goto label_162f48;
        }
    }
    ctx->pc = 0x162E84u;
    // 0x162e84: 0x8cad0028  lw          $t5, 0x28($a1)
    ctx->pc = 0x162e84u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x162e88: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x162e88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e8c: 0x2484100c  addiu       $a0, $a0, 0x100C
    ctx->pc = 0x162e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4108));
label_162e90:
    // 0x162e90: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x162e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x162e94: 0x55a20029  bnel        $t5, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x162E94u;
    {
        const bool branch_taken_0x162e94 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 2));
        if (branch_taken_0x162e94) {
            ctx->pc = 0x162E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162E94u;
            // 0x162e98: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F3Cu;
            goto label_162f3c;
        }
    }
    ctx->pc = 0x162E9Cu;
    // 0x162e9c: 0x90a30024  lbu         $v1, 0x24($a1)
    ctx->pc = 0x162e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x162ea0: 0x90820024  lbu         $v0, 0x24($a0)
    ctx->pc = 0x162ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x162ea4: 0x54620025  bnel        $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x162EA4u;
    {
        const bool branch_taken_0x162ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162ea4) {
            ctx->pc = 0x162EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162EA4u;
            // 0x162ea8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F3Cu;
            goto label_162f3c;
        }
    }
    ctx->pc = 0x162EACu;
    // 0x162eac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x162eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162eb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x162eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x162eb4: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x162EB4u;
    {
        const bool branch_taken_0x162eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162eb4) {
            ctx->pc = 0x162EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162EB4u;
            // 0x162eb8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F3Cu;
            goto label_162f3c;
        }
    }
    ctx->pc = 0x162EBCu;
    // 0x162ebc: 0x90a90024  lbu         $t1, 0x24($a1)
    ctx->pc = 0x162ebcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x162ec0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x162ec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ec4: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x162EC4u;
    {
        const bool branch_taken_0x162ec4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x162EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EC4u;
        // 0x162ec8: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ec4) {
            ctx->pc = 0x162F2Cu;
            goto label_162f2c;
        }
    }
    ctx->pc = 0x162ECCu;
    // 0x162ecc: 0x24870005  addiu       $a3, $a0, 0x5
    ctx->pc = 0x162eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x162ed0: 0x24a60005  addiu       $a2, $a1, 0x5
    ctx->pc = 0x162ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x162ed4: 0x0  nop
    ctx->pc = 0x162ed4u;
    // NOP
label_162ed8:
    // 0x162ed8: 0x90c3ffff  lbu         $v1, -0x1($a2)
    ctx->pc = 0x162ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x162edc: 0x90e2ffff  lbu         $v0, -0x1($a3)
    ctx->pc = 0x162edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x162ee0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x162EE0u;
    {
        const bool branch_taken_0x162ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162ee0) {
            ctx->pc = 0x162F2Cu;
            goto label_162f2c;
        }
    }
    ctx->pc = 0x162EE8u;
    // 0x162ee8: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x162ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x162eec: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x162eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x162ef0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x162EF0u;
    {
        const bool branch_taken_0x162ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162ef0) {
            ctx->pc = 0x162F2Cu;
            goto label_162f2c;
        }
    }
    ctx->pc = 0x162EF8u;
    // 0x162ef8: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x162ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x162efc: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x162efcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x162f00: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x162F00u;
    {
        const bool branch_taken_0x162f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162f00) {
            ctx->pc = 0x162F2Cu;
            goto label_162f2c;
        }
    }
    ctx->pc = 0x162F08u;
    // 0x162f08: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x162f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x162f0c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x162f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x162f10: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162F10u;
    {
        const bool branch_taken_0x162f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162f10) {
            ctx->pc = 0x162F2Cu;
            goto label_162f2c;
        }
    }
    ctx->pc = 0x162F18u;
    // 0x162f18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x162f1c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x162f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x162f20: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x162f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x162f24: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x162F24u;
    {
        const bool branch_taken_0x162f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F24u;
        // 0x162f28: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f24) {
            ctx->pc = 0x162ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162ed8;
        }
    }
    ctx->pc = 0x162F2Cu;
label_162f2c:
    // 0x162f2c: 0x150a0003  bne         $t0, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x162F2Cu;
    {
        const bool branch_taken_0x162f2c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x162F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F2Cu;
        // 0x162f30: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f2c) {
            ctx->pc = 0x162F3Cu;
            goto label_162f3c;
        }
    }
    ctx->pc = 0x162F34u;
    // 0x162f34: 0x3e00008  jr          $ra
    ctx->pc = 0x162F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F34u;
        // 0x162f38: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162F3Cu;
label_162f3c:
    // 0x162f3c: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x162f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x162f40: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x162F40u;
    {
        const bool branch_taken_0x162f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F40u;
        // 0x162f44: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f40) {
            ctx->pc = 0x162E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162e90;
        }
    }
    ctx->pc = 0x162F48u;
label_162f48:
    // 0x162f48: 0x3e00008  jr          $ra
    ctx->pc = 0x162F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F48u;
        // 0x162f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162F50u;
}
