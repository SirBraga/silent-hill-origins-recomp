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

// Function: sub_002D8F10
// Address: 0x2d8f10 - 0x2d9000
void sub_002D8F10_0x2d8f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8F10_0x2d8f10");
#endif

    switch (ctx->pc) {
        case 0x2d8f40u: goto label_2d8f40;
        case 0x2d8f54u: goto label_2d8f54;
        case 0x2d8f90u: goto label_2d8f90;
        case 0x2d8fa4u: goto label_2d8fa4;
        default: break;
    }

    ctx->pc = 0x2d8f10u;

    // 0x2d8f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d8f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d8f14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d8f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d8f18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d8f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d8f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d8f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d8f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8f28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d8f2c: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x2d8f2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d8f30: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D8F30u;
    {
        const bool branch_taken_0x2d8f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F30u;
        // 0x2d8f34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f30) {
            ctx->pc = 0x2D8F74u;
            goto label_2d8f74;
        }
    }
    ctx->pc = 0x2D8F38u;
    // 0x2d8f38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d8f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f3c: 0x0  nop
    ctx->pc = 0x2d8f3cu;
    // NOP
label_2d8f40:
    // 0x2d8f40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d8f44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d8f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d8f48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d8f4c: 0xc0ab826  jal         func_2AE098
    ctx->pc = 0x2D8F4Cu;
    SET_GPR_U32(ctx, 31, 0x2D8F54u);
    ctx->pc = 0x2D8F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F4Cu;
    // 0x2d8f50: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE098u, 0x2D8F4Cu, 0x2D8F54u)) {
        return;
    }
    ctx->pc = 0x2D8F54u;
label_2d8f54:
    // 0x2d8f54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d8f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d8f58: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d8f5c: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x2d8f5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d8f60: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d8f64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d8f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d8f68: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2d8f68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d8f6c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D8F6Cu;
    {
        const bool branch_taken_0x2d8f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F6Cu;
        // 0x2d8f70: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f6c) {
            ctx->pc = 0x2D8F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8f40;
        }
    }
    ctx->pc = 0x2D8F74u;
label_2d8f74:
    // 0x2d8f74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d8f78: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x2d8f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2d8f7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D8F7Cu;
    {
        const bool branch_taken_0x2d8f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F7Cu;
        // 0x2d8f80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f7c) {
            ctx->pc = 0x2D8FB8u;
            goto label_2d8fb8;
        }
    }
    ctx->pc = 0x2D8F84u;
    // 0x2d8f84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d8f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f88: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d8f8c: 0x0  nop
    ctx->pc = 0x2d8f8cu;
    // NOP
label_2d8f90:
    // 0x2d8f90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d8f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d8f94: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d8f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d8f98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d8f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8f9c: 0xc0c25ce  jal         func_309738
    ctx->pc = 0x2D8F9Cu;
    SET_GPR_U32(ctx, 31, 0x2D8FA4u);
    ctx->pc = 0x2D8FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8F9Cu;
    // 0x2d8fa0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309738u, 0x2D8F9Cu, 0x2D8FA4u)) {
        return;
    }
    ctx->pc = 0x2D8FA4u;
label_2d8fa4:
    // 0x2d8fa4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d8fa8: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x2d8fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2d8fac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d8facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d8fb0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D8FB0u;
    {
        const bool branch_taken_0x2d8fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8fb0) {
            ctx->pc = 0x2D8FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8FB0u;
            // 0x2d8fb4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8f90;
        }
    }
    ctx->pc = 0x2D8FB8u;
label_2d8fb8:
    // 0x2d8fb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d8fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8fbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d8fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8fc0: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x2d8fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d8fc4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d8fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d8fc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d8fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8fcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d8fd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d8fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8fd4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d8fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8fdc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2d8fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2d8fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FE0u;
        // 0x2d8fe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8FE8u;
    // 0x2d8fe8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d8fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d8fec: 0x0  nop
    ctx->pc = 0x2d8fecu;
    // NOP
    // 0x2d8ff0: 0xad89003c  sw          $t1, 0x3C($t4)
    ctx->pc = 0x2d8ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 60), GPR_U32(ctx, 9));
    // 0x2d8ff4: 0x0  nop
    ctx->pc = 0x2d8ff4u;
    // NOP
    // 0x2d8ff8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d8ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d8ffc: 0x0  nop
    ctx->pc = 0x2d8ffcu;
    // NOP
    ctx->pc = 0x2d9000u;
}
