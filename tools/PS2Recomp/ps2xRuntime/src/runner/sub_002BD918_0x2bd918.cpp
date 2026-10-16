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

// Function: sub_002BD918
// Address: 0x2bd918 - 0x2bdd88
void sub_002BD918_0x2bd918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD918_0x2bd918");
#endif

    switch (ctx->pc) {
        case 0x2bd9a0u: goto label_2bd9a0;
        case 0x2bd9c0u: goto label_2bd9c0;
        case 0x2bda04u: goto label_2bda04;
        case 0x2bdafcu: goto label_2bdafc;
        default: break;
    }

    ctx->pc = 0x2bd918u;

    // 0x2bd918: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2bd918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2bd91c: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x2bd91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x2bd920: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x2bd920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x2bd924: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bd924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd928: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x2bd928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x2bd92c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2bd92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x2bd930: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bd930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bd934: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2bd934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2bd938: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD938u;
    {
        const bool branch_taken_0x2bd938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd938) {
            ctx->pc = 0x2BD94Cu;
            goto label_2bd94c;
        }
    }
    ctx->pc = 0x2BD940u;
    // 0x2bd940: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2bd940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2bd944: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x2BD944u;
    {
        const bool branch_taken_0x2bd944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD944u;
        // 0x2bd948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd944) {
            ctx->pc = 0x2BDD6Cu;
            goto label_2bdd6c;
        }
    }
    ctx->pc = 0x2BD94Cu;
label_2bd94c:
    // 0x2bd94c: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2BD94Cu;
    {
        const bool branch_taken_0x2bd94c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd94c) {
            ctx->pc = 0x2BD950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD94Cu;
            // 0x2bd950: 0x8e45004c  lw          $a1, 0x4C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD984u;
            goto label_2bd984;
        }
    }
    ctx->pc = 0x2BD954u;
    // 0x2bd954: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2bd954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bd958: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2bd958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2bd95c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2bd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2bd960: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2bd960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2bd964: 0x30620038  andi        $v0, $v1, 0x38
    ctx->pc = 0x2bd964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)56);
    // 0x2bd968: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2bd968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bd96c: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x2bd96cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bd970: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x2bd970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x2bd974: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2bd974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2bd978: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2bd978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2bd97c: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x2BD97Cu;
    {
        const bool branch_taken_0x2bd97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD97Cu;
        // 0x2bd980: 0xc3100a  movz        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd97c) {
            ctx->pc = 0x2BDD6Cu;
            goto label_2bdd6c;
        }
    }
    ctx->pc = 0x2BD984u;
label_2bd984:
    // 0x2bd984: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x2bd984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd988: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x2bd988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2bd98c: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2bd98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd990: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2bd990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2bd994: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x2bd994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2bd998: 0xc0ae84e  jal         func_2BA138
    ctx->pc = 0x2BD998u;
    SET_GPR_U32(ctx, 31, 0x2BD9A0u);
    ctx->pc = 0x2BD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD998u;
    // 0x2bd99c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA138u, 0x2BD998u, 0x2BD9A0u)) {
        return;
    }
    ctx->pc = 0x2BD9A0u;
label_2bd9a0:
    // 0x2bd9a0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x2bd9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bd9a4: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x2bd9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bd9a8: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x2bd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x2bd9ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bd9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9b0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bd9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bd9b4: 0x27a70174  addiu       $a3, $sp, 0x174
    ctx->pc = 0x2bd9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x2bd9b8: 0xc0ae84e  jal         func_2BA138
    ctx->pc = 0x2BD9B8u;
    SET_GPR_U32(ctx, 31, 0x2BD9C0u);
    ctx->pc = 0x2BD9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD9B8u;
    // 0x2bd9bc: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA138u, 0x2BD9B8u, 0x2BD9C0u)) {
        return;
    }
    ctx->pc = 0x2BD9C0u;
