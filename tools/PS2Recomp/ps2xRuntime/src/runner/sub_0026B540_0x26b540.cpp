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

// Function: sub_0026B540
// Address: 0x26b540 - 0x26be20
void sub_0026B540_0x26b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B540_0x26b540");
#endif

    switch (ctx->pc) {
        case 0x26b5e8u: goto label_26b5e8;
        case 0x26b658u: goto label_26b658;
        case 0x26b768u: goto label_26b768;
        case 0x26b7e8u: goto label_26b7e8;
        case 0x26bdb8u: goto label_26bdb8;
        case 0x26be00u: goto label_26be00;
        default: break;
    }

    ctx->pc = 0x26b540u;

    // 0x26b540: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26b544: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x26b544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x26b548: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x26b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x26b54c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26b54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b550: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x26b550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x26b554: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x26b554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x26b558: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26b558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26b55c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26b560: 0x8c843888  lw          $a0, 0x3888($a0)
    ctx->pc = 0x26b560u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3888u));
    // 0x26b564: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x26b564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x26b568: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x26b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26b56c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26b570: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b574: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x26b574u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b578: 0x56600017  bnel        $s3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x26B578u;
    {
        const bool branch_taken_0x26b578 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b578) {
            ctx->pc = 0x26B57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B578u;
            // 0x26b57c: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B5D8u;
            goto label_26b5d8;
        }
    }
    ctx->pc = 0x26B580u;
    // 0x26b580: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x26b580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b584: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26b584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26b588: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b58c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26b590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b594: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x26b594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x26b598: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x26b598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x26b59c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x26b59cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26b5a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26b5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26b5a4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26b5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26b5a8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x26b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x26b5ac: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x26b5acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26b5b0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26b5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26b5b4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26b5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26b5b8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26b5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26b5bc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26b5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26b5c0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26b5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26b5c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26b5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26b5c8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26b5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26b5cc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x26b5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26b5d0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26b5d4: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x26b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_26b5d8:
    // 0x26b5d8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B5D8u;
    {
        const bool branch_taken_0x26b5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b5d8) {
            ctx->pc = 0x26B5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B5D8u;
            // 0x26b5dc: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B5F0u;
            goto label_26b5f0;
        }
    }
    ctx->pc = 0x26B5E0u;
    // 0x26b5e0: 0xc091a88  jal         func_246A20
    ctx->pc = 0x26B5E0u;
    SET_GPR_U32(ctx, 31, 0x26B5E8u);
    ctx->pc = 0x26B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B5E0u;
    // 0x26b5e4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x26B5E0u, 0x26B5E8u)) {
        return;
    }
    ctx->pc = 0x26B5E8u;
label_26b5e8:
    // 0x26b5e8: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x26b5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x26b5ec: 0x0  nop
    ctx->pc = 0x26b5ecu;
    // NOP
label_26b5f0:
    // 0x26b5f0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26B5F0u;
    {
        const bool branch_taken_0x26b5f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5F0u;
        // 0x26b5f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5f0) {
            ctx->pc = 0x26B5FCu;
            goto label_26b5fc;
        }
    }
    ctx->pc = 0x26B5F8u;
    // 0x26b5f8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x26b5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26b5fc:
    // 0x26b5fc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x26B5FCu;
    {
        const bool branch_taken_0x26b5fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5FCu;
        // 0x26b600: 0xaf8090c4  sw          $zero, -0x6F3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5fc) {
            ctx->pc = 0x26B628u;
            goto label_26b628;
        }
    }
    ctx->pc = 0x26B604u;
    // 0x26b604: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x26b604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x26b608: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x26b608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x26b60c: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x26b60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x26b610: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26b610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26b614: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x26b614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26b618: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26b618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26b61c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26b61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26b620: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b624: 0xac224134  sw          $v0, 0x4134($at)
    ctx->pc = 0x26b624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4134u, _value); } while (0);
