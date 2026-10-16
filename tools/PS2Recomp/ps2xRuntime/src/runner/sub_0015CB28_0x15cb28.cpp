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

// Function: sub_0015CB28
// Address: 0x15cb28 - 0x15cc18
void sub_0015CB28_0x15cb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CB28_0x15cb28");
#endif

    switch (ctx->pc) {
        case 0x15cb60u: goto label_15cb60;
        case 0x15cb74u: goto label_15cb74;
        case 0x15cb7cu: goto label_15cb7c;
        case 0x15cb9cu: goto label_15cb9c;
        case 0x15cbb0u: goto label_15cbb0;
        case 0x15cbb8u: goto label_15cbb8;
        case 0x15cbc8u: goto label_15cbc8;
        case 0x15cbd0u: goto label_15cbd0;
        case 0x15cbe4u: goto label_15cbe4;
        case 0x15cbecu: goto label_15cbec;
        case 0x15cc00u: goto label_15cc00;
        default: break;
    }

    ctx->pc = 0x15cb28u;

    // 0x15cb28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15cb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15cb2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15cb30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15cb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15cb34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15cb34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15cb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15cb3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15cb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15cb40: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x15cb40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x15cb44: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x15CB44u;
    {
        const bool branch_taken_0x15cb44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB44u;
        // 0x15cb48: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb44) {
            ctx->pc = 0x15CB7Cu;
            goto label_15cb7c;
        }
    }
    ctx->pc = 0x15CB4Cu;
    // 0x15cb4c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x15cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15cb50: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CB50u;
    {
        const bool branch_taken_0x15cb50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb50) {
            ctx->pc = 0x15CB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CB50u;
            // 0x15cb54: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB64u;
            goto label_15cb64;
        }
    }
    ctx->pc = 0x15CB58u;
    // 0x15cb58: 0xc0808d4  jal         func_202350
    ctx->pc = 0x15CB58u;
    SET_GPR_U32(ctx, 31, 0x15CB60u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x15CB58u, 0x15CB60u)) {
        return;
    }
    ctx->pc = 0x15CB60u;
label_15cb60:
    // 0x15cb60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cb64:
    // 0x15cb64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CB64u;
    {
        const bool branch_taken_0x15cb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb64) {
            ctx->pc = 0x15CB74u;
            goto label_15cb74;
        }
    }
    ctx->pc = 0x15CB6Cu;
    // 0x15cb6c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x15CB6Cu;
    SET_GPR_U32(ctx, 31, 0x15CB74u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x15CB6Cu, 0x15CB74u)) {
        return;
    }
    ctx->pc = 0x15CB74u;
label_15cb74:
    // 0x15cb74: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x15CB74u;
    SET_GPR_U32(ctx, 31, 0x15CB7Cu);
    ctx->pc = 0x15CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB74u;
    // 0x15cb78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x15CB74u, 0x15CB7Cu)) {
        return;
    }
    ctx->pc = 0x15CB7Cu;
label_15cb7c:
    // 0x15cb7c: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x15cb7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15cb80: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x15CB80u;
    {
        const bool branch_taken_0x15cb80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB80u;
        // 0x15cb84: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb80) {
            ctx->pc = 0x15CBBCu;
            goto label_15cbbc;
        }
    }
    ctx->pc = 0x15CB88u;
    // 0x15cb88: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x15cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15cb8c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CB8Cu;
    {
        const bool branch_taken_0x15cb8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb8c) {
            ctx->pc = 0x15CB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CB8Cu;
            // 0x15cb90: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CBA0u;
            goto label_15cba0;
        }
    }
    ctx->pc = 0x15CB94u;
    // 0x15cb94: 0xc0808d4  jal         func_202350
    ctx->pc = 0x15CB94u;
    SET_GPR_U32(ctx, 31, 0x15CB9Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x15CB94u, 0x15CB9Cu)) {
        return;
    }
    ctx->pc = 0x15CB9Cu;
