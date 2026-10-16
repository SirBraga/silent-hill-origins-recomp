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

// Function: sub_001E86D8
// Address: 0x1e86d8 - 0x1e89c8
void sub_001E86D8_0x1e86d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E86D8_0x1e86d8");
#endif

    switch (ctx->pc) {
        case 0x1e8784u: goto label_1e8784;
        case 0x1e87c4u: goto label_1e87c4;
        case 0x1e87e0u: goto label_1e87e0;
        case 0x1e8894u: goto label_1e8894;
        case 0x1e88acu: goto label_1e88ac;
        case 0x1e88bcu: goto label_1e88bc;
        default: break;
    }

    ctx->pc = 0x1e86d8u;

    // 0x1e86d8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1e86d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1e86dc: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1e86dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1e86e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e86e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e86e4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1e86e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1e86e8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1e86e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1e86ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e86ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e86f0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1e86f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1e86f4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1e86f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e86f8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1e86f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1e86fc: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1e86fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1e8700: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1e8700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1e8704: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1e8704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1e8708: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e8708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e870c: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1e870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1e8710: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e8710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e8714: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1e8714u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1e8718: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1e8718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1e871c: 0xc680012c  lwc1        $f0, 0x12C($s4)
    ctx->pc = 0x1e871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8720: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1e8720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1e8724: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e8728: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1e8728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e872c: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x1e872cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x1e8730: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1e8730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e8734: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1e8734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e8738: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e873c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e873cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e8740: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e8740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e8744: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e8744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e8748: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8748u;
    {
        const bool branch_taken_0x1e8748 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1E874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8748u;
        // 0x1e874c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8748) {
            ctx->pc = 0x1E8764u;
            goto label_1e8764;
        }
    }
    ctx->pc = 0x1E8750u;
    // 0x1e8750: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e8750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e8754: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e8754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e8758: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1e8758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1e875c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E875Cu;
    {
        const bool branch_taken_0x1e875c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e875c) {
            ctx->pc = 0x1E8760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E875Cu;
            // 0x1e8760: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8770u;
            goto label_1e8770;
        }
    }
    ctx->pc = 0x1E8764u;
label_1e8764:
    // 0x1e8764: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e8764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e8768: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1e8768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e876c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1e876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1e8770:
    // 0x1e8770: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e8770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e8774: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e8774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e877c: 0xc07b016  jal         func_1EC058
    ctx->pc = 0x1E877Cu;
    SET_GPR_U32(ctx, 31, 0x1E8784u);
    ctx->pc = 0x1E8780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E877Cu;
    // 0x1e8780: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC058u, 0x1E877Cu, 0x1E8784u)) {
        return;
    }
    ctx->pc = 0x1E8784u;
label_1e8784:
    // 0x1e8784: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e8784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8788: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1e8788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e878c: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x1e878cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1e8790: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1e8790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e8794: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1e8794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1e8798: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e8798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e879c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e879cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e87a0: 0x8c710018  lw          $s1, 0x18($v1)
    ctx->pc = 0x1e87a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1e87a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e87a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e87a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e87ac: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1e87acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1e87b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E87B0u;
    {
        const bool branch_taken_0x1e87b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87B0u;
        // 0x1e87b4: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e87b0) {
            ctx->pc = 0x1E87C4u;
            goto label_1e87c4;
        }
    }
    ctx->pc = 0x1E87B8u;
    // 0x1e87b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e87b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e87bc: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x1E87BCu;
    SET_GPR_U32(ctx, 31, 0x1E87C4u);
    ctx->pc = 0x1E87C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E87BCu;
    // 0x1e87c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x1E87BCu, 0x1E87C4u)) {
        return;
    }
    ctx->pc = 0x1E87C4u;