label_26b628:
    // 0x26b628: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b62c: 0x8c424138  lw          $v0, 0x4138($v0)
    ctx->pc = 0x26b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4138u));
    // 0x26b630: 0x12020041  beq         $s0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x26B630u;
    {
        const bool branch_taken_0x26b630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B630u;
        // 0x26b634: 0x8f8290c4  lw          $v0, -0x6F3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b630) {
            ctx->pc = 0x26B738u;
            goto label_26b738;
        }
    }
    ctx->pc = 0x26B638u;
    // 0x26b638: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B638u;
    {
        const bool branch_taken_0x26b638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B638u;
        // 0x26b63c: 0xdf8284a0  ld          $v0, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b638) {
            ctx->pc = 0x26B660u;
            goto label_26b660;
        }
    }
    ctx->pc = 0x26B640u;
    // 0x26b640: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x26b640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26b644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b64c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26b64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26b650: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x26B650u;
    SET_GPR_U32(ctx, 31, 0x26B658u);
    ctx->pc = 0x26B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B650u;
    // 0x26b654: 0xff8284a0  sd          $v0, -0x7B60($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x26B650u, 0x26B658u)) {
        return;
    }
    ctx->pc = 0x26B658u;
label_26b658:
    // 0x26b658: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26B658u;
    {
        const bool branch_taken_0x26b658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B658u;
        // 0x26b65c: 0xaf9090c8  sw          $s0, -0x6F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938824), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b658) {
            ctx->pc = 0x26B678u;
            goto label_26b678;
        }
    }
    ctx->pc = 0x26B660u;
label_26b660:
    // 0x26b660: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x26b660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x26b664: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26b664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26b668: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b66c: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x26b66cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x26b670: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b674: 0xac304138  sw          $s0, 0x4138($at)
    ctx->pc = 0x26b674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
label_26b678:
    // 0x26b678: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x26B678u;
    {
        const bool branch_taken_0x26b678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B678u;
        // 0x26b67c: 0xdf828488  ld          $v0, -0x7B78($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b678) {
            ctx->pc = 0x26B730u;
            goto label_26b730;
        }
    }
    ctx->pc = 0x26B680u;
    // 0x26b680: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x26b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x26b684: 0x92240050  lbu         $a0, 0x50($s1)
    ctx->pc = 0x26b684u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x26b688: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26b688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26b68c: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x26b68cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x26b690: 0x5024000e  beql        $at, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x26B690u;
    {
        const bool branch_taken_0x26b690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26b690) {
            ctx->pc = 0x26B694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B690u;
            // 0x26b694: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B6CCu;
            goto label_26b6cc;
        }
    }
    ctx->pc = 0x26B698u;
    // 0x26b698: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x26b698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x26b69c: 0x5024000b  beql        $at, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x26B69Cu;
    {
        const bool branch_taken_0x26b69c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26b69c) {
            ctx->pc = 0x26B6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B69Cu;
            // 0x26b6a0: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B6CCu;
            goto label_26b6cc;
        }
    }
    ctx->pc = 0x26B6A4u;
    // 0x26b6a4: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x26b6a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x26b6a8: 0x50240008  beql        $at, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B6A8u;
    {
        const bool branch_taken_0x26b6a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26b6a8) {
            ctx->pc = 0x26B6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B6A8u;
            // 0x26b6ac: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B6CCu;
            goto label_26b6cc;
        }
    }
    ctx->pc = 0x26B6B0u;
    // 0x26b6b0: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x26b6b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x26b6b4: 0x50240005  beql        $at, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B6B4u;
    {
        const bool branch_taken_0x26b6b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26b6b4) {
            ctx->pc = 0x26B6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B6B4u;
            // 0x26b6b8: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B6CCu;
            goto label_26b6cc;
        }
    }
    ctx->pc = 0x26B6BCu;
    // 0x26b6bc: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x26b6bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x26b6c0: 0x50240002  beql        $at, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26B6C0u;
    {
        const bool branch_taken_0x26b6c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 4));
        if (branch_taken_0x26b6c0) {
            ctx->pc = 0x26B6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B6C0u;
            // 0x26b6c4: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B6CCu;
            goto label_26b6cc;
        }
    }
    ctx->pc = 0x26B6C8u;
    // 0x26b6c8: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x26b6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_26b6cc:
    // 0x26b6cc: 0x0  nop
    ctx->pc = 0x26b6ccu;
    // NOP
    // 0x26b6d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b6d4: 0xfc2234f8  sd          $v0, 0x34F8($at)
    ctx->pc = 0x26b6d4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F8u, _value); } while (0);
    // 0x26b6d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b6dc: 0xfc2034f0  sd          $zero, 0x34F0($at)
    ctx->pc = 0x26b6dcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x26b6e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b6e4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x26b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x26b6e8: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x26b6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x26b6ec: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x26b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26b6f0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B6F0u;
    {
        const bool branch_taken_0x26b6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26b6f0) {
            ctx->pc = 0x26B6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B6F0u;
            // 0x26b6f4: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B708u;
            goto label_26b708;
        }
    }
    ctx->pc = 0x26B6F8u;
    // 0x26b6f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b6fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b700: 0xfc2234f0  sd          $v0, 0x34F0($at)
    ctx->pc = 0x26b700u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x26b704: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x26b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_26b708:
    // 0x26b708: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x26b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x26b70c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x26b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x26b710: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B710u;
    {
        const bool branch_taken_0x26b710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B710u;
        // 0x26b714: 0x8f8290c4  lw          $v0, -0x6F3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b710) {
            ctx->pc = 0x26B738u;
            goto label_26b738;
        }
    }
    ctx->pc = 0x26B718u;
    // 0x26b718: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b71c: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x26b71cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x26b720: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26b720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b724: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26b724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26b728: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b72c: 0xfc2234f0  sd          $v0, 0x34F0($at)
    ctx->pc = 0x26b72cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
