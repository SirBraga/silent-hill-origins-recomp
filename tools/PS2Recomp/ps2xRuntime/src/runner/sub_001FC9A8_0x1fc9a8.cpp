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

// Function: sub_001FC9A8
// Address: 0x1fc9a8 - 0x1fca90
void sub_001FC9A8_0x1fc9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC9A8_0x1fc9a8");
#endif

    switch (ctx->pc) {
        case 0x1fc9d8u: goto label_1fc9d8;
        case 0x1fca20u: goto label_1fca20;
        case 0x1fca28u: goto label_1fca28;
        case 0x1fca4cu: goto label_1fca4c;
        default: break;
    }

    ctx->pc = 0x1fc9a8u;

    // 0x1fc9a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc9ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fc9acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fc9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fc9b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fc9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fc9b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fc9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fc9c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fc9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc9cc: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1fc9ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fc9d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FC9D0u;
    {
        const bool branch_taken_0x1fc9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9D0u;
        // 0x1fc9d4: 0x3c13005c  lui         $s3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9d0) {
            ctx->pc = 0x1FC9FCu;
            goto label_1fc9fc;
        }
    }
    ctx->pc = 0x1FC9D8u;
label_1fc9d8:
    // 0x1fc9d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fc9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fc9dc: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x1fc9dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fc9e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fc9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc9e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fc9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fc9e8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1fc9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1fc9ec: 0x31f42  srl         $v1, $v1, 29
    ctx->pc = 0x1fc9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
    // 0x1fc9f0: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x1fc9f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fc9f4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FC9F4u;
    {
        const bool branch_taken_0x1fc9f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9F4u;
        // 0x1fc9f8: 0x431826  xor         $v1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9f4) {
            ctx->pc = 0x1FC9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc9d8;
        }
    }
    ctx->pc = 0x1FC9FCu;
label_1fc9fc:
    // 0x1fc9fc: 0x3072007f  andi        $s2, $v1, 0x7F
    ctx->pc = 0x1fc9fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1fca00: 0x2663ff10  addiu       $v1, $s3, -0xF0
    ctx->pc = 0x1fca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967056));
    // 0x1fca04: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1fca04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1fca08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fca0c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1fca0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fca10: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FCA10u;
    {
        const bool branch_taken_0x1fca10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA10u;
        // 0x1fca14: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca10) {
            ctx->pc = 0x1FCA44u;
            goto label_1fca44;
        }
    }
    ctx->pc = 0x1FCA18u;
    // 0x1fca18: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1fca18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fca1c: 0x0  nop
    ctx->pc = 0x1fca1cu;
    // NOP
label_1fca20:
    // 0x1fca20: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1FCA20u;
    SET_GPR_U32(ctx, 31, 0x1FCA28u);
    ctx->pc = 0x1FCA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA20u;
    // 0x1fca24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FCA20u, 0x1FCA28u)) {
        return;
    }
    ctx->pc = 0x1FCA28u;
label_1fca28:
    // 0x1fca28: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCA28u;
    {
        const bool branch_taken_0x1fca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fca28) {
            ctx->pc = 0x1FCA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCA28u;
            // 0x1fca2c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCA38u;
            goto label_1fca38;
        }
    }
    ctx->pc = 0x1FCA30u;
    // 0x1fca30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FCA30u;
    {
        const bool branch_taken_0x1fca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA30u;
        // 0x1fca34: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca30) {
            ctx->pc = 0x1FCA70u;
            goto label_1fca70;
        }
    }
    ctx->pc = 0x1FCA38u;
label_1fca38:
    // 0x1fca38: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FCA38u;
    {
        const bool branch_taken_0x1fca38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fca38) {
            ctx->pc = 0x1FCA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCA38u;
            // 0x1fca3c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fca20;
        }
    }
    ctx->pc = 0x1FCA40u;
    // 0x1fca40: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1fca40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fca44:
    // 0x1fca44: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1FCA44u;
    SET_GPR_U32(ctx, 31, 0x1FCA4Cu);
    ctx->pc = 0x1FCA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA44u;
    // 0x1fca48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FCA44u, 0x1FCA4Cu)) {
        return;
    }
    ctx->pc = 0x1FCA4Cu;
label_1fca4c:
    // 0x1fca4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca50: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1fca50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1fca54: 0x2662ff10  addiu       $v0, $s3, -0xF0
    ctx->pc = 0x1fca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967056));
    // 0x1fca58: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1fca58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1fca5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fca60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fca64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fca64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fca68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1fca6c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1fca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_1fca70:
    // 0x1fca70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fca70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fca74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fca74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fca78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fca78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fca7c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fca7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fca80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fca84: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA84u;
        // 0x1fca88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCA8Cu;
    // 0x1fca8c: 0x0  nop
    ctx->pc = 0x1fca8cu;
    // NOP
    ctx->pc = 0x1fca90u;
}
