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

// Function: sub_0016F588
// Address: 0x16f588 - 0x16f6c0
void sub_0016F588_0x16f588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F588_0x16f588");
#endif

    switch (ctx->pc) {
        case 0x16f5b8u: goto label_16f5b8;
        case 0x16f5d0u: goto label_16f5d0;
        case 0x16f5d8u: goto label_16f5d8;
        case 0x16f608u: goto label_16f608;
        case 0x16f620u: goto label_16f620;
        case 0x16f644u: goto label_16f644;
        case 0x16f664u: goto label_16f664;
        case 0x16f678u: goto label_16f678;
        case 0x16f6a8u: goto label_16f6a8;
        default: break;
    }

    ctx->pc = 0x16f588u;

    // 0x16f588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f58c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16f58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16f590: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16f590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16f594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16f598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16f59c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f5a0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x16f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16f5a4: 0x14820029  bne         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x16F5A4u;
    {
        const bool branch_taken_0x16f5a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5A4u;
        // 0x16f5a8: 0x26050044  addiu       $a1, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5a4) {
            ctx->pc = 0x16F64Cu;
            goto label_16f64c;
        }
    }
    ctx->pc = 0x16F5ACu;
    // 0x16f5ac: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x16f5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16f5b0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F5B0u;
    SET_GPR_U32(ctx, 31, 0x16F5B8u);
    ctx->pc = 0x16F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F5B0u;
    // 0x16f5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F5B0u, 0x16F5B8u)) {
        return;
    }
    ctx->pc = 0x16F5B8u;
label_16f5b8:
    // 0x16f5b8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16f5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16f5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f5c0: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x16f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x16f5c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16f5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f5c8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16F5C8u;
    SET_GPR_U32(ctx, 31, 0x16F5D0u);
    ctx->pc = 0x16F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F5C8u;
    // 0x16f5cc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16F5C8u, 0x16F5D0u)) {
        return;
    }
    ctx->pc = 0x16F5D0u;
label_16f5d0:
    // 0x16f5d0: 0xc075d7e  jal         func_1D75F8
    ctx->pc = 0x16F5D0u;
    SET_GPR_U32(ctx, 31, 0x16F5D8u);
    ctx->pc = 0x1D75F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75F8u, 0x16F5D0u, 0x16F5D8u)) {
        return;
    }
    ctx->pc = 0x16F5D8u;
label_16f5d8:
    // 0x16f5d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x16f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x16f5dc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x16f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x16f5e0: 0x8c634358  lw          $v1, 0x4358($v1)
    ctx->pc = 0x16f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4358u));
    // 0x16f5e4: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x16f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x16f5e8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F5E8u;
    {
        const bool branch_taken_0x16f5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5E8u;
        // 0x16f5ec: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5e8) {
            ctx->pc = 0x16F60Cu;
            goto label_16f60c;
        }
    }
    ctx->pc = 0x16F5F0u;
    // 0x16f5f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f5f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F5F4u;
    {
        const bool branch_taken_0x16f5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5F4u;
        // 0x16f5f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5f4) {
            ctx->pc = 0x16F608u;
            goto label_16f608;
        }
    }
    ctx->pc = 0x16F5FCu;
    // 0x16f5fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x16f600: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16F600u;
    SET_GPR_U32(ctx, 31, 0x16F608u);
    ctx->pc = 0x16F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F600u;
    // 0x16f604: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16F600u, 0x16F608u)) {
        return;
    }
    ctx->pc = 0x16F608u;
label_16f608:
    // 0x16f608: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16f608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_16f60c:
    // 0x16f60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f610: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x16f610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935280)));
    // 0x16f614: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f618: 0xc043642  jal         func_10D908
    ctx->pc = 0x16F618u;
    SET_GPR_U32(ctx, 31, 0x16F620u);
    ctx->pc = 0x16F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F618u;
    // 0x16f61c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x16F618u, 0x16F620u)) {
        return;
    }
    ctx->pc = 0x16F620u;
label_16f620:
    // 0x16f620: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x16f620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x16f624: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16f624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16f628: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16f628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16f62c: 0x8c644120  lw          $a0, 0x4120($v1)
    ctx->pc = 0x16f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4120u));
    // 0x16f630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f634: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f638: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16f638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f63c: 0xc07bf14  jal         func_1EFC50
    ctx->pc = 0x16F63Cu;
    SET_GPR_U32(ctx, 31, 0x16F644u);
    ctx->pc = 0x16F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F63Cu;
    // 0x16f640: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC50u, 0x16F63Cu, 0x16F644u)) {
        return;
    }
    ctx->pc = 0x16F644u;
label_16f644:
    // 0x16f644: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16F644u;
    {
        const bool branch_taken_0x16f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F644u;
        // 0x16f648: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f644) {
            ctx->pc = 0x16F6ACu;
            goto label_16f6ac;
        }
    }
    ctx->pc = 0x16F64Cu;
label_16f64c:
    // 0x16f64c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x16f650: 0x8c628898  lw          $v0, -0x7768($v1)
    ctx->pc = 0x16f650u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8898u));
    // 0x16f654: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16F654u;
    {
        const bool branch_taken_0x16f654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F654u;
        // 0x16f658: 0x24718898  addiu       $s1, $v1, -0x7768 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f654) {
            ctx->pc = 0x16F6A8u;
            goto label_16f6a8;
        }
    }
    ctx->pc = 0x16F65Cu;
    // 0x16f65c: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x16F65Cu;
    SET_GPR_U32(ctx, 31, 0x16F664u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x16F65Cu, 0x16F664u)) {
        return;
    }
    ctx->pc = 0x16F664u;
label_16f664:
    // 0x16f664: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x16F664u;
    {
        const bool branch_taken_0x16f664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f664) {
            ctx->pc = 0x16F668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F664u;
            // 0x16f668: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F6ACu;
            goto label_16f6ac;
        }
    }
    ctx->pc = 0x16F66Cu;
    // 0x16f66c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16f670: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F670u;
    SET_GPR_U32(ctx, 31, 0x16F678u);
    ctx->pc = 0x16F674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F670u;
    // 0x16f674: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F670u, 0x16F678u)) {
        return;
    }
    ctx->pc = 0x16F678u;
label_16f678:
    // 0x16f678: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16f678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16f67c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x16f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16f680: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x16f680u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x16f684: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F684u;
    {
        const bool branch_taken_0x16f684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F684u;
        // 0x16f688: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f684) {
            ctx->pc = 0x16F6ACu;
            goto label_16f6ac;
        }
    }
    ctx->pc = 0x16F68Cu;
    // 0x16f68c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f690: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F690u;
    {
        const bool branch_taken_0x16f690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F690u;
        // 0x16f694: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f690) {
            ctx->pc = 0x16F6B0u;
            goto label_16f6b0;
        }
    }
    ctx->pc = 0x16F698u;
    // 0x16f698: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16f698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16f69c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6a0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16F6A0u;
    SET_GPR_U32(ctx, 31, 0x16F6A8u);
    ctx->pc = 0x16F6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6A0u;
    // 0x16f6a4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16F6A0u, 0x16F6A8u)) {
        return;
    }
    ctx->pc = 0x16F6A8u;
label_16f6a8:
    // 0x16f6a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16f6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16f6ac:
    // 0x16f6ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16f6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16f6b0:
    // 0x16f6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16f6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x16F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6B4u;
        // 0x16f6b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F6BCu;
    // 0x16f6bc: 0x0  nop
    ctx->pc = 0x16f6bcu;
    // NOP
    ctx->pc = 0x16f6c0u;
}