label_26b730:
    // 0x26b730: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b734: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x26b734u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
label_26b738:
    // 0x26b738: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B738u;
    {
        const bool branch_taken_0x26b738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B738u;
        // 0x26b73c: 0xdf828460  ld          $v0, -0x7BA0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b738) {
            ctx->pc = 0x26B74Cu;
            goto label_26b74c;
        }
    }
    ctx->pc = 0x26B740u;
    // 0x26b740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26b740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b744: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26B744u;
    {
        const bool branch_taken_0x26b744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B744u;
        // 0x26b748: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b744) {
            ctx->pc = 0x26B754u;
            goto label_26b754;
        }
    }
    ctx->pc = 0x26B74Cu;
label_26b74c:
    // 0x26b74c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x26b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x26b750: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26b754:
    // 0x26b754: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b758: 0xfc2234d0  sd          $v0, 0x34D0($at)
    ctx->pc = 0x26b758u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B34D0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34D0u, _value); } while (0);
    // 0x26b75c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26b75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b760: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x26B760u;
    SET_GPR_U32(ctx, 31, 0x26B768u);
    ctx->pc = 0x26B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B760u;
    // 0x26b764: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x26B760u, 0x26B768u)) {
        return;
    }
    ctx->pc = 0x26B768u;
label_26b768:
    // 0x26b768: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26b768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26b76c: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x26b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26b770: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x26b770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x26b774: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x26b774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x26b778: 0x3402d806  ori         $v0, $zero, 0xD806
    ctx->pc = 0x26b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x26b77c: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x26b77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x26b780: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x26b780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61184);
    // 0x26b784: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x26b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x26b788: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x26b788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x26b78c: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x26b78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26b790: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26b790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x26b794: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x26b794u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26b798: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26b798u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26b79c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26b7a0: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x26b7a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26b7a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26b7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7a8: 0x72041389  pcpyld      $v0, $s0, $a0
    ctx->pc = 0x26b7a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x26b7ac: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26b7b0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26b7b4: 0xde640010  ld          $a0, 0x10($s3)
    ctx->pc = 0x26b7b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x26b7b8: 0x72041389  pcpyld      $v0, $s0, $a0
    ctx->pc = 0x26b7b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x26b7bc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26b7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26b7c0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26b7c4: 0xde640030  ld          $a0, 0x30($s3)
    ctx->pc = 0x26b7c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x26b7c8: 0x72041389  pcpyld      $v0, $s0, $a0
    ctx->pc = 0x26b7c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x26b7cc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26b7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26b7d0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26b7d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b7d8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26b7d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b7dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26b7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7e0: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x26B7E0u;
    SET_GPR_U32(ctx, 31, 0x26B7E8u);
    ctx->pc = 0x26B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7E0u;
    // 0x26b7e4: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x26B7E0u, 0x26B7E8u)) {
        return;
    }
    ctx->pc = 0x26B7E8u;
