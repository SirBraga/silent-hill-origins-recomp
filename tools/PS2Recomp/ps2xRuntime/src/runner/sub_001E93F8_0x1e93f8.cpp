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

// Function: sub_001E93F8
// Address: 0x1e93f8 - 0x1e9768
void sub_001E93F8_0x1e93f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E93F8_0x1e93f8");
#endif

    switch (ctx->pc) {
        case 0x1e94c4u: goto label_1e94c4;
        case 0x1e9508u: goto label_1e9508;
        case 0x1e95b4u: goto label_1e95b4;
        case 0x1e95e4u: goto label_1e95e4;
        case 0x1e960cu: goto label_1e960c;
        default: break;
    }

    ctx->pc = 0x1e93f8u;

    // 0x1e93f8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1e93f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1e93fc: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x1e93fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x1e9400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9404: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1e9404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1e9408: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1e9408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1e940c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e940cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9410: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1e9410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1e9414: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1e9414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1e9418: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1e9418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1e941c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1e9420: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e9420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e9424: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1e9424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1e9428: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1e9428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x1e942c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e9430: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x1e9430u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1e9434: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x1e9434u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1e9438: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x1e9438u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e943c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1e943cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e9440: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1e9440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e9444: 0xc4e0012c  lwc1        $f0, 0x12C($a3)
    ctx->pc = 0x1e9444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9448: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e9448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e944c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e944cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e9450: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1e9450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1e9454: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e9454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e9458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e945c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e945cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e9460: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1e9460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e9464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9468: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9468u;
    {
        const bool branch_taken_0x1e9468 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1E946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9468u;
        // 0x1e946c: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9468) {
            ctx->pc = 0x1E9484u;
            goto label_1e9484;
        }
    }
    ctx->pc = 0x1E9470u;
    // 0x1e9470: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1e9470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1e9474: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e9474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e9478: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1e9478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e947c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E947Cu;
    {
        const bool branch_taken_0x1e947c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e947c) {
            ctx->pc = 0x1E9480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E947Cu;
            // 0x1e9480: 0x8ec20018  lw          $v0, 0x18($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9490u;
            goto label_1e9490;
        }
    }
    ctx->pc = 0x1E9484u;
label_1e9484:
    // 0x1e9484: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1e9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1e9488: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1e9488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e948c: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x1e948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_1e9490:
    // 0x1e9490: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e9490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e9494: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e9494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e9498: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e9498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e949c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1e949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e94a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e94a4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1e94a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1e94a8: 0x34218a72  ori         $at, $at, 0x8A72
    ctx->pc = 0x1e94a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35442);
    // 0x1e94ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e94acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e94b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e94b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e94b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e94b8: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x1e94b8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e94bc: 0xc07b016  jal         func_1EC058
    ctx->pc = 0x1E94BCu;
    SET_GPR_U32(ctx, 31, 0x1E94C4u);
    ctx->pc = 0x1E94C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E94BCu;
    // 0x1e94c0: 0x4601b582  mul.s       $f22, $f22, $f1 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC058u, 0x1E94BCu, 0x1E94C4u)) {
        return;
    }
    ctx->pc = 0x1E94C4u;
label_1e94c4:
    // 0x1e94c4: 0x50400099  beql        $v0, $zero, . + 4 + (0x99 << 2)
    ctx->pc = 0x1E94C4u;
    {
        const bool branch_taken_0x1e94c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e94c4) {
            ctx->pc = 0x1E94C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E94C4u;
            // 0x1e94c8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E972Cu;
            goto label_1e972c;
        }
    }
    ctx->pc = 0x1E94CCu;
    // 0x1e94cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e94ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e94d0: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x1e94d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e94d4: 0x18800094  blez        $a0, . + 4 + (0x94 << 2)
    ctx->pc = 0x1E94D4u;
    {
        const bool branch_taken_0x1e94d4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1E94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94D4u;
        // 0x1e94d8: 0x8ed50030  lw          $s5, 0x30($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e94d4) {
            ctx->pc = 0x1E9728u;
            goto label_1e9728;
        }
    }
    ctx->pc = 0x1E94DCu;
    // 0x1e94dc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e94e0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e94e4: 0x3c014222  lui         $at, 0x4222
    ctx->pc = 0x1e94e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16930 << 16));
    // 0x1e94e8: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x1e94e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
    // 0x1e94ec: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1e94ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1e94f0: 0x2452a230  addiu       $s2, $v0, -0x5DD0
    ctx->pc = 0x1e94f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
    // 0x1e94f4: 0x24749e30  addiu       $s4, $v1, -0x61D0
    ctx->pc = 0x1e94f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942256));
    // 0x1e94f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e94f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e94fc: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x1e94fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
    // 0x1e9500: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x1e9500u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    // 0x1e9504: 0x0  nop
    ctx->pc = 0x1e9504u;
    // NOP