label_2bd9c0:
    // 0x2bd9c0: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2bd9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd9c4: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x2bd9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd9c8: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2bd9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd9cc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2bd9ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2bd9d0: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x2bd9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bd9d4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2bd9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd9d8: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2bd9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd9dc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2bd9dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2bd9e0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2bd9e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bd9e4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bd9e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bd9e8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2bd9e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bd9ec: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bd9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bd9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bd9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd9f8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2bd9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bd9fc: 0xc0ae948  jal         func_2BA520
    ctx->pc = 0x2BD9FCu;
    SET_GPR_U32(ctx, 31, 0x2BDA04u);
    ctx->pc = 0x2BDA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD9FCu;
    // 0x2bda00: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BA520u, 0x2BD9FCu, 0x2BDA04u)) {
        return;
    }
    ctx->pc = 0x2BDA04u;
label_2bda04:
    // 0x2bda04: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x2bda04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bda08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bda08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bda0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bda0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bda10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bda10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bda14: 0xc7a50134  lwc1        $f5, 0x134($sp)
    ctx->pc = 0x2bda14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bda18: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x2bda18u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bda1c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x2bda1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bda20: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x2bda20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2bda24: 0xc7a3013c  lwc1        $f3, 0x13C($sp)
    ctx->pc = 0x2bda24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bda28: 0x460001c2  mul.s       $f7, $f0, $f0
    ctx->pc = 0x2bda28u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bda2c: 0xe7a60140  swc1        $f6, 0x140($sp)
    ctx->pc = 0x2bda2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2bda30: 0x46001ac2  mul.s       $f11, $f3, $f0
    ctx->pc = 0x2bda30u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bda34: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2bda34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2bda38: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2bda38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2bda3c: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x2bda3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x2bda40: 0x46011a82  mul.s       $f10, $f3, $f1
    ctx->pc = 0x2bda40u;
    ctx->f[10] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bda44: 0xe7a70148  swc1        $f7, 0x148($sp)
    ctx->pc = 0x2bda44u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2bda48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bda48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bda4c: 0xe7ab0168  swc1        $f11, 0x168($sp)
    ctx->pc = 0x2bda4cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2bda50: 0x46023200  add.s       $f8, $f6, $f2
    ctx->pc = 0x2bda50u;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2bda54: 0xe7a40150  swc1        $f4, 0x150($sp)
    ctx->pc = 0x2bda54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2bda58: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2bda58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2bda5c: 0xe7aa0160  swc1        $f10, 0x160($sp)
    ctx->pc = 0x2bda5cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2bda60: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2bda60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2bda64: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x2bda64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x2bda68: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x2bda68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x2bda6c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2bda6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x2bda70: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x2bda70u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x2bda74: 0xe7a30164  swc1        $f3, 0x164($sp)
    ctx->pc = 0x2bda74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2bda78: 0x46030240  add.s       $f9, $f0, $f3
    ctx->pc = 0x2bda78u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2bda7c: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x2bda7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2bda80: 0x460b0941  sub.s       $f5, $f1, $f11
    ctx->pc = 0x2bda80u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x2bda84: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x2bda84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x2bda88: 0x460a21c1  sub.s       $f7, $f4, $f10
    ctx->pc = 0x2bda88u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x2bda8c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x2bda8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x2bda90: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bda90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2bda94: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x2bda94u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x2bda98: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x2bda98u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x2bda9c: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x2bda9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x2bdaa0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2bdaa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2bdaa4: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x2bdaa4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x2bdaa8: 0x46086201  sub.s       $f8, $f12, $f8
    ctx->pc = 0x2bdaa8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x2bdaac: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x2bdaacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2bdab0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2bdab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2bdab4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bdab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bdab8: 0xe7a800c8  swc1        $f8, 0xC8($sp)
    ctx->pc = 0x2bdab8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2bdabc: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x2bdabcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x2bdac0: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x2bdac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2bdac4: 0x46066301  sub.s       $f12, $f12, $f6
    ctx->pc = 0x2bdac4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x2bdac8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2bdac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2bdacc: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2bdaccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x2bdad0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2bdad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2bdad4: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x2bdad4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x2bdad8: 0xe7a500b0  swc1        $f5, 0xB0($sp)
    ctx->pc = 0x2bdad8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2bdadc: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x2bdadcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x2bdae0: 0xe7ac00b4  swc1        $f12, 0xB4($sp)
    ctx->pc = 0x2bdae0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2bdae4: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x2bdae4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2bdae8: 0xe7a900c0  swc1        $f9, 0xC0($sp)
    ctx->pc = 0x2bdae8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2bdaec: 0xe7a700c4  swc1        $f7, 0xC4($sp)
    ctx->pc = 0x2bdaecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2bdaf0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bdaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bdaf4: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2BDAF4u;
    SET_GPR_U32(ctx, 31, 0x2BDAFCu);
    ctx->pc = 0x2BDAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDAF4u;
    // 0x2bdaf8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2BDAF4u, 0x2BDAFCu)) {
        return;
    }
    ctx->pc = 0x2BDAFCu;