label_1e87c4:
    // 0x1e87c4: 0x1a000071  blez        $s0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1E87C4u;
    {
        const bool branch_taken_0x1e87c4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x1E87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87C4u;
        // 0x1e87c8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e87c4) {
            ctx->pc = 0x1E898Cu;
            goto label_1e898c;
        }
    }
    ctx->pc = 0x1E87CCu;
    // 0x1e87cc: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1e87ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e87d0: 0x2453a230  addiu       $s3, $v0, -0x5DD0
    ctx->pc = 0x1e87d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
    // 0x1e87d4: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x1e87d4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
    // 0x1e87d8: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x1e87d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    // 0x1e87dc: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x1e87dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_1e87e0:
    // 0x1e87e0: 0x8fc4a630  lw          $a0, -0x59D0($fp)
    ctx->pc = 0x1e87e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294944304)));
    // 0x1e87e4: 0x8ee6a634  lw          $a2, -0x59CC($s7)
    ctx->pc = 0x1e87e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944308)));
    // 0x1e87e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e87ec: 0x8ea5a638  lw          $a1, -0x59C8($s5)
    ctx->pc = 0x1e87ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944312)));
    // 0x1e87f0: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x1e87f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x1e87f4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1e87f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1e87f8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1e87f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1e87fc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1e87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e8800: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1e8800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e8804: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e8808: 0x24a5001b  addiu       $a1, $a1, 0x1B
    ctx->pc = 0x1e8808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27));
    // 0x1e880c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1e880cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e8810: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e8810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8814: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1e8814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e8818: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e8818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e881c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e881cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e8820: 0xafc4a630  sw          $a0, -0x59D0($fp)
    ctx->pc = 0x1e8820u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294944304), GPR_U32(ctx, 4));
    // 0x1e8824: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e8824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e8828: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e882c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8830: 0xaee6a634  sw          $a2, -0x59CC($s7)
    ctx->pc = 0x1e8830u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294944308), GPR_U32(ctx, 6));
    // 0x1e8834: 0xaea5a638  sw          $a1, -0x59C8($s5)
    ctx->pc = 0x1e8834u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294944312), GPR_U32(ctx, 5));
    // 0x1e8838: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x1e8838u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e883c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1e883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8840: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x1e8840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8844: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e8844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e8848: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x1e8848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e884c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1e884cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1e8850: 0xc644001c  lwc1        $f4, 0x1C($s2)
    ctx->pc = 0x1e8850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e8854: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e8854u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e8858: 0x46022540  add.s       $f21, $f4, $f2
    ctx->pc = 0x1e8858u;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1e885c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1e885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8860: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x1e8860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8864: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e8864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e8868: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1e8868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e886c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1e886cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e8870: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e8870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e8874: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1e8874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e8878: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x1e8878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e887c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1e887cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1e8880: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1e8880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e8884: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1e8884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1e8888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e888c: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x1E888Cu;
    SET_GPR_U32(ctx, 31, 0x1E8894u);
    ctx->pc = 0x1E8890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E888Cu;
    // 0x1e8890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x1E888Cu, 0x1E8894u)) {
        return;
    }
    ctx->pc = 0x1E8894u;
label_1e8894:
    // 0x1e8894: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e8894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e8898: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8898u;
    {
        const bool branch_taken_0x1e8898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8898u;
        // 0x1e889c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8898) {
            ctx->pc = 0x1E88C0u;
            goto label_1e88c0;
        }
    }
    ctx->pc = 0x1E88A0u;
    // 0x1e88a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e88a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88a4: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1E88A4u;
    SET_GPR_U32(ctx, 31, 0x1E88ACu);
    ctx->pc = 0x1E88A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88A4u;
    // 0x1e88a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1E88A4u, 0x1E88ACu)) {
        return;
    }
    ctx->pc = 0x1E88ACu;
label_1e88ac:
    // 0x1e88ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e88acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e88b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88b4: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x1E88B4u;
    SET_GPR_U32(ctx, 31, 0x1E88BCu);
    ctx->pc = 0x1E88B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E88B4u;
    // 0x1e88b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x1E88B4u, 0x1E88BCu)) {
        return;
    }
    ctx->pc = 0x1E88BCu;
