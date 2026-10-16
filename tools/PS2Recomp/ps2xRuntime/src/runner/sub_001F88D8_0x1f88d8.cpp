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

// Function: sub_001F88D8
// Address: 0x1f88d8 - 0x1f89b0
void sub_001F88D8_0x1f88d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F88D8_0x1f88d8");
#endif

    switch (ctx->pc) {
        case 0x1f8910u: goto label_1f8910;
        default: break;
    }

    ctx->pc = 0x1f88d8u;

    // 0x1f88d8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1f88d8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88dc: 0x11a00032  beqz        $t5, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F88DCu;
    {
        const bool branch_taken_0x1f88dc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88DCu;
        // 0x1f88e0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88dc) {
            ctx->pc = 0x1F89A8u;
            goto label_1f89a8;
        }
    }
    ctx->pc = 0x1F88E4u;
    // 0x1f88e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f88e8: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x1f88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1f88ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f88ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f88f0: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F88F0u;
    {
        const bool branch_taken_0x1f88f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F88F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88F0u;
        // 0x1f88f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88f0) {
            ctx->pc = 0x1F898Cu;
            goto label_1f898c;
        }
    }
    ctx->pc = 0x1F88F8u;
    // 0x1f88f8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1f88f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1f88fc: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x1f88fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f8900: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1f8900u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8904: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1f8904u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1f8908: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x1f8908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f890c: 0x0  nop
    ctx->pc = 0x1f890cu;
    // NOP
label_1f8910:
    // 0x1f8910: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1f8910u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f8914: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1f8914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1f8918: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F8918u;
    {
        const bool branch_taken_0x1f8918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8918) {
            ctx->pc = 0x1F8964u;
            goto label_1f8964;
        }
    }
    ctx->pc = 0x1F8920u;
    // 0x1f8920: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1f8920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1f8924: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1f8924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1f8928: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F8928u;
    {
        const bool branch_taken_0x1f8928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8928) {
            ctx->pc = 0x1F8964u;
            goto label_1f8964;
        }
    }
    ctx->pc = 0x1F8930u;
    // 0x1f8930: 0x110b000a  beq         $t0, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8930u;
    {
        const bool branch_taken_0x1f8930 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x1F8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8930u;
        // 0x1f8934: 0x10c1018  mult        $v0, $t0, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8930) {
            ctx->pc = 0x1F895Cu;
            goto label_1f895c;
        }
    }
    ctx->pc = 0x1F8938u;
    // 0x1f8938: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x1f8938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1f893c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f8940: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1f8940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1f8944: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1F8944u;
    {
        const bool branch_taken_0x1f8944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8944) {
            ctx->pc = 0x1F8948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8944u;
            // 0x1f8948: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8980u;
            goto label_1f8980;
        }
    }
    ctx->pc = 0x1F894Cu;
    // 0x1f894c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f894cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8950: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1f8950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f8954: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8954u;
    {
        const bool branch_taken_0x1f8954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8954) {
            ctx->pc = 0x1F8958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8954u;
            // 0x1f8958: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8980u;
            goto label_1f8980;
        }
    }
    ctx->pc = 0x1F895Cu;
label_1f895c:
    // 0x1f895c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F895Cu;
    {
        const bool branch_taken_0x1f895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F895Cu;
        // 0x1f8960: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f895c) {
            ctx->pc = 0x1F897Cu;
            goto label_1f897c;
        }
    }
    ctx->pc = 0x1F8964u;
label_1f8964:
    // 0x1f8964: 0x5020006  bltzl       $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8964u;
    {
        const bool branch_taken_0x1f8964 = (GPR_S64(ctx, 8) < 0);
        if (branch_taken_0x1f8964) {
            ctx->pc = 0x1F8968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8964u;
            // 0x1f8968: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8980u;
            goto label_1f8980;
        }
    }
    ctx->pc = 0x1F896Cu;
    // 0x1f896c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f8970: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1f8970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f8974: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8974u;
    {
        const bool branch_taken_0x1f8974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8974u;
        // 0x1f8978: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8974) {
            ctx->pc = 0x1F8990u;
            goto label_1f8990;
        }
    }
    ctx->pc = 0x1F897Cu;
label_1f897c:
    // 0x1f897c: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x1f897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1f8980:
    // 0x1f8980: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f8980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f8984: 0x1449ffe2  bne         $v0, $t1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1F8984u;
    {
        const bool branch_taken_0x1f8984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x1F8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8984u;
        // 0x1f8988: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8984) {
            ctx->pc = 0x1F8910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8910;
        }
    }
    ctx->pc = 0x1F898Cu;
label_1f898c:
    // 0x1f898c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f898cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f8990:
    // 0x1f8990: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8990u;
    {
        const bool branch_taken_0x1f8990 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8990u;
        // 0x1f8994: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8990) {
            ctx->pc = 0x1F89A8u;
            goto label_1f89a8;
        }
    }
    ctx->pc = 0x1F8998u;
    // 0x1f8998: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x1f8998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f899c: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x1f899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1f89a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F89A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89A0u;
        // 0x1f89a4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F89A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F89A8u;
label_1f89a8:
    // 0x1f89a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F89A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89A8u;
        // 0x1f89ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F89A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F89B0u;
}