label_2bdafc:
    // 0x2bdafc: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2bdafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2bdb00: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2bdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2bdb04: 0x30420038  andi        $v0, $v0, 0x38
    ctx->pc = 0x2bdb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
    // 0x2bdb08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BDB08u;
    {
        const bool branch_taken_0x2bdb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB08u;
        // 0x2bdb0c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb08) {
            ctx->pc = 0x2BDB30u;
            goto label_2bdb30;
        }
    }
    ctx->pc = 0x2BDB10u;
    // 0x2bdb10: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x2bdb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bdb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdb18: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2bdb18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bdb1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bdb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdb20: 0x0  nop
    ctx->pc = 0x2bdb20u;
    // NOP
    // 0x2bdb24: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2BDB24u;
    {
        const bool branch_taken_0x2bdb24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB24u;
        // 0x2bdb28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb24) {
            ctx->pc = 0x2BDB5Cu;
            goto label_2bdb5c;
        }
    }
    ctx->pc = 0x2BDB2Cu;
    // 0x2bdb2c: 0x0  nop
    ctx->pc = 0x2bdb2cu;
    // NOP
label_2bdb30:
    // 0x2bdb30: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2bdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2bdb34: 0x30420038  andi        $v0, $v0, 0x38
    ctx->pc = 0x2bdb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
    // 0x2bdb38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BDB38u;
    {
        const bool branch_taken_0x2bdb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB38u;
        // 0x2bdb3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb38) {
            ctx->pc = 0x2BDB5Cu;
            goto label_2bdb5c;
        }
    }
    ctx->pc = 0x2BDB40u;
    // 0x2bdb40: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x2bdb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2bdb44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdb48: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2bdb48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bdb4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bdb4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdb50: 0x0  nop
    ctx->pc = 0x2bdb50u;
    // NOP
    // 0x2bdb54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BDB54u;
    {
        const bool branch_taken_0x2bdb54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdb54) {
            ctx->pc = 0x2BDB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDB54u;
            // 0x2bdb58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDB5Cu;
            goto label_2bdb5c;
        }
    }
    ctx->pc = 0x2BDB5Cu;
label_2bdb5c:
    // 0x2bdb5c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2bdb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2bdb60: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x2bdb60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdb64: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDB64u;
    {
        const bool branch_taken_0x2bdb64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB64u;
        // 0x2bdb68: 0x5302b  sltu        $a2, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb64) {
            ctx->pc = 0x2BDB7Cu;
            goto label_2bdb7c;
        }
    }
    ctx->pc = 0x2BDB6Cu;
    // 0x2bdb6c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2bdb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2bdb70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdb74: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2BDB74u;
    {
        const bool branch_taken_0x2bdb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb74) {
            ctx->pc = 0x2BDB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDB74u;
            // 0x2bdb78: 0x8c620040  lw          $v0, 0x40($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDC24u;
            goto label_2bdc24;
        }
    }
    ctx->pc = 0x2BDB7Cu;