label_15cb9c:
    // 0x15cb9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15cb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cba0:
    // 0x15cba0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CBA0u;
    {
        const bool branch_taken_0x15cba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cba0) {
            ctx->pc = 0x15CBB0u;
            goto label_15cbb0;
        }
    }
    ctx->pc = 0x15CBA8u;
    // 0x15cba8: 0xc0808d4  jal         func_202350
    ctx->pc = 0x15CBA8u;
    SET_GPR_U32(ctx, 31, 0x15CBB0u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x15CBA8u, 0x15CBB0u)) {
        return;
    }
    ctx->pc = 0x15CBB0u;
label_15cbb0:
    // 0x15cbb0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x15CBB0u;
    SET_GPR_U32(ctx, 31, 0x15CBB8u);
    ctx->pc = 0x15CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBB0u;
    // 0x15cbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x15CBB0u, 0x15CBB8u)) {
        return;
    }
    ctx->pc = 0x15CBB8u;
label_15cbb8:
    // 0x15cbb8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x15cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_15cbbc:
    // 0x15cbbc: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x15cbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x15cbc0: 0xc05ee9a  jal         func_17BA68
    ctx->pc = 0x15CBC0u;
    SET_GPR_U32(ctx, 31, 0x15CBC8u);
    ctx->pc = 0x15CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBC0u;
    // 0x15cbc4: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x15CBC0u, 0x15CBC8u)) {
        return;
    }
    ctx->pc = 0x15CBC8u;
label_15cbc8:
    // 0x15cbc8: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x15CBC8u;
    SET_GPR_U32(ctx, 31, 0x15CBD0u);
    ctx->pc = 0x15CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBC8u;
    // 0x15cbcc: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x15CBC8u, 0x15CBD0u)) {
        return;
    }
    ctx->pc = 0x15CBD0u;
label_15cbd0:
    // 0x15cbd0: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15cbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x15cbd4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CBD4u;
    {
        const bool branch_taken_0x15cbd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBD4u;
        // 0x15cbd8: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbd4) {
            ctx->pc = 0x15CBF0u;
            goto label_15cbf0;
        }
    }
    ctx->pc = 0x15CBDCu;
    // 0x15cbdc: 0xc09d90a  jal         func_276428
    ctx->pc = 0x15CBDCu;
    SET_GPR_U32(ctx, 31, 0x15CBE4u);
    ctx->pc = 0x15CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBDCu;
    // 0x15cbe0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x15CBDCu, 0x15CBE4u)) {
        return;
    }
    ctx->pc = 0x15CBE4u;
label_15cbe4:
    // 0x15cbe4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x15CBE4u;
    SET_GPR_U32(ctx, 31, 0x15CBECu);
    ctx->pc = 0x15CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBE4u;
    // 0x15cbe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x15CBE4u, 0x15CBECu)) {
        return;
    }
    ctx->pc = 0x15CBECu;
label_15cbec:
    // 0x15cbec: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x15cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_15cbf0:
    // 0x15cbf0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CBF0u;
    {
        const bool branch_taken_0x15cbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBF0u;
        // 0x15cbf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbf0) {
            ctx->pc = 0x15CC04u;
            goto label_15cc04;
        }
    }
    ctx->pc = 0x15CBF8u;
    // 0x15cbf8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x15CBF8u;
    SET_GPR_U32(ctx, 31, 0x15CC00u);
    ctx->pc = 0x15CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBF8u;
    // 0x15cbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x15CBF8u, 0x15CC00u)) {
        return;
    }
    ctx->pc = 0x15CC00u;
label_15cc00:
    // 0x15cc00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15cc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15cc04:
    // 0x15cc04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15cc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cc08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15cc08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cc0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15cc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cc10: 0x3e00008  jr          $ra
    ctx->pc = 0x15CC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC10u;
        // 0x15cc14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CC18u;
}