label_1e88bc:
    // 0x1e88bc: 0x0  nop
    ctx->pc = 0x1e88bcu;
    // NOP
label_1e88c0:
    // 0x1e88c0: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1e88c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e88c4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1e88c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1e88c8: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1e88c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e88cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e88ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e88d0: 0xc6830130  lwc1        $f3, 0x130($s4)
    ctx->pc = 0x1e88d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e88d4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1e88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1e88d8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1e88d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1e88dc: 0x34218a72  ori         $at, $at, 0x8A72
    ctx->pc = 0x1e88dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35442);
    // 0x1e88e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e88e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e88e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e88e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e88e8: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1e88e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1e88ec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e88ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e88f0: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x1e88f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1e88f4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1e88f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e88f8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1e88f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e88fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1e88fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1e8900: 0xe622002c  swc1        $f2, 0x2C($s1)
    ctx->pc = 0x1e8900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1e8904: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1e8904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1e8908: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8908u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e890c: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x1e890cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1e8910: 0x8fc4a630  lw          $a0, -0x59D0($fp)
    ctx->pc = 0x1e8910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294944304)));
    // 0x1e8914: 0x8ee6a634  lw          $a2, -0x59CC($s7)
    ctx->pc = 0x1e8914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944308)));
    // 0x1e8918: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e8918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e891c: 0x8ea5a638  lw          $a1, -0x59C8($s5)
    ctx->pc = 0x1e891cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944312)));
    // 0x1e8920: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x1e8920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x1e8924: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1e8924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1e8928: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1e8928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1e892c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1e892cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e8930: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1e8930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e8934: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e8934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e8938: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1e8938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e893c: 0x24a5001b  addiu       $a1, $a1, 0x1B
    ctx->pc = 0x1e893cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27));
    // 0x1e8940: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1e8940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8944: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1e8944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e8948: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e8948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e894c: 0xafc4a630  sw          $a0, -0x59D0($fp)
    ctx->pc = 0x1e894cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294944304), GPR_U32(ctx, 4));
    // 0x1e8950: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e8950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e8954: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e8954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e8958: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e8958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1e895c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8960: 0xaee6a634  sw          $a2, -0x59CC($s7)
    ctx->pc = 0x1e8960u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294944308), GPR_U32(ctx, 6));
    // 0x1e8964: 0xaea5a638  sw          $a1, -0x59C8($s5)
    ctx->pc = 0x1e8964u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294944312), GPR_U32(ctx, 5));
    // 0x1e8968: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e8968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e896c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8970: 0xc4620048  lwc1        $f2, 0x48($v1)
    ctx->pc = 0x1e8970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8974: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1e8974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8978: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e8978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e897c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e897cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e8980: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1e8980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1e8984: 0x16c0ff96  bnez        $s6, . + 4 + (-0x6A << 2)
    ctx->pc = 0x1E8984u;
    {
        const bool branch_taken_0x1e8984 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8984u;
        // 0x1e8988: 0x8e31003c  lw          $s1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8984) {
            ctx->pc = 0x1E87E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e87e0;
        }
    }
    ctx->pc = 0x1E898Cu;
label_1e898c:
    // 0x1e898c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1e898cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e8990: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1e8990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e8994: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1e8994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e8998: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1e8998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e899c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1e899cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e89a0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1e89a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e89a4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1e89a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e89a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e89a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e89ac: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1e89acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e89b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e89b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e89b4: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1e89b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e89b8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1e89b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e89bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E89BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89BCu;
        // 0x1e89c0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E89BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E89C4u;
    // 0x1e89c4: 0x0  nop
    ctx->pc = 0x1e89c4u;
    // NOP
    ctx->pc = 0x1e89c8u;
}