label_2bdb7c:
    // 0x2bdb7c: 0xc461005c  lwc1        $f1, 0x5C($v1)
    ctx->pc = 0x2bdb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdb80: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x2bdb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb84: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x2bdb84u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bdb88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdb8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bdb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bdb90: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bdb90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bdb94: 0x46051181  sub.s       $f6, $f2, $f5
    ctx->pc = 0x2bdb94u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2bdb98: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BDB98u;
    {
        const bool branch_taken_0x2bdb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB98u;
        // 0x2bdb9c: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb98) {
            ctx->pc = 0x2BDBD4u;
            goto label_2bdbd4;
        }
    }
    ctx->pc = 0x2BDBA0u;
    // 0x2bdba0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bdba0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bdba4: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x2bdba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdba8: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x2bdba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdbac: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2bdbacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bdbb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdbb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdbb4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bdbb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bdbb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdbb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdbbc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bdbbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bdbc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bdbc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bdbc4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2bdbc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdbc8: 0x0  nop
    ctx->pc = 0x2bdbc8u;
    // NOP
    // 0x2bdbcc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2BDBCCu;
    {
        const bool branch_taken_0x2bdbcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBCCu;
        // 0x2bdbd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbcc) {
            ctx->pc = 0x2BDC18u;
            goto label_2bdc18;
        }
    }
    ctx->pc = 0x2BDBD4u;
label_2bdbd4:
    // 0x2bdbd4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2bdbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2bdbd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bdbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bdbdc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BDBDCu;
    {
        const bool branch_taken_0x2bdbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBDCu;
        // 0x2bdbe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbdc) {
            ctx->pc = 0x2BDC18u;
            goto label_2bdc18;
        }
    }
    ctx->pc = 0x2BDBE4u;
    // 0x2bdbe4: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x2bdbe4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
    // 0x2bdbe8: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x2bdbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bdbec: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x2bdbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdbf0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2bdbf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2bdbf4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdbf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdbf8: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x2bdbf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2bdbfc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bdbfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bdc00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bdc00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bdc04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2bdc04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bdc08: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2bdc08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdc0c: 0x0  nop
    ctx->pc = 0x2bdc0cu;
    // NOP
    // 0x2bdc10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BDC10u;
    {
        const bool branch_taken_0x2bdc10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdc10) {
            ctx->pc = 0x2BDC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDC10u;
            // 0x2bdc14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDC18u;
            goto label_2bdc18;
        }
    }
    ctx->pc = 0x2BDC18u;
label_2bdc18:
    // 0x2bdc18: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2bdc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2bdc1c: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x2bdc1cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    // 0x2bdc20: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2bdc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2bdc24:
    // 0x2bdc24: 0x30440006  andi        $a0, $v0, 0x6
    ctx->pc = 0x2bdc24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2bdc28: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDC28u;
    {
        const bool branch_taken_0x2bdc28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC28u;
        // 0x2bdc2c: 0xc7a2013c  lwc1        $f2, 0x13C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc28) {
            ctx->pc = 0x2BDC40u;
            goto label_2bdc40;
        }
    }
    ctx->pc = 0x2BDC30u;
    // 0x2bdc30: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2bdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2bdc34: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2bdc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2bdc38: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2BDC38u;
    {
        const bool branch_taken_0x2bdc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC38u;
        // 0x2bdc3c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc38) {
            ctx->pc = 0x2BDD6Cu;
            goto label_2bdd6c;
        }
    }
    ctx->pc = 0x2BDC40u;
