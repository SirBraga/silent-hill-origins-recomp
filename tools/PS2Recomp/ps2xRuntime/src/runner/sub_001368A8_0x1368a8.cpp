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

// Function: sub_001368A8
// Address: 0x1368a8 - 0x136a08
void sub_001368A8_0x1368a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001368A8_0x1368a8");
#endif

    switch (ctx->pc) {
        case 0x136908u: goto label_136908;
        case 0x136930u: goto label_136930;
        case 0x136988u: goto label_136988;
        case 0x13699cu: goto label_13699c;
        case 0x1369b4u: goto label_1369b4;
        case 0x1369d0u: goto label_1369d0;
        case 0x1369e0u: goto label_1369e0;
        default: break;
    }

    ctx->pc = 0x1368a8u;

    // 0x1368a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1368a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1368ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1368acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1368b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1368b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1368b4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1368b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1368b8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1368b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1368bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1368bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1368c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1368c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1368c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1368c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1368c8: 0x8e231bb0  lw          $v1, 0x1BB0($s1)
    ctx->pc = 0x1368c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7088)));
    // 0x1368cc: 0x10700016  beq         $v1, $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1368CCu;
    {
        const bool branch_taken_0x1368cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1368D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368CCu;
        // 0x1368d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368cc) {
            ctx->pc = 0x136928u;
            goto label_136928;
        }
    }
    ctx->pc = 0x1368D4u;
    // 0x1368d4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1368d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1368d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1368D8u;
    {
        const bool branch_taken_0x1368d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1368d8) {
            ctx->pc = 0x1368DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1368D8u;
            // 0x1368dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1368F0u;
            goto label_1368f0;
        }
    }
    ctx->pc = 0x1368E0u;
    // 0x1368e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1368E0u;
    {
        const bool branch_taken_0x1368e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1368e0) {
            ctx->pc = 0x136900u;
            goto label_136900;
        }
    }
    ctx->pc = 0x1368E8u;
    // 0x1368e8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1368E8u;
    {
        const bool branch_taken_0x1368e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368E8u;
        // 0x1368ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368e8) {
            ctx->pc = 0x1369ECu;
            goto label_1369ec;
        }
    }
    ctx->pc = 0x1368F0u;
label_1368f0:
    // 0x1368f0: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1368F0u;
    {
        const bool branch_taken_0x1368f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1368F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368F0u;
        // 0x1368f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368f0) {
            ctx->pc = 0x1369BCu;
            goto label_1369bc;
        }
    }
    ctx->pc = 0x1368F8u;
    // 0x1368f8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1368F8u;
    {
        const bool branch_taken_0x1368f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368F8u;
        // 0x1368fc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368f8) {
            ctx->pc = 0x1369F0u;
            goto label_1369f0;
        }
    }
    ctx->pc = 0x136900u;
label_136900:
    // 0x136900: 0xc04d9bc  jal         func_1366F0
    ctx->pc = 0x136900u;
    SET_GPR_U32(ctx, 31, 0x136908u);
    ctx->pc = 0x136904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136900u;
    // 0x136904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1366F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1366F0u, 0x136900u, 0x136908u)) {
        return;
    }
    ctx->pc = 0x136908u;
label_136908:
    // 0x136908: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x136908u;
    {
        const bool branch_taken_0x136908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136908) {
            ctx->pc = 0x13690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136908u;
            // 0x13690c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1369ECu;
            goto label_1369ec;
        }
    }
    ctx->pc = 0x136910u;
    // 0x136910: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x136910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x136914: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x136914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x136918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13691c: 0xae301bb0  sw          $s0, 0x1BB0($s1)
    ctx->pc = 0x13691cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7088), GPR_U32(ctx, 16));
    // 0x136920: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x136920u;
    {
        const bool branch_taken_0x136920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136920u;
        // 0x136924: 0xe6201bb4  swc1        $f0, 0x1BB4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136920) {
            ctx->pc = 0x1369E8u;
            goto label_1369e8;
        }
    }
    ctx->pc = 0x136928u;
label_136928:
    // 0x136928: 0xc04d9bc  jal         func_1366F0
    ctx->pc = 0x136928u;
    SET_GPR_U32(ctx, 31, 0x136930u);
    ctx->pc = 0x13692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136928u;
    // 0x13692c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1366F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1366F0u, 0x136928u, 0x136930u)) {
        return;
    }
    ctx->pc = 0x136930u;
label_136930:
    // 0x136930: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x136930u;
    {
        const bool branch_taken_0x136930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136930) {
            ctx->pc = 0x136934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136930u;
            // 0x136934: 0xc6201bb4  lwc1        $f0, 0x1BB4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13694Cu;
            goto label_13694c;
        }
    }
    ctx->pc = 0x136938u;
    // 0x136938: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x136938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x13693c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x13693cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x136940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136944: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x136944u;
    {
        const bool branch_taken_0x136944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136944u;
        // 0x136948: 0xe6201bb4  swc1        $f0, 0x1BB4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136944) {
            ctx->pc = 0x1369E8u;
            goto label_1369e8;
        }
    }
    ctx->pc = 0x13694Cu;