label_26b7e8:
    // 0x26b7e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26b7ec: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x26b7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x26b7f0: 0x72031b89  pcpyld      $v1, $s0, $v1
    ctx->pc = 0x26b7f0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x26b7f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b7f8: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x26b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26b7fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x26b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x26b800: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x26b800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26b804: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b808: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b80c: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x26b80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x26b810: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x26b810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x26b814: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x26b814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x26b818: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x26b818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x26b81c: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x26b81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x26b820: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x26b820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x26b824: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x26b824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x26b828: 0x70902389  pcpyld      $a0, $a0, $s0
    ctx->pc = 0x26b828u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 16)));
    // 0x26b82c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x26b82cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x26b830: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x26b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26b834: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b838: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26b838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b83c: 0x92430047  lbu         $v1, 0x47($s2)
    ctx->pc = 0x26b83cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x26b840: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b844: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x26b844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
    // 0x26b848: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x26b848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x26b84c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x26b84cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x26b850: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26b854: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B854u;
    {
        const bool branch_taken_0x26b854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B854u;
        // 0x26b858: 0xaf8390cc  sw          $v1, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b854) {
            ctx->pc = 0x26B870u;
            goto label_26b870;
        }
    }
    ctx->pc = 0x26B85Cu;
    // 0x26b85c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b860: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26b860u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26b864: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x26b864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26b868: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26B868u;
    {
        const bool branch_taken_0x26b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B868u;
        // 0x26b86c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b868) {
            ctx->pc = 0x26B880u;
            goto label_26b880;
        }
    }
    ctx->pc = 0x26B870u;
label_26b870:
    // 0x26b870: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b874: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26b874u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26b878: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x26b878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x26b87c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26b87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26b880:
    // 0x26b880: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b884: 0xfc223510  sd          $v0, 0x3510($at)
    ctx->pc = 0x26b884u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3510u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B3510u, _value); } while (0);
    // 0x26b888: 0x92460029  lbu         $a2, 0x29($s2)
    ctx->pc = 0x26b888u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
    // 0x26b88c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26b890: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b894: 0x8c423510  lw          $v0, 0x3510($v0)
    ctx->pc = 0x26b894u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3510u));
    // 0x26b898: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x26b898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x26b89c: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x26b89cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x26b8a0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x26b8a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x26b8a4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x26b8a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x26b8a8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x26b8a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x26b8ac: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x26b8acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x26b8b0: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x26b8b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x26b8b4: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x26b8b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x26b8b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26b8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26b8bc: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x26b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x26b8c0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x26b8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x26b8c4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x26b8c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x26b8c8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x26b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x26b8cc: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x26b8ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26b8d0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x26b8d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x26b8d4: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x26b8d4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x26b8d8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x26b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x26b8dc: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x26b8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x26b8e0: 0x8cc6412c  lw          $a2, 0x412C($a2)
    ctx->pc = 0x26b8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26b8e4: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x26b8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x26b8e8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x26b8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x26b8ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b8f0: 0xac26412c  sw          $a2, 0x412C($at)
    ctx->pc = 0x26b8f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b8f4: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x26b8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x26b8f8: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x26b8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x26b8fc: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x26b8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x26b900: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x26b900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x26b904: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x26b904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x26b908: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x26b908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26b90c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26b90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x26b910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26b910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b914: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x26b914u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x26b918: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x26b918u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x26b91c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x26b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x26b920: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b924: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26b924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b928: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26b928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26b92c: 0xdc423510  ld          $v0, 0x3510($v0)
    ctx->pc = 0x26b92cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B3510u));
    // 0x26b930: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x26b930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x26b934: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x26b934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x26b938: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26b938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26b93c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26b93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26b940: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B940u;
    {
        const bool branch_taken_0x26b940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B940u;
        // 0x26b944: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b940) {
            ctx->pc = 0x26B958u;
            goto label_26b958;
        }
    }
    ctx->pc = 0x26B948u;
    // 0x26b948: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x26b948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x26b94c: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x26b94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x26b950: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26b950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26b954: 0x0  nop
    ctx->pc = 0x26b954u;
    // NOP
