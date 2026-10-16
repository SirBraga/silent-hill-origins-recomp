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

// Function: sub_003086D0
// Address: 0x3086d0 - 0x3087a0
void sub_003086D0_0x3086d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003086D0_0x3086d0");
#endif

    switch (ctx->pc) {
        case 0x308720u: goto label_308720;
        case 0x30874cu: goto label_30874c;
        case 0x30875cu: goto label_30875c;
        default: break;
    }

    ctx->pc = 0x3086d0u;

    // 0x3086d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3086d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3086d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3086d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3086d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3086d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3086dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3086dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3086e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3086e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3086e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3086e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3086ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3086ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3086f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3086f4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3086F4u;
    {
        const bool branch_taken_0x3086f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3086F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086F4u;
        // 0x3086f8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086f4) {
            ctx->pc = 0x30873Cu;
            goto label_30873c;
        }
    }
    ctx->pc = 0x3086FCu;
    // 0x3086fc: 0x1a200021  blez        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3086FCu;
    {
        const bool branch_taken_0x3086fc = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x308700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086FCu;
        // 0x308700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086fc) {
            ctx->pc = 0x308784u;
            goto label_308784;
        }
    }
    ctx->pc = 0x308704u;
    // 0x308704: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x308704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x308708: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x308708u;
    {
        const bool branch_taken_0x308708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308708u;
        // 0x30870c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308708) {
            ctx->pc = 0x308784u;
            goto label_308784;
        }
    }
    ctx->pc = 0x308710u;
    // 0x308710: 0x5a60001d  blezl       $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x308710u;
    {
        const bool branch_taken_0x308710 = (GPR_S64(ctx, 19) <= 0);
        if (branch_taken_0x308710) {
            ctx->pc = 0x308714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308710u;
            // 0x308714: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308788u;
            goto label_308788;
        }
    }
    ctx->pc = 0x308718u;
    // 0x308718: 0xc0c10d6  jal         func_304358
    ctx->pc = 0x308718u;
    SET_GPR_U32(ctx, 31, 0x308720u);
    ctx->pc = 0x30871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308718u;
    // 0x30871c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304358u, 0x308718u, 0x308720u)) {
        return;
    }
    ctx->pc = 0x308720u;
label_308720:
    // 0x308720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x308720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308724: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x308724u;
    {
        const bool branch_taken_0x308724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x308724) {
            ctx->pc = 0x308744u;
            goto label_308744;
        }
    }
    ctx->pc = 0x30872Cu;
    // 0x30872c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x30872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x308730: 0x30420013  andi        $v0, $v0, 0x13
    ctx->pc = 0x308730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)19);
    // 0x308734: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x308734u;
    {
        const bool branch_taken_0x308734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308734u;
        // 0x308738: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308734) {
            ctx->pc = 0x308764u;
            goto label_308764;
        }
    }
    ctx->pc = 0x30873Cu;
label_30873c:
    // 0x30873c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x30873Cu;
    {
        const bool branch_taken_0x30873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30873Cu;
        // 0x308740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30873c) {
            ctx->pc = 0x308784u;
            goto label_308784;
        }
    }
    ctx->pc = 0x308744u;
label_308744:
    // 0x308744: 0xc0c20da  jal         func_308368
    ctx->pc = 0x308744u;
    SET_GPR_U32(ctx, 31, 0x30874Cu);
    ctx->pc = 0x308748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308744u;
    // 0x308748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308368u, 0x308744u, 0x30874Cu)) {
        return;
    }
    ctx->pc = 0x30874Cu;
label_30874c:
    // 0x30874c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30874Cu;
    {
        const bool branch_taken_0x30874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30874Cu;
        // 0x308750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30874c) {
            ctx->pc = 0x308784u;
            goto label_308784;
        }
    }
    ctx->pc = 0x308754u;
    // 0x308754: 0xc0c10d6  jal         func_304358
    ctx->pc = 0x308754u;
    SET_GPR_U32(ctx, 31, 0x30875Cu);
    ctx->pc = 0x308758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308754u;
    // 0x308758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304358u, 0x308754u, 0x30875Cu)) {
        return;
    }
    ctx->pc = 0x30875Cu;
label_30875c:
    // 0x30875c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30875cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308760: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x308760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_308764:
    // 0x308764: 0x2512018  mult        $a0, $s2, $s1
    ctx->pc = 0x308764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x308768: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x308768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30876c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x30876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x308770: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x308770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x308774: 0xacb10038  sw          $s1, 0x38($a1)
    ctx->pc = 0x308774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 17));
    // 0x308778: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x308778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30877c: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x30877cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x308780: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x308780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
label_308784:
    // 0x308784: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x308784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_308788:
    // 0x308788: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x308788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30878c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30878cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308790: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x308790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308798: 0x3e00008  jr          $ra
    ctx->pc = 0x308798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308798u;
        // 0x30879c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3087A0u;
}
