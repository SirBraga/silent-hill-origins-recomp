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

// Function: sub_001FC8A0
// Address: 0x1fc8a0 - 0x1fc9a8
void sub_001FC8A0_0x1fc8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC8A0_0x1fc8a0");
#endif

    switch (ctx->pc) {
        case 0x1fc8d4u: goto label_1fc8d4;
        case 0x1fc8e4u: goto label_1fc8e4;
        case 0x1fc908u: goto label_1fc908;
        case 0x1fc91cu: goto label_1fc91c;
        case 0x1fc930u: goto label_1fc930;
        default: break;
    }

    ctx->pc = 0x1fc8a0u;

    // 0x1fc8a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc8a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fc8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fc8a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fc8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fc8ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fc8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fc8b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fc8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fc8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fc8bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fc8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc8c4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FC8C4u;
    {
        const bool branch_taken_0x1fc8c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8C4u;
        // 0x1fc8c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8c4) {
            ctx->pc = 0x1FC920u;
            goto label_1fc920;
        }
    }
    ctx->pc = 0x1FC8CCu;
    // 0x1fc8cc: 0xc06765e  jal         func_19D978
    ctx->pc = 0x1FC8CCu;
    SET_GPR_U32(ctx, 31, 0x1FC8D4u);
    ctx->pc = 0x19D978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19D978u, 0x1FC8CCu, 0x1FC8D4u)) {
        return;
    }
    ctx->pc = 0x1FC8D4u;
label_1fc8d4:
    // 0x1fc8d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC8D4u;
    {
        const bool branch_taken_0x1fc8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8D4u;
        // 0x1fc8d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8d4) {
            ctx->pc = 0x1FC8E8u;
            goto label_1fc8e8;
        }
    }
    ctx->pc = 0x1FC8DCu;
    // 0x1fc8dc: 0xc08abf6  jal         func_22AFD8
    ctx->pc = 0x1FC8DCu;
    SET_GPR_U32(ctx, 31, 0x1FC8E4u);
    ctx->pc = 0x1FC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC8DCu;
    // 0x1fc8e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AFD8u, 0x1FC8DCu, 0x1FC8E4u)) {
        return;
    }
    ctx->pc = 0x1FC8E4u;
label_1fc8e4:
    // 0x1fc8e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fc8e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc8e8:
    // 0x1fc8e8: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FC8E8u;
    {
        const bool branch_taken_0x1fc8e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8E8u;
        // 0x1fc8ec: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8e8) {
            ctx->pc = 0x1FC928u;
            goto label_1fc928;
        }
    }
    ctx->pc = 0x1FC8F0u;
    // 0x1fc8f0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1fc8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fc8f4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FC8F4u;
    {
        const bool branch_taken_0x1fc8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc8f4) {
            ctx->pc = 0x1FC920u;
            goto label_1fc920;
        }
    }
    ctx->pc = 0x1FC8FCu;
    // 0x1fc8fc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fc8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fc900: 0xc080f74  jal         func_203DD0
    ctx->pc = 0x1FC900u;
    SET_GPR_U32(ctx, 31, 0x1FC908u);
    ctx->pc = 0x1FC904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC900u;
    // 0x1fc904: 0x24a531a0  addiu       $a1, $a1, 0x31A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203DD0u, 0x1FC900u, 0x1FC908u)) {
        return;
    }
    ctx->pc = 0x1FC908u;
label_1fc908:
    // 0x1fc908: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC908u;
    {
        const bool branch_taken_0x1fc908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc908) {
            ctx->pc = 0x1FC920u;
            goto label_1fc920;
        }
    }
    ctx->pc = 0x1FC910u;
    // 0x1fc910: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1fc910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1fc914: 0xc08abf6  jal         func_22AFD8
    ctx->pc = 0x1FC914u;
    SET_GPR_U32(ctx, 31, 0x1FC91Cu);
    ctx->pc = 0x1FC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC914u;
    // 0x1fc918: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AFD8u, 0x1FC914u, 0x1FC91Cu)) {
        return;
    }
    ctx->pc = 0x1FC91Cu;
label_1fc91c:
    // 0x1fc91c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fc91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc920:
    // 0x1fc920: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC920u;
    {
        const bool branch_taken_0x1fc920 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC920u;
        // 0x1fc924: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc920) {
            ctx->pc = 0x1FC980u;
            goto label_1fc980;
        }
    }
    ctx->pc = 0x1FC928u;
label_1fc928:
    // 0x1fc928: 0xc080858  jal         func_202160
    ctx->pc = 0x1FC928u;
    SET_GPR_U32(ctx, 31, 0x1FC930u);
    ctx->pc = 0x1FC92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC928u;
    // 0x1fc92c: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1FC928u, 0x1FC930u)) {
        return;
    }
    ctx->pc = 0x1FC930u;
label_1fc930:
    // 0x1fc930: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fc930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc934: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1fc934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1fc938: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1fc938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fc93c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fc93cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1fc940: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1fc940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1fc944: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1fc944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fc948: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC948u;
    {
        const bool branch_taken_0x1fc948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc948) {
            ctx->pc = 0x1FC94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC948u;
            // 0x1fc94c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC950u;
            goto label_1fc950;
        }
    }
    ctx->pc = 0x1FC950u;
label_1fc950:
    // 0x1fc950: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fc950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fc954: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC954u;
    {
        const bool branch_taken_0x1fc954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc954) {
            ctx->pc = 0x1FC958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC954u;
            // 0x1fc958: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC95Cu;
            goto label_1fc95c;
        }
    }
    ctx->pc = 0x1FC95Cu;
label_1fc95c:
    // 0x1fc95c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1fc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1fc960: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1fc960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1fc964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc968: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1fc968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1fc96c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1fc96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1fc970: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fc970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fc974: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC974u;
    {
        const bool branch_taken_0x1fc974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC974u;
        // 0x1fc978: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc974) {
            ctx->pc = 0x1FC980u;
            goto label_1fc980;
        }
    }
    ctx->pc = 0x1FC97Cu;
    // 0x1fc97c: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x1fc97cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fc980:
    // 0x1fc980: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1fc980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc984: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fc984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc988: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fc988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc98c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc98cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc990: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fc990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc998: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC998u;
        // 0x1fc99c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC9A0u;
    // 0x1fc9a0: 0x3082007f  andi        $v0, $a0, 0x7F
    ctx->pc = 0x1fc9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x1fc9a4: 0x0  nop
    ctx->pc = 0x1fc9a4u;
    // NOP
    ctx->pc = 0x1fc9a8u;
}