label_26b958:
    // 0x26b958: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x26b958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x26b95c: 0x92440046  lbu         $a0, 0x46($s2)
    ctx->pc = 0x26b95cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x26b960: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x26b960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26b964: 0x0  nop
    ctx->pc = 0x26b964u;
    // NOP
    // 0x26b968: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x26b968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x26b96c: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x26b96cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x26b970: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x26b970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26b974: 0x0  nop
    ctx->pc = 0x26b974u;
    // NOP
    // 0x26b978: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x26b978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x26b97c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x26b97cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26b980: 0x0  nop
    ctx->pc = 0x26b980u;
    // NOP
    // 0x26b984: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26b984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x26b988: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x26b988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x26b98c: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x26b98cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x26b990: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b994: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x26b994u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b998: 0x0  nop
    ctx->pc = 0x26b998u;
    // NOP
    // 0x26b99c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26b99cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26b9a0: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x26b9a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26b9a4: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x26b9a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x26b9a8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x26b9a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26b9ac: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x26b9acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26b9b0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x26b9b0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x26b9b4: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x26b9b4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x26b9b8: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x26b9b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x26b9bc: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x26b9bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x26b9c0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x26b9c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26b9c4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x26b9c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26b9c8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x26b9c8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26b9cc: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x26b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x26b9d0: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x26b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x26b9d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26b9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26b9d8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26b9d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26b9dc: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x26b9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x26b9e0: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x26b9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x26b9e4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x26b9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x26b9e8: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x26b9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x26b9ec: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x26b9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x26b9f0: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x26b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26b9f4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x26b9f8: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x26b9f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x26b9fc: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x26b9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x26ba00: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x26ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x26ba04: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ba04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ba08: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26ba08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26ba0c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x26ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x26ba10: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x26ba10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x26ba14: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x26ba14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x26ba18: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26ba18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26ba1c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x26ba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ba20: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x26ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ba24: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ba28: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x26ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ba2c: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x26ba2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26ba30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26ba30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26ba34: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x26ba34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26ba38: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x26ba38u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x26ba3c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x26ba3cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x26ba40: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x26ba40u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x26ba44: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x26ba44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x26ba48: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x26ba48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26ba4c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x26ba4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26ba50: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x26ba50u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x26ba54: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x26ba54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x26ba58: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x26ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x26ba5c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ba5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ba60: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26ba60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26ba64: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x26ba64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x26ba68: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x26ba68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x26ba6c: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x26ba6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x26ba70: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x26ba70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x26ba74: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x26ba74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x26ba78: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x26ba78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x26ba7c: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x26ba7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x26ba80: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x26ba80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x26ba84: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x26ba84u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x26ba88: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x26ba88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x26ba8c: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x26ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x26ba90: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x26ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x26ba94: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26ba94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26ba98: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26ba98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26ba9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26baa0: 0x8c633560  lw          $v1, 0x3560($v1)
    ctx->pc = 0x26baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3560u));
    // 0x26baa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BAA4u;
    {
        const bool branch_taken_0x26baa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAA4u;
        // 0x26baa8: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26baa4) {
            ctx->pc = 0x26BAB8u;
            goto label_26bab8;
        }
    }
    ctx->pc = 0x26BAACu;
    // 0x26baac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x26BAACu;
    {
        const bool branch_taken_0x26baac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26baac) {
            ctx->pc = 0x26BAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BAACu;
            // 0x26bab0: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BAD8u;
            goto label_26bad8;
        }
    }
    ctx->pc = 0x26BAB4u;
    // 0x26bab4: 0x0  nop
    ctx->pc = 0x26bab4u;
    // NOP
label_26bab8:
    // 0x26bab8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26babc: 0x8c423564  lw          $v0, 0x3564($v0)
    ctx->pc = 0x26babcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3564u));
    // 0x26bac0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26BAC0u;
    {
        const bool branch_taken_0x26bac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAC0u;
        // 0x26bac4: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bac0) {
            ctx->pc = 0x26BB08u;
            goto label_26bb08;
        }
    }
    ctx->pc = 0x26BAC8u;
    // 0x26bac8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x26BAC8u;
    {
        const bool branch_taken_0x26bac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bac8) {
            ctx->pc = 0x26BACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BAC8u;
            // 0x26bacc: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BB10u;
            goto label_26bb10;
        }
    }
    ctx->pc = 0x26BAD0u;
    // 0x26bad0: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x26bad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x26bad4: 0x0  nop
    ctx->pc = 0x26bad4u;
    // NOP
label_26bad8:
    // 0x26bad8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26badc: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26badcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26bae0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26bae4: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x26bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x26bae8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26bae8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x26baec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26baecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26baf0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26baf4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26baf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26baf8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26baf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bafc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26bb00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26BB00u;
    {
        const bool branch_taken_0x26bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB00u;
        // 0x26bb04: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb00) {
            ctx->pc = 0x26BB38u;
            goto label_26bb38;
        }
    }
    ctx->pc = 0x26BB08u;
