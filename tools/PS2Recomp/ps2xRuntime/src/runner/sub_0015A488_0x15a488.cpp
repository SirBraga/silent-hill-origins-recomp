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

// Function: sub_0015A488
// Address: 0x15a488 - 0x15a578
void sub_0015A488_0x15a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A488_0x15a488");
#endif

    switch (ctx->pc) {
        case 0x15a4ecu: goto label_15a4ec;
        case 0x15a4fcu: goto label_15a4fc;
        case 0x15a504u: goto label_15a504;
        case 0x15a518u: goto label_15a518;
        case 0x15a52cu: goto label_15a52c;
        case 0x15a540u: goto label_15a540;
        case 0x15a54cu: goto label_15a54c;
        case 0x15a558u: goto label_15a558;
        default: break;
    }

    ctx->pc = 0x15a488u;

    // 0x15a488: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15a488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15a48c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x15a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15a490: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15a494: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15a494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x15a498: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a49c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x15a4a0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x15a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x15a4a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15a4a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a4ac: 0x24842ce0  addiu       $a0, $a0, 0x2CE0
    ctx->pc = 0x15a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    // 0x15a4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a4b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15a4b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a4b8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x15a4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x15a4bc: 0x24422e40  addiu       $v0, $v0, 0x2E40
    ctx->pc = 0x15a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11840));
    // 0x15a4c0: 0x24632d20  addiu       $v1, $v1, 0x2D20
    ctx->pc = 0x15a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11552));
    // 0x15a4c4: 0x24c62e60  addiu       $a2, $a2, 0x2E60
    ctx->pc = 0x15a4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11872));
    // 0x15a4c8: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x15a4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x15a4cc: 0xae240084  sw          $a0, 0x84($s1)
    ctx->pc = 0x15a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
    // 0x15a4d0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15a4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x15a4d4: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x15a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x15a4d8: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x15a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x15a4dc: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x15a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x15a4e0: 0xae260034  sw          $a2, 0x34($s1)
    ctx->pc = 0x15a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
    // 0x15a4e4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x15A4E4u;
    SET_GPR_U32(ctx, 31, 0x15A4ECu);
    ctx->pc = 0x15A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A4E4u;
    // 0x15a4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15A4E4u, 0x15A4ECu)) {
        return;
    }
    ctx->pc = 0x15A4ECu;
label_15a4ec:
    // 0x15a4ec: 0x263200d8  addiu       $s2, $s1, 0xD8
    ctx->pc = 0x15a4ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    // 0x15a4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a4f4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x15A4F4u;
    SET_GPR_U32(ctx, 31, 0x15A4FCu);
    ctx->pc = 0x15A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A4F4u;
    // 0x15a4f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15A4F4u, 0x15A4FCu)) {
        return;
    }
    ctx->pc = 0x15A4FCu;
label_15a4fc:
    // 0x15a4fc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x15A4FCu;
    SET_GPR_U32(ctx, 31, 0x15A504u);
    ctx->pc = 0x15A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A4FCu;
    // 0x15a500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x15A4FCu, 0x15A504u)) {
        return;
    }
    ctx->pc = 0x15A504u;
label_15a504:
    // 0x15a504: 0x8e24027c  lw          $a0, 0x27C($s1)
    ctx->pc = 0x15a504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
    // 0x15a508: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A508u;
    {
        const bool branch_taken_0x15a508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a508) {
            ctx->pc = 0x15A50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A508u;
            // 0x15a50c: 0x8e24035c  lw          $a0, 0x35C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A51Cu;
            goto label_15a51c;
        }
    }
    ctx->pc = 0x15A510u;
    // 0x15a510: 0xc092932  jal         func_24A4C8
    ctx->pc = 0x15A510u;
    SET_GPR_U32(ctx, 31, 0x15A518u);
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x15A510u, 0x15A518u)) {
        return;
    }
    ctx->pc = 0x15A518u;
label_15a518:
    // 0x15a518: 0x8e24035c  lw          $a0, 0x35C($s1)
    ctx->pc = 0x15a518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
label_15a51c:
    // 0x15a51c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A51Cu;
    {
        const bool branch_taken_0x15a51c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a51c) {
            ctx->pc = 0x15A520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A51Cu;
            // 0x15a520: 0x8e240364  lw          $a0, 0x364($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A530u;
            goto label_15a530;
        }
    }
    ctx->pc = 0x15A524u;
    // 0x15a524: 0xc0808d4  jal         func_202350
    ctx->pc = 0x15A524u;
    SET_GPR_U32(ctx, 31, 0x15A52Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x15A524u, 0x15A52Cu)) {
        return;
    }
    ctx->pc = 0x15A52Cu;
label_15a52c:
    // 0x15a52c: 0x8e240364  lw          $a0, 0x364($s1)
    ctx->pc = 0x15a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
label_15a530:
    // 0x15a530: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A530u;
    {
        const bool branch_taken_0x15a530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a530) {
            ctx->pc = 0x15A534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A530u;
            // 0x15a534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A544u;
            goto label_15a544;
        }
    }
    ctx->pc = 0x15A538u;
    // 0x15a538: 0xc0808d4  jal         func_202350
    ctx->pc = 0x15A538u;
    SET_GPR_U32(ctx, 31, 0x15A540u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x15A538u, 0x15A540u)) {
        return;
    }
    ctx->pc = 0x15A540u;
label_15a540:
    // 0x15a540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15a540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a544:
    // 0x15a544: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x15A544u;
    SET_GPR_U32(ctx, 31, 0x15A54Cu);
    ctx->pc = 0x15A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A544u;
    // 0x15a548: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x15A544u, 0x15A54Cu)) {
        return;
    }
    ctx->pc = 0x15A54Cu;
label_15a54c:
    // 0x15a54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a550: 0xc04ee16  jal         func_13B858
    ctx->pc = 0x15A550u;
    SET_GPR_U32(ctx, 31, 0x15A558u);
    ctx->pc = 0x15A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A550u;
    // 0x15a554: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B858u, 0x15A550u, 0x15A558u)) {
        return;
    }
    ctx->pc = 0x15A558u;
label_15a558:
    // 0x15a558: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15a558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a55c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15a55cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a560: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a564: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15a564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a56c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A56Cu;
        // 0x15a570: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A574u;
    // 0x15a574: 0x0  nop
    ctx->pc = 0x15a574u;
    // NOP
    ctx->pc = 0x15a578u;
}