label_1e9508:
    // 0x1e9508: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e9508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e950c: 0x8ee4a638  lw          $a0, -0x59C8($s7)
    ctx->pc = 0x1e950cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944312)));
    // 0x1e9510: 0x8c62a630  lw          $v0, -0x59D0($v1)
    ctx->pc = 0x1e9510u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33A630u));
    // 0x1e9514: 0x8fc3a634  lw          $v1, -0x59CC($fp)
    ctx->pc = 0x1e9514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294944308)));
    // 0x1e9518: 0x2484001b  addiu       $a0, $a0, 0x1B
    ctx->pc = 0x1e9518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27));
    // 0x1e951c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9520: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1e9520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1e9524: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1e9524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1e9528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e952c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e952cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e9530: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x1e9530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9534: 0x24690009  addiu       $t1, $v1, 0x9
    ctx->pc = 0x1e9534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1e9538: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1e9538u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1e953c: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x1e953cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1e9540: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1e9540u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e9544: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x1e9544u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1e9548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e954c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e954cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9550: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e9550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e9554: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e9554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e9558: 0x2487001b  addiu       $a3, $a0, 0x1B
    ctx->pc = 0x1e9558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 27));
    // 0x1e955c: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x1e955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1e9560: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x1e9560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1e9564: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e9564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9568: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1e9568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1e956c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1e956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9570: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e9570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e9574: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1e9574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e9578: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1e9578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1e957c: 0xc4b50000  lwc1        $f21, 0x0($a1)
    ctx->pc = 0x1e957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e9580: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1e9580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e9584: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1e9584u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e9588: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e9588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e958c: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1e958cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x1e9590: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1e9590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9594: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1e9594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9598: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1e9598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1e959c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1e959cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e95a0: 0xaca8a630  sw          $t0, -0x59D0($a1)
    ctx->pc = 0x1e95a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x33A630u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33A630u, _value); } while (0);
    // 0x1e95a4: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1e95a4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x1e95a8: 0xaee7a638  sw          $a3, -0x59C8($s7)
    ctx->pc = 0x1e95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294944312), GPR_U32(ctx, 7));
    // 0x1e95ac: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E95ACu;
    SET_GPR_U32(ctx, 31, 0x1E95B4u);
    ctx->pc = 0x1E95B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E95ACu;
    // 0x1e95b0: 0xafc9a634  sw          $t1, -0x59CC($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294944308), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E95ACu, 0x1E95B4u)) {
        return;
    }
    ctx->pc = 0x1E95B4u;
label_1e95b4:
    // 0x1e95b4: 0x55001b  divu        $zero, $v0, $s5
    ctx->pc = 0x1e95b4u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e95b8: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E95B8u;
    {
        const bool branch_taken_0x1e95b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e95b8) {
            ctx->pc = 0x1E95BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E95B8u;
            // 0x1e95bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E95C0u;
            goto label_1e95c0;
        }
    }
    ctx->pc = 0x1E95C0u;
label_1e95c0:
    // 0x1e95c0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1e95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e95c4: 0x8ed00034  lw          $s0, 0x34($s6)
    ctx->pc = 0x1e95c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x1e95c8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1e95c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e95cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e95ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e95d0: 0x1810  mfhi        $v1
    ctx->pc = 0x1e95d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e95d4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1e95d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e95d8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1e95d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1e95dc: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1E95DCu;
    SET_GPR_U32(ctx, 31, 0x1E95E4u);
    ctx->pc = 0x1E95E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E95DCu;
    // 0x1e95e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1E95DCu, 0x1E95E4u)) {
        return;
    }
    ctx->pc = 0x1E95E4u;