label_26bb08:
    // 0x26bb08: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26bb0c: 0x0  nop
    ctx->pc = 0x26bb0cu;
    // NOP
label_26bb10:
    // 0x26bb10: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26bb14: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26bb18: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x26bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x26bb1c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26bb1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26bb20: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26bb20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26bb24: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26bb28: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bb2c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26bb2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bb30: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x26bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26bb34: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x26bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_26bb38:
    // 0x26bb38: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x26bb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26bb3c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x26bb3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26bb40: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26bb40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26bb44: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bb48: 0xac25412c  sw          $a1, 0x412C($at)
    ctx->pc = 0x26bb48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bb4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26bb50: 0x8c634140  lw          $v1, 0x4140($v1)
    ctx->pc = 0x26bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4140u));
    // 0x26bb54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26bb58: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BB58u;
    {
        const bool branch_taken_0x26bb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB58u;
        // 0x26bb5c: 0xaf8084e8  sw          $zero, -0x7B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb58) {
            ctx->pc = 0x26BB6Cu;
            goto label_26bb6c;
        }
    }
    ctx->pc = 0x26BB60u;
    // 0x26bb60: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x26bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26bb64: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bb68: 0xac223558  sw          $v0, 0x3558($at)
    ctx->pc = 0x26bb68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3558u, _value); } while (0);
label_26bb6c:
    // 0x26bb6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26bb70: 0x9c42355c  lwu         $v0, 0x355C($v0)
    ctx->pc = 0x26bb70u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x26bb74: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x26bb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x26bb78: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26bb7c: 0x9c843558  lwu         $a0, 0x3558($a0)
    ctx->pc = 0x26bb7cu;
    SET_GPR_ZE32(ctx, 4, FAST_READ32(0x6B3558u));
    // 0x26bb80: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26bb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26bb84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26bb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26bb88: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x26bb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26bb8c: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x26bb8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x26bb90: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x26bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x26bb94: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x26bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26bb98: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x26bb98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x26bb9c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x26bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26bba0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bba4: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x26bba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bba8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x26bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x26bbac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26BBACu;
    {
        const bool branch_taken_0x26bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBACu;
        // 0x26bbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbac) {
            ctx->pc = 0x26BC50u;
            goto label_26bc50;
        }
    }
    ctx->pc = 0x26BBB4u;
    // 0x26bbb4: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x26bbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x26bbb8: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x26bbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x26bbbc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x26bbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x26bbc0: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x26bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x26bbc4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26bbc4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26bbc8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26bbcc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x26bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26bbd0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bbd4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26bbd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bbd8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26bbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26bbdc: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x26bbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x26bbe0: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x26bbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x26bbe4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x26bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26bbe8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26bbe8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26bbec: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x26bbecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x26bbf0: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x26bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x26bbf4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bbf8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26bbf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bbfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26bc00: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26bc00u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26bc04: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x26bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x26bc08: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26bc08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26bc0c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x26bc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x26bc10: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x26bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x26bc14: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bc18: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26bc18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bc1c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26bc20: 0xdc4234f8  ld          $v0, 0x34F8($v0)
    ctx->pc = 0x26bc20u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F8u));
    // 0x26bc24: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x26bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26bc28: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26bc28u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26bc2c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x26bc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x26bc30: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x26bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26bc34: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bc38: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26bc38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bc3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26bc40: 0xdc4234f0  ld          $v0, 0x34F0($v0)
    ctx->pc = 0x26bc40u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x26bc44: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26BC44u;
    {
        const bool branch_taken_0x26bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC44u;
        // 0x26bc48: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc44) {
            ctx->pc = 0x26BCD0u;
            goto label_26bcd0;
        }
    }
    ctx->pc = 0x26BC4Cu;
    // 0x26bc4c: 0x0  nop
    ctx->pc = 0x26bc4cu;
    // NOP
