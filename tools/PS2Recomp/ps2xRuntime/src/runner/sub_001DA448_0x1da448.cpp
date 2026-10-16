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

// Function: sub_001DA448
// Address: 0x1da448 - 0x1da4d8
void sub_001DA448_0x1da448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA448_0x1da448");
#endif

    switch (ctx->pc) {
        case 0x1da470u: goto label_1da470;
        case 0x1da47cu: goto label_1da47c;
        case 0x1da4a4u: goto label_1da4a4;
        case 0x1da4b8u: goto label_1da4b8;
        default: break;
    }

    ctx->pc = 0x1da448u;

    // 0x1da448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1da448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1da44c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1da450: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1da450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1da454: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1da454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1da458: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1da458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da45c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1da45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1da460: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1da460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da468: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1DA468u;
    SET_GPR_U32(ctx, 31, 0x1DA470u);
    ctx->pc = 0x1DA46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA468u;
    // 0x1da46c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1DA468u, 0x1DA470u)) {
        return;
    }
    ctx->pc = 0x1DA470u;
label_1da470:
    // 0x1da470: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1da470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da474: 0xc080572  jal         func_2015C8
    ctx->pc = 0x1DA474u;
    SET_GPR_U32(ctx, 31, 0x1DA47Cu);
    ctx->pc = 0x1DA478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA474u;
    // 0x1da478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x1DA474u, 0x1DA47Cu)) {
        return;
    }
    ctx->pc = 0x1DA47Cu;
label_1da47c:
    // 0x1da47c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1da47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1da480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da484: 0x24631b38  addiu       $v1, $v1, 0x1B38
    ctx->pc = 0x1da484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6968));
    // 0x1da488: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1da488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da48c: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x1da48cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
    // 0x1da490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1da490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da498: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da49c: 0xc0b720a  jal         func_2DC828
    ctx->pc = 0x1DA49Cu;
    SET_GPR_U32(ctx, 31, 0x1DA4A4u);
    ctx->pc = 0x1DA4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA49Cu;
    // 0x1da4a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC828u, 0x1DA49Cu, 0x1DA4A4u)) {
        return;
    }
    ctx->pc = 0x1DA4A4u;
label_1da4a4:
    // 0x1da4a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4a8: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA4A8u;
    {
        const bool branch_taken_0x1da4a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da4a8) {
            ctx->pc = 0x1DA4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA4A8u;
            // 0x1da4ac: 0xae500018  sw          $s0, 0x18($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA4BCu;
            goto label_1da4bc;
        }
    }
    ctx->pc = 0x1DA4B0u;
    // 0x1da4b0: 0xc076534  jal         func_1D94D0
    ctx->pc = 0x1DA4B0u;
    SET_GPR_U32(ctx, 31, 0x1DA4B8u);
    ctx->pc = 0x1DA4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4B0u;
    // 0x1da4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D94D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D94D0u, 0x1DA4B0u, 0x1DA4B8u)) {
        return;
    }
    ctx->pc = 0x1DA4B8u;
label_1da4b8:
    // 0x1da4b8: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x1da4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
label_1da4bc:
    // 0x1da4bc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1da4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1da4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da4c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1da4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da4c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1da4c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da4cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4D0u;
        // 0x1da4d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA4D8u;
}