label_2bdc40:
    // 0x2bdc40: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x2bdc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdc44: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2bdc44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2bdc48: 0xc7808200  lwc1        $f0, -0x7E00($gp)
    ctx->pc = 0x2bdc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdc4c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2bdc4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bdc50: 0xc4650060  lwc1        $f5, 0x60($v1)
    ctx->pc = 0x2bdc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bdc54: 0xc4660064  lwc1        $f6, 0x64($v1)
    ctx->pc = 0x2bdc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bdc58: 0xc463004c  lwc1        $f3, 0x4C($v1)
    ctx->pc = 0x2bdc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdc5c: 0x46002969  min.s       $f5, $f5, $f0
    ctx->pc = 0x2bdc5cu;
    ctx->f[5] = std::min(ctx->f[5], ctx->f[0]);
    // 0x2bdc60: 0xc4640050  lwc1        $f4, 0x50($v1)
    ctx->pc = 0x2bdc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bdc64: 0x460031a9  min.s       $f6, $f6, $f0
    ctx->pc = 0x2bdc64u;
    ctx->f[6] = std::min(ctx->f[6], ctx->f[0]);
    // 0x2bdc68: 0x460018e9  min.s       $f3, $f3, $f0
    ctx->pc = 0x2bdc68u;
    ctx->f[3] = std::min(ctx->f[3], ctx->f[0]);
    // 0x2bdc6c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2bdc6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2bdc70: 0x46002129  min.s       $f4, $f4, $f0
    ctx->pc = 0x2bdc70u;
    ctx->f[4] = std::min(ctx->f[4], ctx->f[0]);
    // 0x2bdc74: 0x46020084  c1          0x20084
    ctx->pc = 0x2bdc74u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[2]);
    // 0x2bdc78: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x2bdc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdc7c: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x2bdc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdc80: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2bdc80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2bdc84: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2bdc84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bdc88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bdc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bdc8c: 0x46000004  c1          0x4
    ctx->pc = 0x2bdc8cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bdc90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdc94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bdc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bdc98: 0x460212c0  add.s       $f11, $f2, $f2
    ctx->pc = 0x2bdc98u;
    ctx->f[11] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2bdc9c: 0xc7aa00b0  lwc1        $f10, 0xB0($sp)
    ctx->pc = 0x2bdc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2bdca0: 0x460c1840  add.s       $f1, $f3, $f12
    ctx->pc = 0x2bdca0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x2bdca4: 0xc7a900c0  lwc1        $f9, 0xC0($sp)
    ctx->pc = 0x2bdca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2bdca8: 0x460c29c0  add.s       $f7, $f5, $f12
    ctx->pc = 0x2bdca8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
    // 0x2bdcac: 0x460c3000  add.s       $f0, $f6, $f12
    ctx->pc = 0x2bdcacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[12]);
    // 0x2bdcb0: 0x460c2200  add.s       $f8, $f4, $f12
    ctx->pc = 0x2bdcb0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x2bdcb4: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x2bdcb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2bdcb8: 0x460360c1  sub.s       $f3, $f12, $f3
    ctx->pc = 0x2bdcb8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x2bdcbc: 0x460751c2  mul.s       $f7, $f10, $f7
    ctx->pc = 0x2bdcbcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x2bdcc0: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x2bdcc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2bdcc4: 0x46056141  sub.s       $f5, $f12, $f5
    ctx->pc = 0x2bdcc4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x2bdcc8: 0x46066181  sub.s       $f6, $f12, $f6
    ctx->pc = 0x2bdcc8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x2bdccc: 0x46084a02  mul.s       $f8, $f9, $f8
    ctx->pc = 0x2bdcccu;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x2bdcd0: 0x46046101  sub.s       $f4, $f12, $f4
    ctx->pc = 0x2bdcd0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[4]);
    // 0x2bdcd4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2bdcd4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x2bdcd8: 0x460539c3  div.s       $f7, $f7, $f5
    ctx->pc = 0x2bdcd8u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[7], ctx->f[5]);
    // 0x2bdcdc: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x2bdcdcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[6]);
    // 0x2bdce0: 0x46044203  div.s       $f8, $f8, $f4
    ctx->pc = 0x2bdce0u;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[8], ctx->f[4]);
    // 0x2bdce4: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x2bdce4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x2bdce8: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x2bdce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x2bdcec: 0x46075282  mul.s       $f10, $f10, $f7
    ctx->pc = 0x2bdcecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x2bdcf0: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x2bdcf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x2bdcf4: 0x46025ac2  mul.s       $f11, $f11, $f2
    ctx->pc = 0x2bdcf4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x2bdcf8: 0x46084a42  mul.s       $f9, $f9, $f8
    ctx->pc = 0x2bdcf8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x2bdcfc: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x2bdcfcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x2bdd00: 0x460b5ac2  mul.s       $f11, $f11, $f11
    ctx->pc = 0x2bdd00u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x2bdd04: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BDD04u;
    {
        const bool branch_taken_0x2bdd04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD04u;
        // 0x2bdd08: 0x46090800  add.s       $f0, $f1, $f9 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd04) {
            ctx->pc = 0x2BDD2Cu;
            goto label_2bdd2c;
        }
    }
    ctx->pc = 0x2BDD0Cu;
    // 0x2bdd0c: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x2bdd0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdd10: 0x0  nop
    ctx->pc = 0x2bdd10u;
    // NOP
    // 0x2bdd14: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDD14u;
    {
        const bool branch_taken_0x2bdd14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bdd14) {
            ctx->pc = 0x2BDD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDD14u;
            // 0x2bdd18: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDD30u;
            goto label_2bdd30;
        }
    }
    ctx->pc = 0x2BDD1Cu;
    // 0x2bdd1c: 0x46006003  div.s       $f0, $f12, $f0
    ctx->pc = 0x2bdd1cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x2bdd20: 0x46000004  c1          0x4
    ctx->pc = 0x2bdd20u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bdd24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BDD24u;
    {
        const bool branch_taken_0x2bdd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD24u;
        // 0x2bdd28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd24) {
            ctx->pc = 0x2BDD60u;
            goto label_2bdd60;
        }
    }
    ctx->pc = 0x2BDD2Cu;
