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

// Function: sub_0030D130
// Address: 0x30d130 - 0x30d1d0
void sub_0030D130_0x30d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D130_0x30d130");
#endif

    switch (ctx->pc) {
        case 0x30d158u: goto label_30d158;
        case 0x30d184u: goto label_30d184;
        default: break;
    }

    ctx->pc = 0x30d130u;

    // 0x30d130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d134: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30d134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30d138: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d13c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30d13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d140: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d148: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d14c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30d14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30d150: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30D150u;
    SET_GPR_U32(ctx, 31, 0x30D158u);
    ctx->pc = 0x30D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D150u;
    // 0x30d154: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30D150u, 0x30D158u)) {
        return;
    }
    ctx->pc = 0x30D158u;
label_30d158:
    // 0x30d158: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30D158u;
    {
        const bool branch_taken_0x30d158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D158u;
        // 0x30d15c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d158) {
            ctx->pc = 0x30D190u;
            goto label_30d190;
        }
    }
    ctx->pc = 0x30D160u;
    // 0x30d160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d164: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30d164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30d168: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D168u;
    {
        const bool branch_taken_0x30d168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D168u;
        // 0x30d16c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d168) {
            ctx->pc = 0x30D190u;
            goto label_30d190;
        }
    }
    ctx->pc = 0x30D170u;
    // 0x30d170: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D170u;
    {
        const bool branch_taken_0x30d170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D170u;
        // 0x30d174: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d170) {
            ctx->pc = 0x30D190u;
            goto label_30d190;
        }
    }
    ctx->pc = 0x30D178u;
    // 0x30d178: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30d178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30d17c: 0xc092796  jal         func_249E58
    ctx->pc = 0x30D17Cu;
    SET_GPR_U32(ctx, 31, 0x30D184u);
    ctx->pc = 0x30D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D17Cu;
    // 0x30d180: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x30D17Cu, 0x30D184u)) {
        return;
    }
    ctx->pc = 0x30D184u;
label_30d184:
    // 0x30d184: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D184u;
    {
        const bool branch_taken_0x30d184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d184) {
            ctx->pc = 0x30D198u;
            goto label_30d198;
        }
    }
    ctx->pc = 0x30D18Cu;
    // 0x30d18c: 0x0  nop
    ctx->pc = 0x30d18cu;
    // NOP
label_30d190:
    // 0x30d190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D190u;
    {
        const bool branch_taken_0x30d190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D190u;
        // 0x30d194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d190) {
            ctx->pc = 0x30D1B0u;
            goto label_30d1b0;
        }
    }
    ctx->pc = 0x30D198u;
label_30d198:
    // 0x30d198: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D198u;
    {
        const bool branch_taken_0x30d198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D198u;
        // 0x30d19c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d198) {
            ctx->pc = 0x30D1B0u;
            goto label_30d1b0;
        }
    }
    ctx->pc = 0x30D1A0u;
    // 0x30d1a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d1a4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x30d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x30d1a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30d1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30d1ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d1b0:
    // 0x30d1b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30d1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d1b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30d1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d1b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1BCu;
        // 0x30d1c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D1C4u;
    // 0x30d1c4: 0x0  nop
    ctx->pc = 0x30d1c4u;
    // NOP
    // 0x30d1c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x30d1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30d1cc: 0x0  nop
    ctx->pc = 0x30d1ccu;
    // NOP
    ctx->pc = 0x30d1d0u;
}