label_1e95e4:
    // 0x1e95e4: 0x6a020013  ldl         $v0, 0x13($s0)
    ctx->pc = 0x1e95e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1e95e8: 0x6e02000c  ldr         $v0, 0xC($s0)
    ctx->pc = 0x1e95e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1e95ec: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e95f0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1e95f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e95f4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1e95f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e95f8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1e95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1e95fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e95fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9600: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1e9600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e9604: 0xc079f2e  jal         func_1E7CB8
    ctx->pc = 0x1E9604u;
    SET_GPR_U32(ctx, 31, 0x1E960Cu);
    ctx->pc = 0x1E9608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9604u;
    // 0x1e9608: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7CB8u, 0x1E9604u, 0x1E960Cu)) {
        return;
    }
    ctx->pc = 0x1E960Cu;
label_1e960c:
    // 0x1e960c: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x1e960cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x1e9610: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x1e9610u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x1e9614: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x1e9614u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x1e9618: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9618u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e961c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e961cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e9620: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x1e9620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1e9624: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e9628: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e9628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e962c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e962cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9630: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9634: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e9634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1e9638: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1e9638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1e963c: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x1e963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e9640: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e9640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9644: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e9644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e9648: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1e9648u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e964c: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x1e964cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e9650: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e9650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e9654: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1e9654u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e9658: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x1e9658u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e965c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e9660: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1e9660u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e9664: 0xe6240018  swc1        $f4, 0x18($s1)
    ctx->pc = 0x1e9664u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1e9668: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1e9668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1e966c: 0x34210e56  ori         $at, $at, 0xE56
    ctx->pc = 0x1e966cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3670);
    // 0x1e9670: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9674: 0x0  nop
    ctx->pc = 0x1e9674u;
    // NOP
    // 0x1e9678: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1e9678u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1e967c: 0x4600ad45  abs.s       $f21, $f21
    ctx->pc = 0x1e967cu;
    ctx->f[21] = FPU_ABS_S(ctx->f[21]);
    // 0x1e9680: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x1e9680u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x1e9684: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e9684u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e9688: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e9688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e968c: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x1e968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1e9690: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e9690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e9694: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e9694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e9698: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e969c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e969cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e96a0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1e96a4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1e96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1e96a8: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x1e96a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e96ac: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e96acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e96b0: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x1e96b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1e96b4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1e96b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1e96b8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e96b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e96bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e96bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e96c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e96c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e96c4: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x1e96c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e96c8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1e96c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e96cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e96ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e96d0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e96d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e96d4: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x1e96d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e96d8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1e96d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e96dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e96dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e96e0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1e96e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e96e4: 0xe6240018  swc1        $f4, 0x18($s1)
    ctx->pc = 0x1e96e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1e96e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e96e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e96ec: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e96ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e96f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e96f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e96f4: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x1e96f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1e96f8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1e96f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e96fc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e96fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e9700: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1e9700u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1e9704: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x1e9704u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1e9708: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1e9708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e970c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1e970cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1e9710: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1e9710u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e9714: 0xe6240018  swc1        $f4, 0x18($s1)
    ctx->pc = 0x1e9714u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1e9718: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1e9718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1e971c: 0x1660ff7a  bnez        $s3, . + 4 + (-0x86 << 2)
    ctx->pc = 0x1E971Cu;
    {
        const bool branch_taken_0x1e971c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E971Cu;
        // 0x1e9720: 0x8e31003c  lw          $s1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e971c) {
            ctx->pc = 0x1E9508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9508;
        }
    }
    ctx->pc = 0x1E9724u;
    // 0x1e9724: 0x0  nop
    ctx->pc = 0x1e9724u;
    // NOP
label_1e9728:
    // 0x1e9728: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1e9728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1e972c:
    // 0x1e972c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1e972cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e9730: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1e9730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e9734: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1e9734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e9738: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1e9738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e973c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e973cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9740: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e9740u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9744: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1e9744u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9748: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1e9748u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e974c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e974cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9750: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x1e9750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e9754: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x1e9754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e9758: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1e9758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e975c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1e975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e9760: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9760u;
        // 0x1e9764: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9768u;
}
