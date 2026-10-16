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

// Function: sub_002D7C88
// Address: 0x2d7c88 - 0x2d7d88
void sub_002D7C88_0x2d7c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7C88_0x2d7c88");
#endif

    switch (ctx->pc) {
        case 0x2d7cb8u: goto label_2d7cb8;
        case 0x2d7cccu: goto label_2d7ccc;
        case 0x2d7d08u: goto label_2d7d08;
        case 0x2d7d1cu: goto label_2d7d1c;
        default: break;
    }

    ctx->pc = 0x2d7c88u;

    // 0x2d7c88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d7c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d7c8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d7c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d7c90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d7c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d7c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d7c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d7c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7ca0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7ca4: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x2d7ca4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d7ca8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D7CA8u;
    {
        const bool branch_taken_0x2d7ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CA8u;
        // 0x2d7cac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ca8) {
            ctx->pc = 0x2D7CECu;
            goto label_2d7cec;
        }
    }
    ctx->pc = 0x2D7CB0u;
    // 0x2d7cb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d7cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7cb4: 0x0  nop
    ctx->pc = 0x2d7cb4u;
    // NOP
label_2d7cb8:
    // 0x2d7cb8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d7cbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d7cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d7cc0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d7cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d7cc4: 0xc0ab826  jal         func_2AE098
    ctx->pc = 0x2D7CC4u;
    SET_GPR_U32(ctx, 31, 0x2D7CCCu);
    ctx->pc = 0x2D7CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CC4u;
    // 0x2d7cc8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE098u, 0x2D7CC4u, 0x2D7CCCu)) {
        return;
    }
    ctx->pc = 0x2D7CCCu;
label_2d7ccc:
    // 0x2d7ccc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d7cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7cd0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d7cd4: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x2d7cd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d7cd8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d7cdc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d7cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d7ce0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2d7ce0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d7ce4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D7CE4u;
    {
        const bool branch_taken_0x2d7ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CE4u;
        // 0x2d7ce8: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ce4) {
            ctx->pc = 0x2D7CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7cb8;
        }
    }
    ctx->pc = 0x2D7CECu;
label_2d7cec:
    // 0x2d7cec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7cf0: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x2d7cf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2d7cf4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D7CF4u;
    {
        const bool branch_taken_0x2d7cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CF4u;
        // 0x2d7cf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7cf4) {
            ctx->pc = 0x2D7D30u;
            goto label_2d7d30;
        }
    }
    ctx->pc = 0x2D7CFCu;
    // 0x2d7cfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d7cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d00: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d7d04: 0x0  nop
    ctx->pc = 0x2d7d04u;
    // NOP
label_2d7d08:
    // 0x2d7d08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d7d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d7d0c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d7d10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d7d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7d14: 0xc0c25ce  jal         func_309738
    ctx->pc = 0x2D7D14u;
    SET_GPR_U32(ctx, 31, 0x2D7D1Cu);
    ctx->pc = 0x2D7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D14u;
    // 0x2d7d18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309738u, 0x2D7D14u, 0x2D7D1Cu)) {
        return;
    }
    ctx->pc = 0x2D7D1Cu;
label_2d7d1c:
    // 0x2d7d1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7d20: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x2d7d20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2d7d24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d7d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d7d28: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D7D28u;
    {
        const bool branch_taken_0x2d7d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7d28) {
            ctx->pc = 0x2D7D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7D28u;
            // 0x2d7d2c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7d08;
        }
    }
    ctx->pc = 0x2D7D30u;
label_2d7d30:
    // 0x2d7d30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7d34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d7d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d38: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x2d7d38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d7d3c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d7d40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d7d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7d44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d7d48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d7d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7d4c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d7d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7d54: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2d7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2d7d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D58u;
        // 0x2d7d5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7D60u;
    // 0x2d7d60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d7d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d7d64: 0x0  nop
    ctx->pc = 0x2d7d64u;
    // NOP
    // 0x2d7d68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d7d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d7d6c: 0x0  nop
    ctx->pc = 0x2d7d6cu;
    // NOP
    // 0x2d7d70: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2d7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2d7d74: 0x0  nop
    ctx->pc = 0x2d7d74u;
    // NOP
    // 0x2d7d78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d7d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d7d7c: 0x0  nop
    ctx->pc = 0x2d7d7cu;
    // NOP
    // 0x2d7d80: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d7d84: 0x0  nop
    ctx->pc = 0x2d7d84u;
    // NOP
    ctx->pc = 0x2d7d88u;
}
