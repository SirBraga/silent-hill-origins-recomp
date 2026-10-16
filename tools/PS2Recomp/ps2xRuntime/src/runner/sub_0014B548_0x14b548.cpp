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

// Function: sub_0014B548
// Address: 0x14b548 - 0x14b608
void sub_0014B548_0x14b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B548_0x14b548");
#endif

    switch (ctx->pc) {
        case 0x14b594u: goto label_14b594;
        case 0x14b5a8u: goto label_14b5a8;
        case 0x14b5b8u: goto label_14b5b8;
        case 0x14b5d0u: goto label_14b5d0;
        case 0x14b5dcu: goto label_14b5dc;
        case 0x14b5e8u: goto label_14b5e8;
        default: break;
    }

    ctx->pc = 0x14b548u;

    // 0x14b548: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14b548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14b54c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x14b550: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14b550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14b554: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14b554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14b558: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14b558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14b55c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b560: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14b560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14b564: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14b564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b56c: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x14b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
    // 0x14b570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b574: 0x24631d10  addiu       $v1, $v1, 0x1D10
    ctx->pc = 0x14b574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7440));
    // 0x14b578: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x14b578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x14b57c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14b580: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x14b580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x14b584: 0x24a5f898  addiu       $a1, $a1, -0x768
    ctx->pc = 0x14b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
    // 0x14b588: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x14b588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x14b58c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14B58Cu;
    SET_GPR_U32(ctx, 31, 0x14B594u);
    ctx->pc = 0x14B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B58Cu;
    // 0x14b590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14B58Cu, 0x14B594u)) {
        return;
    }
    ctx->pc = 0x14B594u;
label_14b594:
    // 0x14b594: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x14b594u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x14b598: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14b598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14b59c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5a0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14B5A0u;
    SET_GPR_U32(ctx, 31, 0x14B5A8u);
    ctx->pc = 0x14B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5A0u;
    // 0x14b5a4: 0x24a5f8a0  addiu       $a1, $a1, -0x760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14B5A0u, 0x14B5A8u)) {
        return;
    }
    ctx->pc = 0x14B5A8u;
label_14b5a8:
    // 0x14b5a8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x14b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x14b5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5b0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14B5B0u;
    SET_GPR_U32(ctx, 31, 0x14B5B8u);
    ctx->pc = 0x14B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5B0u;
    // 0x14b5b4: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14B5B0u, 0x14B5B8u)) {
        return;
    }
    ctx->pc = 0x14B5B8u;
label_14b5b8:
    // 0x14b5b8: 0x8e4284e8  lw          $v0, -0x7B18($s2)
    ctx->pc = 0x14b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935784)));
    // 0x14b5bc: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B5BCu;
    {
        const bool branch_taken_0x14b5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x14B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5BCu;
        // 0x14b5c0: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5bc) {
            ctx->pc = 0x14B5D4u;
            goto label_14b5d4;
        }
    }
    ctx->pc = 0x14B5C4u;
    // 0x14b5c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5c8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x14B5C8u;
    SET_GPR_U32(ctx, 31, 0x14B5D0u);
    ctx->pc = 0x14B5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5C8u;
    // 0x14b5cc: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x14B5C8u, 0x14B5D0u)) {
        return;
    }
    ctx->pc = 0x14B5D0u;
label_14b5d0:
    // 0x14b5d0: 0xae4084e8  sw          $zero, -0x7B18($s2)
    ctx->pc = 0x14b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294935784), GPR_U32(ctx, 0));
label_14b5d4:
    // 0x14b5d4: 0xc052628  jal         func_1498A0
    ctx->pc = 0x14B5D4u;
    SET_GPR_U32(ctx, 31, 0x14B5DCu);
    ctx->pc = 0x14B5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5D4u;
    // 0x14b5d8: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1498A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1498A0u, 0x14B5D4u, 0x14B5DCu)) {
        return;
    }
    ctx->pc = 0x14B5DCu;
label_14b5dc:
    // 0x14b5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5e0: 0xc0525d4  jal         func_149750
    ctx->pc = 0x14B5E0u;
    SET_GPR_U32(ctx, 31, 0x14B5E8u);
    ctx->pc = 0x14B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5E0u;
    // 0x14b5e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149750u, 0x14B5E0u, 0x14B5E8u)) {
        return;
    }
    ctx->pc = 0x14B5E8u;
label_14b5e8:
    // 0x14b5e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14b5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b5ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14b5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b5f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b5f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b5f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14b5f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x14B5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5FCu;
        // 0x14b600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B604u;
    // 0x14b604: 0x0  nop
    ctx->pc = 0x14b604u;
    // NOP
    ctx->pc = 0x14b608u;
}
