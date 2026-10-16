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

// Function: sub_0016D688
// Address: 0x16d688 - 0x16d838
void sub_0016D688_0x16d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D688_0x16d688");
#endif

    switch (ctx->pc) {
        case 0x16d6a8u: goto label_16d6a8;
        case 0x16d6f4u: goto label_16d6f4;
        case 0x16d730u: goto label_16d730;
        case 0x16d758u: goto label_16d758;
        case 0x16d7d0u: goto label_16d7d0;
        case 0x16d80cu: goto label_16d80c;
        case 0x16d818u: goto label_16d818;
        default: break;
    }

    ctx->pc = 0x16d688u;

    // 0x16d688: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16d68c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16d68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16d690: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16d690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16d694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16d698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16d69c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d6a0: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x16D6A0u;
    SET_GPR_U32(ctx, 31, 0x16D6A8u);
    ctx->pc = 0x16D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6A0u;
    // 0x16d6a4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x16D6A0u, 0x16D6A8u)) {
        return;
    }
    ctx->pc = 0x16D6A8u;
label_16d6a8:
    // 0x16d6a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d6ac: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x16d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16d6b0: 0x1482002c  bne         $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x16D6B0u;
    {
        const bool branch_taken_0x16d6b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6B0u;
        // 0x16d6b4: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6b0) {
            ctx->pc = 0x16D764u;
            goto label_16d764;
        }
    }
    ctx->pc = 0x16D6B8u;
    // 0x16d6b8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x16d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16d6bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16D6BCu;
    {
        const bool branch_taken_0x16d6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6BCu;
        // 0x16d6c0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6bc) {
            ctx->pc = 0x16D6FCu;
            goto label_16d6fc;
        }
    }
    ctx->pc = 0x16D6C4u;
    // 0x16d6c4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x16d6c8: 0x8c44bdc0  lw          $a0, -0x4240($v0)
    ctx->pc = 0x16d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950336)));
    // 0x16d6cc: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x16d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x16d6d0: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16D6D0u;
    {
        const bool branch_taken_0x16d6d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6D0u;
        // 0x16d6d4: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6d0) {
            ctx->pc = 0x16D730u;
            goto label_16d730;
        }
    }
    ctx->pc = 0x16D6D8u;
    // 0x16d6d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16d6dc: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D6DCu;
    {
        const bool branch_taken_0x16d6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6dc) {
            ctx->pc = 0x16D6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D6DCu;
            // 0x16d6e0: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D734u;
            goto label_16d734;
        }
    }
    ctx->pc = 0x16D6E4u;
    // 0x16d6e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16d6e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6ec: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16D6ECu;
    SET_GPR_U32(ctx, 31, 0x16D6F4u);
    ctx->pc = 0x16D6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6ECu;
    // 0x16d6f0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16D6ECu, 0x16D6F4u)) {
        return;
    }
    ctx->pc = 0x16D6F4u;
label_16d6f4:
    // 0x16d6f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16D6F4u;
    {
        const bool branch_taken_0x16d6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6F4u;
        // 0x16d6f8: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6f4) {
            ctx->pc = 0x16D734u;
            goto label_16d734;
        }
    }
    ctx->pc = 0x16D6FCu;
label_16d6fc:
    // 0x16d6fc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x16d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x16d700: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16d700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x16d704: 0x8c44bdb8  lw          $a0, -0x4248($v0)
    ctx->pc = 0x16d704u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CBDB8u));
    // 0x16d708: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x16d708u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x16d70c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D70Cu;
    {
        const bool branch_taken_0x16d70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D70Cu;
        // 0x16d710: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d70c) {
            ctx->pc = 0x16D730u;
            goto label_16d730;
        }
    }
    ctx->pc = 0x16D714u;
    // 0x16d714: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16d718: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D718u;
    {
        const bool branch_taken_0x16d718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d718) {
            ctx->pc = 0x16D71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D718u;
            // 0x16d71c: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D734u;
            goto label_16d734;
        }
    }
    ctx->pc = 0x16D720u;
    // 0x16d720: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16d720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16d724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d728: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16D728u;
    SET_GPR_U32(ctx, 31, 0x16D730u);
    ctx->pc = 0x16D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D728u;
    // 0x16d72c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16D728u, 0x16D730u)) {
        return;
    }
    ctx->pc = 0x16D730u;
label_16d730:
    // 0x16d730: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x16d730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d734:
    // 0x16d734: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x16d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x16d738: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x16D738u;
    {
        const bool branch_taken_0x16d738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D738u;
        // 0x16d73c: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d738) {
            ctx->pc = 0x16D81Cu;
            goto label_16d81c;
        }
    }
    ctx->pc = 0x16D740u;
    // 0x16d740: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16d740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16d744: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16d748: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x16d748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16d74c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d750: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16D750u;
    SET_GPR_U32(ctx, 31, 0x16D758u);
    ctx->pc = 0x16D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D750u;
    // 0x16d754: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16D750u, 0x16D758u)) {
        return;
    }
    ctx->pc = 0x16D758u;