label_26bc50:
    // 0x26bc50: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x26bc50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26bc54: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x26bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x26bc58: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x26bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26bc5c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bc60: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26bc60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bc64: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x26bc64u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26bc68: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x26bc68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x26bc6c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x26bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x26bc70: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bc74: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26bc74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bc78: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x26bc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x26bc7c: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x26bc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x26bc80: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x26bc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x26bc84: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x26bc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x26bc88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26bc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bc8c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26bc8cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26bc90: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x26bc90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x26bc94: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x26bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x26bc98: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bc9c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26bc9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bca0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26bca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26bca4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x26bca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x26bca8: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x26bca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x26bcac: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x26bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26bcb0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26bcb0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26bcb4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x26bcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x26bcb8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x26bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x26bcbc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bcc0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26bcc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bcc4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26bcc8: 0xdc4234d0  ld          $v0, 0x34D0($v0)
    ctx->pc = 0x26bcc8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x26bccc: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x26bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_26bcd0:
    // 0x26bcd0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x26bcd0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x26bcd4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x26bcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x26bcd8: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x26bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x26bcdc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bce0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x26bce0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bce4: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x26bce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x26bce8: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x26bce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x26bcec: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x26bcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x26bcf0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26bcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26bcf4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x26bcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x26bcf8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x26bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x26bcfc: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x26bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x26bd00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26bd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26bd04: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x26bd04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x26bd08: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x26bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26bd0c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x26bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x26bd10: 0x8ca53554  lw          $a1, 0x3554($a1)
    ctx->pc = 0x26bd10u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3554u));
    // 0x26bd14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26bd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26bd18: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x26bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x26bd1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26bd20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26bd24: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x26bd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26bd28: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x26BD28u;
    {
        const bool branch_taken_0x26bd28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x26BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD28u;
        // 0x26bd2c: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd28) {
            ctx->pc = 0x26BD60u;
            goto label_26bd60;
        }
    }
    ctx->pc = 0x26BD30u;
    // 0x26bd30: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x26bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x26bd34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26bd34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26bd38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26bd38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd3c: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x26bd3cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26bd40: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26bd44: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x26bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26bd48: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26bd4c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26bd50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bd54: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26bd54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bd58: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bd5c: 0xac263554  sw          $a2, 0x3554($at)
    ctx->pc = 0x26bd5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6B3554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3554u, _value); } while (0);
label_26bd60:
    // 0x26bd60: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x26bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x26bd64: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x26bd64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x26bd68: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x26bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26bd6c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x26bd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x26bd70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26bd74: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x26bd74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x26bd78: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26bd7c: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x26bd7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x26bd80: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x26bd80u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x26bd84: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x26bd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x26bd88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26bd8c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26bd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26bd90: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26bd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26bd94: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x26bd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x26bd98: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x26bd98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x26bd9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26bda0: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x26bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x26bda4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x26bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x26bda8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x26bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x26bdac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26bdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26bdb0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x26bdb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x26bdb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_26bdb8:
    // 0x26bdb8: 0x42000039  di
    ctx->pc = 0x26bdb8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x26bdbc: 0x40f  sync.p
    ctx->pc = 0x26bdbcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x26bdc0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x26bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x26bdc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26bdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26bdc8: 0x0  nop
    ctx->pc = 0x26bdc8u;
    // NOP
    // 0x26bdcc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26BDCCu;
    {
        const bool branch_taken_0x26bdcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bdcc) {
            ctx->pc = 0x26BDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26bdb8;
        }
    }
    ctx->pc = 0x26BDD4u;
    // 0x26bdd4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x26bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26bdd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26bddc: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x26bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x26bde0: 0x42000038  ei
    ctx->pc = 0x26bde0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x26bde4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x26bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x26bde8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bdec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26bdf0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BDF0u;
    {
        const bool branch_taken_0x26bdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDF0u;
        // 0x26bdf4: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bdf0) {
            ctx->pc = 0x26BE00u;
            goto label_26be00;
        }
    }
    ctx->pc = 0x26BDF8u;
    // 0x26bdf8: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x26BDF8u;
    SET_GPR_U32(ctx, 31, 0x26BE00u);
    ctx->pc = 0x26BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BDF8u;
    // 0x26bdfc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x26BDF8u, 0x26BE00u)) {
        return;
    }
    ctx->pc = 0x26BE00u;
label_26be00:
    // 0x26be00: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x26be00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26be04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26be04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26be08: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x26be08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26be0c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x26be0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26be10: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x26be10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26be14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26be14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26be18: 0x3e00008  jr          $ra
    ctx->pc = 0x26BE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE18u;
        // 0x26be1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BE20u;
}
