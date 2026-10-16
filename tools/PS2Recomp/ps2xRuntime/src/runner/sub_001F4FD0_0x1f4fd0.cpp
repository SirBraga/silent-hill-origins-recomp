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

// Function: sub_001F4FD0
// Address: 0x1f4fd0 - 0x1f5080
void sub_001F4FD0_0x1f4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4FD0_0x1f4fd0");
#endif

    switch (ctx->pc) {
        case 0x1f5020u: goto label_1f5020;
        case 0x1f502cu: goto label_1f502c;
        case 0x1f5064u: goto label_1f5064;
        default: break;
    }

    ctx->pc = 0x1f4fd0u;

    // 0x1f4fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f4fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f4fd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f4fd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f4fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f4fdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f4fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f4fe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f4fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fe4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f4fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f4fe8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f4fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f4fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f4ff0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f4ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4ff8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f4ffc: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1f4ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x1f5000: 0x222180a  movz        $v1, $s1, $v0
    ctx->pc = 0x1f5000u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17));
    // 0x1f5004: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f5004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5008: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5008u;
    {
        const bool branch_taken_0x1f5008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5008u;
        // 0x1f500c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5008) {
            ctx->pc = 0x1F5040u;
            goto label_1f5040;
        }
    }
    ctx->pc = 0x1F5010u;
    // 0x1f5010: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5010u;
    {
        const bool branch_taken_0x1f5010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5010) {
            ctx->pc = 0x1F5040u;
            goto label_1f5040;
        }
    }
    ctx->pc = 0x1F5018u;
    // 0x1f5018: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f501c: 0x0  nop
    ctx->pc = 0x1f501cu;
    // NOP
label_1f5020:
    // 0x1f5020: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f5020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5024: 0xc07d3b8  jal         func_1F4EE0
    ctx->pc = 0x1F5024u;
    SET_GPR_U32(ctx, 31, 0x1F502Cu);
    ctx->pc = 0x1F5028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5024u;
    // 0x1f5028: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4EE0u, 0x1F5024u, 0x1F502Cu)) {
        return;
    }
    ctx->pc = 0x1F502Cu;
label_1f502c:
    // 0x1f502c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f5030: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5030u;
    {
        const bool branch_taken_0x1f5030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5030u;
        // 0x1f5034: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5030) {
            ctx->pc = 0x1F5040u;
            goto label_1f5040;
        }
    }
    ctx->pc = 0x1F5038u;
    // 0x1f5038: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F5038u;
    {
        const bool branch_taken_0x1f5038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5038) {
            ctx->pc = 0x1F503Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5038u;
            // 0x1f503c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5020;
        }
    }
    ctx->pc = 0x1F5040u;
label_1f5040:
    // 0x1f5040: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5040u;
    {
        const bool branch_taken_0x1f5040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5040u;
        // 0x1f5044: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5040) {
            ctx->pc = 0x1F5068u;
            goto label_1f5068;
        }
    }
    ctx->pc = 0x1F5048u;
    // 0x1f5048: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5048u;
    {
        const bool branch_taken_0x1f5048 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5048u;
        // 0x1f504c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5048) {
            ctx->pc = 0x1F5068u;
            goto label_1f5068;
        }
    }
    ctx->pc = 0x1F5050u;
    // 0x1f5050: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f5050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f505c: 0xc07d43a  jal         func_1F50E8
    ctx->pc = 0x1F505Cu;
    SET_GPR_U32(ctx, 31, 0x1F5064u);
    ctx->pc = 0x1F5060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F505Cu;
    // 0x1f5060: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F50E8u, 0x1F505Cu, 0x1F5064u)) {
        return;
    }
    ctx->pc = 0x1F5064u;
label_1f5064:
    // 0x1f5064: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f5064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5068:
    // 0x1f5068: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f5068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f506c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f506cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5070: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f5070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5078: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5078u;
        // 0x1f507c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5080u;
}