label_16d758:
    // 0x16d758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d75c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x16D75Cu;
    {
        const bool branch_taken_0x16d75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D75Cu;
        // 0x16d760: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d75c) {
            ctx->pc = 0x16D81Cu;
            goto label_16d81c;
        }
    }
    ctx->pc = 0x16D764u;
label_16d764:
    // 0x16d764: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x16d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
    // 0x16d768: 0x1482002c  bne         $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x16D768u;
    {
        const bool branch_taken_0x16d768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D768u;
        // 0x16d76c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d768) {
            ctx->pc = 0x16D81Cu;
            goto label_16d81c;
        }
    }
    ctx->pc = 0x16D770u;
    // 0x16d770: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16d774: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x16d774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d778: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x16d778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d77c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16d77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16d780: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16d780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16d784: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x16d784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d788: 0x0  nop
    ctx->pc = 0x16d788u;
    // NOP
    // 0x16d78c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x16D78Cu;
    {
        const bool branch_taken_0x16d78c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D78Cu;
        // 0x16d790: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d78c) {
            ctx->pc = 0x16D81Cu;
            goto label_16d81c;
        }
    }
    ctx->pc = 0x16D794u;
    // 0x16d794: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x16d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16d798: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16D798u;
    {
        const bool branch_taken_0x16d798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D798u;
        // 0x16d79c: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d798) {
            ctx->pc = 0x16D7D8u;
            goto label_16d7d8;
        }
    }
    ctx->pc = 0x16D7A0u;
    // 0x16d7a0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x16d7a4: 0x8c44bdd0  lw          $a0, -0x4230($v0)
    ctx->pc = 0x16d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950352)));
    // 0x16d7a8: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x16d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x16d7ac: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16D7ACu;
    {
        const bool branch_taken_0x16d7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7ACu;
        // 0x16d7b0: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7ac) {
            ctx->pc = 0x16D80Cu;
            goto label_16d80c;
        }
    }
    ctx->pc = 0x16D7B4u;
    // 0x16d7b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16d7b8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D7B8u;
    {
        const bool branch_taken_0x16d7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d7b8) {
            ctx->pc = 0x16D7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D7B8u;
            // 0x16d7bc: 0x26458880  addiu       $a1, $s2, -0x7780 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936704));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D810u;
            goto label_16d810;
        }
    }
    ctx->pc = 0x16D7C0u;
    // 0x16d7c0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16d7c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7c8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16D7C8u;
    SET_GPR_U32(ctx, 31, 0x16D7D0u);
    ctx->pc = 0x16D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7C8u;
    // 0x16d7cc: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16D7C8u, 0x16D7D0u)) {
        return;
    }
    ctx->pc = 0x16D7D0u;
label_16d7d0:
    // 0x16d7d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16D7D0u;
    {
        const bool branch_taken_0x16d7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7D0u;
        // 0x16d7d4: 0x26458880  addiu       $a1, $s2, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7d0) {
            ctx->pc = 0x16D810u;
            goto label_16d810;
        }
    }
    ctx->pc = 0x16D7D8u;
label_16d7d8:
    // 0x16d7d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x16d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x16d7dc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x16d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x16d7e0: 0x8c44bdc8  lw          $a0, -0x4238($v0)
    ctx->pc = 0x16d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CBDC8u));
    // 0x16d7e4: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x16d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x16d7e8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D7E8u;
    {
        const bool branch_taken_0x16d7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7E8u;
        // 0x16d7ec: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7e8) {
            ctx->pc = 0x16D80Cu;
            goto label_16d80c;
        }
    }
    ctx->pc = 0x16D7F0u;
    // 0x16d7f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16d7f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D7F4u;
    {
        const bool branch_taken_0x16d7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d7f4) {
            ctx->pc = 0x16D7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D7F4u;
            // 0x16d7f8: 0x26458880  addiu       $a1, $s2, -0x7780 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936704));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D810u;
            goto label_16d810;
        }
    }
    ctx->pc = 0x16D7FCu;
    // 0x16d7fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16d800: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d804: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16D804u;
    SET_GPR_U32(ctx, 31, 0x16D80Cu);
    ctx->pc = 0x16D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D804u;
    // 0x16d808: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16D804u, 0x16D80Cu)) {
        return;
    }
    ctx->pc = 0x16D80Cu;
label_16d80c:
    // 0x16d80c: 0x26458880  addiu       $a1, $s2, -0x7780
    ctx->pc = 0x16d80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936704));
label_16d810:
    // 0x16d810: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16D810u;
    SET_GPR_U32(ctx, 31, 0x16D818u);
    ctx->pc = 0x16D814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D810u;
    // 0x16d814: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16D810u, 0x16D818u)) {
        return;
    }
    ctx->pc = 0x16D818u;
label_16d818:
    // 0x16d818: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x16d818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_16d81c:
    // 0x16d81c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16d81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d820: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16d820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d82c: 0x3e00008  jr          $ra
    ctx->pc = 0x16D82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D82Cu;
        // 0x16d830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D834u;
    // 0x16d834: 0x0  nop
    ctx->pc = 0x16d834u;
    // NOP
    ctx->pc = 0x16d838u;
}