label_2bdd2c:
    // 0x2bdd2c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2bdd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2bdd30:
    // 0x2bdd30: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2bdd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2bdd34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BDD34u;
    {
        const bool branch_taken_0x2bdd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD34u;
        // 0x2bdd38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd34) {
            ctx->pc = 0x2BDD60u;
            goto label_2bdd60;
        }
    }
    ctx->pc = 0x2BDD3Cu;
    // 0x2bdd3c: 0x460a5834  c.lt.s      $f11, $f10
    ctx->pc = 0x2bdd3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bdd40: 0x0  nop
    ctx->pc = 0x2bdd40u;
    // NOP
    // 0x2bdd44: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDD44u;
    {
        const bool branch_taken_0x2bdd44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BDD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD44u;
        // 0x2bdd48: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd44) {
            ctx->pc = 0x2BDD64u;
            goto label_2bdd64;
        }
    }
    ctx->pc = 0x2BDD4Cu;
    // 0x2bdd4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdd50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdd54: 0x460a0003  div.s       $f0, $f0, $f10
    ctx->pc = 0x2bdd54u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[10]);
    // 0x2bdd58: 0x46000004  c1          0x4
    ctx->pc = 0x2bdd58u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bdd5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bdd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bdd60:
    // 0x2bdd60: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2bdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2bdd64:
    // 0x2bdd64: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x2bdd64u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    // 0x2bdd68: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2bdd68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bdd6c:
    // 0x2bdd6c: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x2bdd6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2bdd70: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x2bdd70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bdd74: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x2bdd74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2bdd78: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2bdd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bdd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD7Cu;
        // 0x2bdd80: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDD84u;
    // 0x2bdd84: 0x0  nop
    ctx->pc = 0x2bdd84u;
    // NOP
    ctx->pc = 0x2bdd88u;
}
