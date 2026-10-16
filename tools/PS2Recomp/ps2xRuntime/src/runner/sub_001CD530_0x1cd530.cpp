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

// Function: sub_001CD530
// Address: 0x1cd530 - 0x1cd678
void sub_001CD530_0x1cd530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD530_0x1cd530");
#endif

    switch (ctx->pc) {
        case 0x1cd57cu: goto label_1cd57c;
        case 0x1cd5a4u: goto label_1cd5a4;
        case 0x1cd5b8u: goto label_1cd5b8;
        case 0x1cd5d8u: goto label_1cd5d8;
        case 0x1cd610u: goto label_1cd610;
        case 0x1cd61cu: goto label_1cd61c;
        case 0x1cd640u: goto label_1cd640;
        default: break;
    }

    ctx->pc = 0x1cd530u;

    // 0x1cd530: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1cd530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1cd534: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x1cd534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x1cd538: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x1cd538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x1cd53c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cd53cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd540: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1cd540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd544: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x1cd544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x1cd548: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x1cd548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x1cd54c: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x1cd54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x1cd550: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x1cd550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x1cd554: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cd554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd558: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x1cd558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
    // 0x1cd55c: 0x3c15006a  lui         $s5, 0x6A
    ctx->pc = 0x1cd55cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)106 << 16));
    // 0x1cd560: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x1cd560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
    // 0x1cd564: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1cd564u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x1cd568: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1cd568u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x1cd56c: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1cd56cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1cd570: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1cd570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1cd574: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1CD574u;
    SET_GPR_U32(ctx, 31, 0x1CD57Cu);
    ctx->pc = 0x1CD578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD574u;
    // 0x1cd578: 0x24170006  addiu       $s7, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1CD574u, 0x1CD57Cu)) {
        return;
    }
    ctx->pc = 0x1CD57Cu;
label_1cd57c:
    // 0x1cd57c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cd57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cd580: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd588: 0xc6810080  lwc1        $f1, 0x80($s4)
    ctx->pc = 0x1cd588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd58c: 0x8e64026c  lw          $a0, 0x26C($s3)
    ctx->pc = 0x1cd58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 620)));
    // 0x1cd590: 0x0  nop
    ctx->pc = 0x1cd590u;
    // NOP
    // 0x1cd594: 0x0  nop
    ctx->pc = 0x1cd594u;
    // NOP
    // 0x1cd598: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x1cd598u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1cd59c: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CD59Cu;
    SET_GPR_U32(ctx, 31, 0x1CD5A4u);
    ctx->pc = 0x1CD5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD59Cu;
    // 0x1cd5a0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CD59Cu, 0x1CD5A4u)) {
        return;
    }
    ctx->pc = 0x1CD5A4u;
label_1cd5a4:
    // 0x1cd5a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cd5a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1cd5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1cd5ac: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1cd5acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cd5b0: 0x245001c8  addiu       $s0, $v0, 0x1C8
    ctx->pc = 0x1cd5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x1cd5b4: 0x24760fc8  addiu       $s6, $v1, 0xFC8
    ctx->pc = 0x1cd5b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_1cd5b8:
    // 0x1cd5b8: 0x8e620274  lw          $v0, 0x274($s3)
    ctx->pc = 0x1cd5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
    // 0x1cd5bc: 0x56420018  bnel        $s2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CD5BCu;
    {
        const bool branch_taken_0x1cd5bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd5bc) {
            ctx->pc = 0x1CD5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD5BCu;
            // 0x1cd5c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD620u;
            goto label_1cd620;
        }
    }
    ctx->pc = 0x1CD5C4u;
    // 0x1cd5c4: 0x12570015  beq         $s2, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CD5C4u;
    {
        const bool branch_taken_0x1cd5c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        ctx->pc = 0x1CD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5C4u;
        // 0x1cd5c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5c4) {
            ctx->pc = 0x1CD61Cu;
            goto label_1cd61c;
        }
    }
    ctx->pc = 0x1CD5CCu;
    // 0x1cd5cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5d0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CD5D0u;
    SET_GPR_U32(ctx, 31, 0x1CD5D8u);
    ctx->pc = 0x1CD5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD5D0u;
    // 0x1cd5d4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CD5D0u, 0x1CD5D8u)) {
        return;
    }
    ctx->pc = 0x1CD5D8u;
label_1cd5d8:
    // 0x1cd5d8: 0xc6d00018  lwc1        $f16, 0x18($s6)
    ctx->pc = 0x1cd5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1cd5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5e0: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1cd5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd5e4: 0x26a501c0  addiu       $a1, $s5, 0x1C0
    ctx->pc = 0x1cd5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 448));
    // 0x1cd5e8: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x1cd5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd5ec: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1cd5ecu;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1cd5f0: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x1cd5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cd5f4: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1cd5f4u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1cd5f8: 0xc60f000c  lwc1        $f15, 0xC($s0)
    ctx->pc = 0x1cd5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cd5fc: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x1cd5fcu;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x1cd600: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1cd600u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cd604: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd608: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CD608u;
    SET_GPR_U32(ctx, 31, 0x1CD610u);
    ctx->pc = 0x1CD60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD608u;
    // 0x1cd60c: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CD608u, 0x1CD610u)) {
        return;
    }
    ctx->pc = 0x1CD610u;
label_1cd610:
    // 0x1cd610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd614: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CD614u;
    SET_GPR_U32(ctx, 31, 0x1CD61Cu);
    ctx->pc = 0x1CD618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD614u;
    // 0x1cd618: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CD614u, 0x1CD61Cu)) {
        return;
    }
    ctx->pc = 0x1CD61Cu;
label_1cd61c:
    // 0x1cd61c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cd61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cd620:
    // 0x1cd620: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x1cd620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1cd624: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CD624u;
    {
        const bool branch_taken_0x1cd624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD624u;
        // 0x1cd628: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd624) {
            ctx->pc = 0x1CD5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd5b8;
        }
    }
    ctx->pc = 0x1CD62Cu;
    // 0x1cd62c: 0x8e640260  lw          $a0, 0x260($s3)
    ctx->pc = 0x1cd62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x1cd630: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD630u;
    {
        const bool branch_taken_0x1cd630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD630u;
        // 0x1cd634: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd630) {
            ctx->pc = 0x1CD644u;
            goto label_1cd644;
        }
    }
    ctx->pc = 0x1CD638u;
    // 0x1cd638: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1CD638u;
    SET_GPR_U32(ctx, 31, 0x1CD640u);
    ctx->pc = 0x1CD63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD638u;
    // 0x1cd63c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1CD638u, 0x1CD640u)) {
        return;
    }
    ctx->pc = 0x1CD640u;
label_1cd640:
    // 0x1cd640: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x1cd640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1cd644:
    // 0x1cd644: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x1cd644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1cd648: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x1cd648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1cd64c: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x1cd64cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cd650: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x1cd650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cd654: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x1cd654u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1cd658: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x1cd658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1cd65c: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x1cd65cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cd660: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1cd660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cd664: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1cd664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cd668: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1cd668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cd66c: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1cd66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd670: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD670u;
        // 0x1cd674: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD678u;
}