label_13694c:
    // 0x13694c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13694cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136950: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x136950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x136954: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x136954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136958: 0x0  nop
    ctx->pc = 0x136958u;
    // NOP
    // 0x13695c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x13695Cu;
    {
        const bool branch_taken_0x13695c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13695Cu;
        // 0x136960: 0xe6201bb4  swc1        $f0, 0x1BB4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13695c) {
            ctx->pc = 0x1369E8u;
            goto label_1369e8;
        }
    }
    ctx->pc = 0x136964u;
    // 0x136964: 0xe6211bb4  swc1        $f1, 0x1BB4($s1)
    ctx->pc = 0x136964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7092), bits); }
    // 0x136968: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x136968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x13696c: 0x8c528b2c  lw          $s2, -0x74D4($v0)
    ctx->pc = 0x13696cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x136970: 0x8e4300e4  lw          $v1, 0xE4($s2)
    ctx->pc = 0x136970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x136974: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x136974u;
    {
        const bool branch_taken_0x136974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136974) {
            ctx->pc = 0x1369ACu;
            goto label_1369ac;
        }
    }
    ctx->pc = 0x13697Cu;
    // 0x13697c: 0x8e50006c  lw          $s0, 0x6C($s2)
    ctx->pc = 0x13697cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x136980: 0xc0644cc  jal         func_191330
    ctx->pc = 0x136980u;
    SET_GPR_U32(ctx, 31, 0x136988u);
    ctx->pc = 0x136984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136980u;
    // 0x136984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191330u, 0x136980u, 0x136988u)) {
        return;
    }
    ctx->pc = 0x136988u;
label_136988:
    // 0x136988: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x136988u;
    {
        const bool branch_taken_0x136988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136988u;
        // 0x13698c: 0x26240320  addiu       $a0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136988) {
            ctx->pc = 0x1369ACu;
            goto label_1369ac;
        }
    }
    ctx->pc = 0x136990u;
    // 0x136990: 0x26251bc8  addiu       $a1, $s1, 0x1BC8
    ctx->pc = 0x136990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 7112));
    // 0x136994: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x136994u;
    SET_GPR_U32(ctx, 31, 0x13699Cu);
    ctx->pc = 0x136998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136994u;
    // 0x136998: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x136994u, 0x13699Cu)) {
        return;
    }
    ctx->pc = 0x13699Cu;
label_13699c:
    // 0x13699c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13699cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1369a0: 0xae201bb8  sw          $zero, 0x1BB8($s1)
    ctx->pc = 0x1369a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7096), GPR_U32(ctx, 0));
    // 0x1369a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1369A4u;
    {
        const bool branch_taken_0x1369a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1369A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369A4u;
        // 0x1369a8: 0xae221bb0  sw          $v0, 0x1BB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 7088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369a4) {
            ctx->pc = 0x1369E8u;
            goto label_1369e8;
        }
    }
    ctx->pc = 0x1369ACu;
label_1369ac:
    // 0x1369ac: 0xc0644e0  jal         func_191380
    ctx->pc = 0x1369ACu;
    SET_GPR_U32(ctx, 31, 0x1369B4u);
    ctx->pc = 0x1369B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369ACu;
    // 0x1369b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191380u, 0x1369ACu, 0x1369B4u)) {
        return;
    }
    ctx->pc = 0x1369B4u;
label_1369b4:
    // 0x1369b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1369B4u;
    {
        const bool branch_taken_0x1369b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1369B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369B4u;
        // 0x1369b8: 0xae201bb0  sw          $zero, 0x1BB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 7088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369b4) {
            ctx->pc = 0x1369E8u;
            goto label_1369e8;
        }
    }
    ctx->pc = 0x1369BCu;
label_1369bc:
    // 0x1369bc: 0x8e221bb8  lw          $v0, 0x1BB8($s1)
    ctx->pc = 0x1369bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7096)));
    // 0x1369c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1369C0u;
    {
        const bool branch_taken_0x1369c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1369C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369C0u;
        // 0x1369c4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369c0) {
            ctx->pc = 0x1369E8u;
            goto label_1369e8;
        }
    }
    ctx->pc = 0x1369C8u;
    // 0x1369c8: 0xc0644e4  jal         func_191390
    ctx->pc = 0x1369C8u;
    SET_GPR_U32(ctx, 31, 0x1369D0u);
    ctx->pc = 0x1369CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369C8u;
    // 0x1369cc: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191390u, 0x1369C8u, 0x1369D0u)) {
        return;
    }
    ctx->pc = 0x1369D0u;
label_1369d0:
    // 0x1369d0: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x1369d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x1369d4: 0x26251bc8  addiu       $a1, $s1, 0x1BC8
    ctx->pc = 0x1369d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 7112));
    // 0x1369d8: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x1369D8u;
    SET_GPR_U32(ctx, 31, 0x1369E0u);
    ctx->pc = 0x1369DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369D8u;
    // 0x1369dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x1369D8u, 0x1369E0u)) {
        return;
    }
    ctx->pc = 0x1369E0u;
label_1369e0:
    // 0x1369e0: 0xae201bb0  sw          $zero, 0x1BB0($s1)
    ctx->pc = 0x1369e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7088), GPR_U32(ctx, 0));
    // 0x1369e4: 0xae201bb8  sw          $zero, 0x1BB8($s1)
    ctx->pc = 0x1369e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7096), GPR_U32(ctx, 0));
label_1369e8:
    // 0x1369e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1369e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1369ec:
    // 0x1369ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1369ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1369f0:
    // 0x1369f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1369f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1369f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1369f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1369f8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1369f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1369fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1369FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369FCu;
        // 0x136a00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1369FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136A04u;
    // 0x136a04: 0x0  nop
    ctx->pc = 0x136a04u;
    // NOP
    ctx->pc = 0x136a08u;
}
