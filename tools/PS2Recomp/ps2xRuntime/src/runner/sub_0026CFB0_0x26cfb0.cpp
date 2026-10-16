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

// Function: sub_0026CFB0
// Address: 0x26cfb0 - 0x26d4b8
void sub_0026CFB0_0x26cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CFB0_0x26cfb0");
#endif

    switch (ctx->pc) {
        case 0x26cfe8u: goto label_26cfe8;
        case 0x26d000u: goto label_26d000;
        case 0x26d010u: goto label_26d010;
        case 0x26d048u: goto label_26d048;
        case 0x26d054u: goto label_26d054;
        case 0x26d060u: goto label_26d060;
        case 0x26d070u: goto label_26d070;
        case 0x26d088u: goto label_26d088;
        case 0x26d098u: goto label_26d098;
        case 0x26d0dcu: goto label_26d0dc;
        case 0x26d0e8u: goto label_26d0e8;
        case 0x26d100u: goto label_26d100;
        case 0x26d110u: goto label_26d110;
        case 0x26d120u: goto label_26d120;
        case 0x26d154u: goto label_26d154;
        case 0x26d160u: goto label_26d160;
        case 0x26d184u: goto label_26d184;
        case 0x26d1a0u: goto label_26d1a0;
        case 0x26d1b0u: goto label_26d1b0;
        case 0x26d1c0u: goto label_26d1c0;
        case 0x26d1d0u: goto label_26d1d0;
        case 0x26d1e0u: goto label_26d1e0;
        case 0x26d1f0u: goto label_26d1f0;
        case 0x26d214u: goto label_26d214;
        case 0x26d220u: goto label_26d220;
        case 0x26d258u: goto label_26d258;
        case 0x26d268u: goto label_26d268;
        case 0x26d28cu: goto label_26d28c;
        case 0x26d298u: goto label_26d298;
        case 0x26d2b4u: goto label_26d2b4;
        case 0x26d2c4u: goto label_26d2c4;
        case 0x26d2ccu: goto label_26d2cc;
        case 0x26d2d8u: goto label_26d2d8;
        case 0x26d2e4u: goto label_26d2e4;
        case 0x26d2f4u: goto label_26d2f4;
        case 0x26d2fcu: goto label_26d2fc;
        case 0x26d308u: goto label_26d308;
        case 0x26d314u: goto label_26d314;
        case 0x26d344u: goto label_26d344;
        case 0x26d354u: goto label_26d354;
        case 0x26d35cu: goto label_26d35c;
        case 0x26d368u: goto label_26d368;
        case 0x26d374u: goto label_26d374;
        case 0x26d384u: goto label_26d384;
        case 0x26d38cu: goto label_26d38c;
        case 0x26d398u: goto label_26d398;
        case 0x26d3a4u: goto label_26d3a4;
        case 0x26d3b4u: goto label_26d3b4;
        case 0x26d3e0u: goto label_26d3e0;
        case 0x26d3f0u: goto label_26d3f0;
        case 0x26d414u: goto label_26d414;
        case 0x26d420u: goto label_26d420;
        case 0x26d444u: goto label_26d444;
        case 0x26d454u: goto label_26d454;
        case 0x26d470u: goto label_26d470;
        case 0x26d480u: goto label_26d480;
        default: break;
    }

    ctx->pc = 0x26cfb0u;

    // 0x26cfb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26cfb4: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x26cfb4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x26cfb8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x26cfb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x26cfbc: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x26cfbcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x26cfc0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x26cfc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x26cfc4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x26cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x26cfc8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x26cfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26cfcc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x26cfccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x26cfd0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x26cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x26cfd4: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x26cfd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x26cfd8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x26cfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26cfdc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x26cfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x26cfe0: 0xc09beb6  jal         func_26FAD8
    ctx->pc = 0x26CFE0u;
    SET_GPR_U32(ctx, 31, 0x26CFE8u);
    ctx->pc = 0x26CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFE0u;
    // 0x26cfe4: 0xe7b60090  swc1        $f22, 0x90($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FAD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26FAD8u, 0x26CFE0u, 0x26CFE8u)) {
        return;
    }
    ctx->pc = 0x26CFE8u;
label_26cfe8:
    // 0x26cfe8: 0x8e70cb58  lw          $s0, -0x34A8($s3)
    ctx->pc = 0x26cfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
    // 0x26cfec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26cff0: 0x12020125  beq         $s0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x26CFF0u;
    {
        const bool branch_taken_0x26cff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CFF0u;
        // 0x26cff4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cff0) {
            ctx->pc = 0x26D488u;
            goto label_26d488;
        }
    }
    ctx->pc = 0x26CFF8u;
    // 0x26cff8: 0xc09cb34  jal         func_272CD0
    ctx->pc = 0x26CFF8u;
    SET_GPR_U32(ctx, 31, 0x26D000u);
    ctx->pc = 0x26CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CFF8u;
    // 0x26cffc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CD0u, 0x26CFF8u, 0x26D000u)) {
        return;
    }
    ctx->pc = 0x26D000u;
label_26d000:
    // 0x26d000: 0x14400122  bnez        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x26D000u;
    {
        const bool branch_taken_0x26d000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D000u;
        // 0x26d004: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d000) {
            ctx->pc = 0x26D48Cu;
            goto label_26d48c;
        }
    }
    ctx->pc = 0x26D008u;
    // 0x26d008: 0xc09cb34  jal         func_272CD0
    ctx->pc = 0x26D008u;
    SET_GPR_U32(ctx, 31, 0x26D010u);
    ctx->pc = 0x26D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D008u;
    // 0x26d00c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CD0u, 0x26D008u, 0x26D010u)) {
        return;
    }
    ctx->pc = 0x26D010u;
label_26d010:
    // 0x26d010: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x26D010u;
    {
        const bool branch_taken_0x26d010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d010) {
            ctx->pc = 0x26D0A0u;
            goto label_26d0a0;
        }
    }
    ctx->pc = 0x26D018u;
    // 0x26d018: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d01c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x26d01cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d020: 0x0  nop
    ctx->pc = 0x26d020u;
    // NOP
    // 0x26d024: 0x45000118  bc1f        . + 4 + (0x118 << 2)
    ctx->pc = 0x26D024u;
    {
        const bool branch_taken_0x26d024 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D024u;
        // 0x26d028: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d024) {
            ctx->pc = 0x26D488u;
            goto label_26d488;
        }
    }
    ctx->pc = 0x26D02Cu;
    // 0x26d02c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d030: 0x2442bb78  addiu       $v0, $v0, -0x4488
    ctx->pc = 0x26d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949752));
    // 0x26d034: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26d034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26d038: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26d038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26d03c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d03cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d040: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D040u;
    SET_GPR_U32(ctx, 31, 0x26D048u);
    ctx->pc = 0x26D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D040u;
    // 0x26d044: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D040u, 0x26D048u)) {
        return;
    }
    ctx->pc = 0x26D048u;
label_26d048:
    // 0x26d048: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26d048u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26d04c: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D04Cu;
    SET_GPR_U32(ctx, 31, 0x26D054u);
    ctx->pc = 0x26D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D04Cu;
    // 0x26d050: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D04Cu, 0x26D054u)) {
        return;
    }
    ctx->pc = 0x26D054u;
label_26d054:
    // 0x26d054: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x26d054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x26d058: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D058u;
    SET_GPR_U32(ctx, 31, 0x26D060u);
    ctx->pc = 0x26D05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D058u;
    // 0x26d05c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D058u, 0x26D060u)) {
        return;
    }
    ctx->pc = 0x26D060u;
label_26d060:
    // 0x26d060: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x26d060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x26d064: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d068: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D068u;
    {
        const bool branch_taken_0x26d068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d068) {
            ctx->pc = 0x26D080u;
            goto label_26d080;
        }
    }
    ctx->pc = 0x26D070u;
label_26d070:
    // 0x26d070: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x26d070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26d074: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x26d074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x26d078: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x26D078u;
    {
        const bool branch_taken_0x26d078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D078u;
        // 0x26d07c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d078) {
            ctx->pc = 0x26D45Cu;
            goto label_26d45c;
        }
    }
    ctx->pc = 0x26D080u;
label_26d080:
    // 0x26d080: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26D080u;
    SET_GPR_U32(ctx, 31, 0x26D088u);
    ctx->pc = 0x26D084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D080u;
    // 0x26d084: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26D080u, 0x26D088u)) {
        return;
    }
    ctx->pc = 0x26D088u;
label_26d088:
    // 0x26d088: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x26D088u;
    {
        const bool branch_taken_0x26d088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D088u;
        // 0x26d08c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d088) {
            ctx->pc = 0x26D460u;
            goto label_26d460;
        }
    }
    ctx->pc = 0x26D090u;
    // 0x26d090: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26D090u;
    SET_GPR_U32(ctx, 31, 0x26D098u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26D090u, 0x26D098u)) {
        return;
    }
    ctx->pc = 0x26D098u;
label_26d098:
    // 0x26d098: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x26D098u;
    {
        const bool branch_taken_0x26d098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D098u;
        // 0x26d09c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d098) {
            ctx->pc = 0x26D458u;
            goto label_26d458;
        }
    }
    ctx->pc = 0x26D0A0u;
label_26d0a0:
    // 0x26d0a0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x26d0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x26d0a4: 0x4616b832  c.eq.s      $f23, $f22
    ctx->pc = 0x26d0a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d0a8: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x26D0A8u;
    {
        const bool branch_taken_0x26d0a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d0a8) {
            ctx->pc = 0x26D1B8u;
            goto label_26d1b8;
        }
    }
    ctx->pc = 0x26D0B0u;
    // 0x26d0b0: 0x4616a032  c.eq.s      $f20, $f22
    ctx->pc = 0x26d0b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d0b4: 0x0  nop
    ctx->pc = 0x26d0b4u;
    // NOP
    // 0x26d0b8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x26D0B8u;
    {
        const bool branch_taken_0x26d0b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0B8u;
        // 0x26d0bc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0b8) {
            ctx->pc = 0x26D118u;
            goto label_26d118;
        }
    }
    ctx->pc = 0x26D0C0u;
    // 0x26d0c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d0c4: 0x2442bb78  addiu       $v0, $v0, -0x4488
    ctx->pc = 0x26d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949752));
    // 0x26d0c8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26d0cc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26d0d0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d0d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d0d4: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D0D4u;
    SET_GPR_U32(ctx, 31, 0x26D0DCu);
    ctx->pc = 0x26D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0D4u;
    // 0x26d0d8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D0D4u, 0x26D0DCu)) {
        return;
    }
    ctx->pc = 0x26D0DCu;
label_26d0dc:
    // 0x26d0dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26d0dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26d0e0: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D0E0u;
    SET_GPR_U32(ctx, 31, 0x26D0E8u);
    ctx->pc = 0x26D0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0E0u;
    // 0x26d0e4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D0E0u, 0x26D0E8u)) {
        return;
    }
    ctx->pc = 0x26D0E8u;
label_26d0e8:
    // 0x26d0e8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x26d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x26d0ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d0f0: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x26D0F0u;
    {
        const bool branch_taken_0x26d0f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0F0u;
        // 0x26d0f4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0f0) {
            ctx->pc = 0x26D070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d070;
        }
    }
    ctx->pc = 0x26D0F8u;
    // 0x26d0f8: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26D0F8u;
    SET_GPR_U32(ctx, 31, 0x26D100u);
    ctx->pc = 0x26D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D0F8u;
    // 0x26d0fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26D0F8u, 0x26D100u)) {
        return;
    }
    ctx->pc = 0x26D100u;
label_26d100:
    // 0x26d100: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x26D100u;
    {
        const bool branch_taken_0x26d100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D100u;
        // 0x26d104: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d100) {
            ctx->pc = 0x26D460u;
            goto label_26d460;
        }
    }
    ctx->pc = 0x26D108u;
    // 0x26d108: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26D108u;
    SET_GPR_U32(ctx, 31, 0x26D110u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26D108u, 0x26D110u)) {
        return;
    }
    ctx->pc = 0x26D110u;
label_26d110:
    // 0x26d110: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x26D110u;
    {
        const bool branch_taken_0x26d110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D110u;
        // 0x26d114: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d110) {
            ctx->pc = 0x26D458u;
            goto label_26d458;
        }
    }
    ctx->pc = 0x26D118u;
label_26d118:
    // 0x26d118: 0xc09cb2a  jal         func_272CA8
    ctx->pc = 0x26D118u;
    SET_GPR_U32(ctx, 31, 0x26D120u);
    ctx->pc = 0x26D11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D118u;
    // 0x26d11c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CA8u, 0x26D118u, 0x26D120u)) {
        return;
    }
    ctx->pc = 0x26D120u;
label_26d120:
    // 0x26d120: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x26D120u;
    {
        const bool branch_taken_0x26d120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D120u;
        // 0x26d124: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d120) {
            ctx->pc = 0x26D48Cu;
            goto label_26d48c;
        }
    }
    ctx->pc = 0x26D128u;
    // 0x26d128: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x26d128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d12c: 0x0  nop
    ctx->pc = 0x26d12cu;
    // NOP
    // 0x26d130: 0x450000d6  bc1f        . + 4 + (0xD6 << 2)
    ctx->pc = 0x26D130u;
    {
        const bool branch_taken_0x26d130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D130u;
        // 0x26d134: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d130) {
            ctx->pc = 0x26D48Cu;
            goto label_26d48c;
        }
    }
    ctx->pc = 0x26D138u;
    // 0x26d138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26d138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d13c: 0x2442bb78  addiu       $v0, $v0, -0x4488
    ctx->pc = 0x26d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949752));
    // 0x26d140: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26d140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26d144: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26d144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26d148: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d148u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d14c: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D14Cu;
    SET_GPR_U32(ctx, 31, 0x26D154u);
    ctx->pc = 0x26D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D14Cu;
    // 0x26d150: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D14Cu, 0x26D154u)) {
        return;
    }
    ctx->pc = 0x26D154u;
label_26d154:
    // 0x26d154: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26d154u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26d158: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D158u;
    SET_GPR_U32(ctx, 31, 0x26D160u);
    ctx->pc = 0x26D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D158u;
    // 0x26d15c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D158u, 0x26D160u)) {
        return;
    }
    ctx->pc = 0x26D160u;
label_26d160:
    // 0x26d160: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D160u;
    {
        const bool branch_taken_0x26d160 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D160u;
        // 0x26d164: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d160) {
            ctx->pc = 0x26D174u;
            goto label_26d174;
        }
    }
    ctx->pc = 0x26D168u;
    // 0x26d168: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26d168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d16c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26D16Cu;
    {
        const bool branch_taken_0x26d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D16Cu;
        // 0x26d170: 0xffa40018  sd          $a0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d16c) {
            ctx->pc = 0x26D188u;
            goto label_26d188;
        }
    }
    ctx->pc = 0x26D174u;
label_26d174:
    // 0x26d174: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26d174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26d178: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26d178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d17c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26D17Cu;
    SET_GPR_U32(ctx, 31, 0x26D184u);
    ctx->pc = 0x26D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D17Cu;
    // 0x26d180: 0xdc45cb50  ld          $a1, -0x34B0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294953808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26D17Cu, 0x26D184u)) {
        return;
    }
    ctx->pc = 0x26D184u;
label_26d184:
    // 0x26d184: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x26d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_26d188:
    // 0x26d188: 0x8e63cb58  lw          $v1, -0x34A8($s3)
    ctx->pc = 0x26d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
    // 0x26d18c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d190: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D190u;
    {
        const bool branch_taken_0x26d190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d190) {
            ctx->pc = 0x26D1A8u;
            goto label_26d1a8;
        }
    }
    ctx->pc = 0x26D198u;
    // 0x26d198: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26D198u;
    SET_GPR_U32(ctx, 31, 0x26D1A0u);
    ctx->pc = 0x26D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D198u;
    // 0x26d19c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26D198u, 0x26D1A0u)) {
        return;
    }
    ctx->pc = 0x26D1A0u;
label_26d1a0:
    // 0x26d1a0: 0x144000af  bnez        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x26D1A0u;
    {
        const bool branch_taken_0x26d1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1A0u;
        // 0x26d1a4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1a0) {
            ctx->pc = 0x26D460u;
            goto label_26d460;
        }
    }
    ctx->pc = 0x26D1A8u;
label_26d1a8:
    // 0x26d1a8: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26D1A8u;
    SET_GPR_U32(ctx, 31, 0x26D1B0u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26D1A8u, 0x26D1B0u)) {
        return;
    }
    ctx->pc = 0x26D1B0u;
label_26d1b0:
    // 0x26d1b0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x26D1B0u;
    {
        const bool branch_taken_0x26d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1B0u;
        // 0x26d1b4: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1b0) {
            ctx->pc = 0x26D458u;
            goto label_26d458;
        }
    }
    ctx->pc = 0x26D1B8u;
label_26d1b8:
    // 0x26d1b8: 0xc09cb2a  jal         func_272CA8
    ctx->pc = 0x26D1B8u;
    SET_GPR_U32(ctx, 31, 0x26D1C0u);
    ctx->pc = 0x26D1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1B8u;
    // 0x26d1bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CA8u, 0x26D1B8u, 0x26D1C0u)) {
        return;
    }
    ctx->pc = 0x26D1C0u;
label_26d1c0:
    // 0x26d1c0: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x26D1C0u;
    {
        const bool branch_taken_0x26d1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d1c0) {
            ctx->pc = 0x26D3C4u;
            goto label_26d3c4;
        }
    }
    ctx->pc = 0x26D1C8u;
    // 0x26d1c8: 0xc09cb2a  jal         func_272CA8
    ctx->pc = 0x26D1C8u;
    SET_GPR_U32(ctx, 31, 0x26D1D0u);
    ctx->pc = 0x26D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1C8u;
    // 0x26d1cc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CA8u, 0x26D1C8u, 0x26D1D0u)) {
        return;
    }
    ctx->pc = 0x26D1D0u;
label_26d1d0:
    // 0x26d1d0: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x26D1D0u;
    {
        const bool branch_taken_0x26d1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d1d0) {
            ctx->pc = 0x26D3C4u;
            goto label_26d3c4;
        }
    }
    ctx->pc = 0x26D1D8u;
    // 0x26d1d8: 0xc09cb2a  jal         func_272CA8
    ctx->pc = 0x26D1D8u;
    SET_GPR_U32(ctx, 31, 0x26D1E0u);
    ctx->pc = 0x26D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1D8u;
    // 0x26d1dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CA8u, 0x26D1D8u, 0x26D1E0u)) {
        return;
    }
    ctx->pc = 0x26D1E0u;
label_26d1e0:
    // 0x26d1e0: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x26D1E0u;
    {
        const bool branch_taken_0x26d1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d1e0) {
            ctx->pc = 0x26D3C4u;
            goto label_26d3c4;
        }
    }
    ctx->pc = 0x26D1E8u;
    // 0x26d1e8: 0xc09cb34  jal         func_272CD0
    ctx->pc = 0x26D1E8u;
    SET_GPR_U32(ctx, 31, 0x26D1F0u);
    ctx->pc = 0x26D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1E8u;
    // 0x26d1ec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CD0u, 0x26D1E8u, 0x26D1F0u)) {
        return;
    }
    ctx->pc = 0x26D1F0u;
label_26d1f0:
    // 0x26d1f0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26D1F0u;
    {
        const bool branch_taken_0x26d1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1F0u;
        // 0x26d1f4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1f0) {
            ctx->pc = 0x26D270u;
            goto label_26d270;
        }
    }
    ctx->pc = 0x26D1F8u;
    // 0x26d1f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d1fc: 0x2442bb78  addiu       $v0, $v0, -0x4488
    ctx->pc = 0x26d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949752));
    // 0x26d200: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26d200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26d204: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26d204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26d208: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d20c: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D20Cu;
    SET_GPR_U32(ctx, 31, 0x26D214u);
    ctx->pc = 0x26D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D20Cu;
    // 0x26d210: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D20Cu, 0x26D214u)) {
        return;
    }
    ctx->pc = 0x26D214u;
label_26d214:
    // 0x26d214: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26d214u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26d218: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D218u;
    SET_GPR_U32(ctx, 31, 0x26D220u);
    ctx->pc = 0x26D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D218u;
    // 0x26d21c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D218u, 0x26D220u)) {
        return;
    }
    ctx->pc = 0x26D220u;
label_26d220:
    // 0x26d220: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D220u;
    {
        const bool branch_taken_0x26d220 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D220u;
        // 0x26d224: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d220) {
            ctx->pc = 0x26D234u;
            goto label_26d234;
        }
    }
    ctx->pc = 0x26D228u;
    // 0x26d228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d22c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26D22Cu;
    {
        const bool branch_taken_0x26d22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D22Cu;
        // 0x26d230: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d22c) {
            ctx->pc = 0x26D240u;
            goto label_26d240;
        }
    }
    ctx->pc = 0x26D234u;
label_26d234:
    // 0x26d234: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26d234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26d238: 0xdc43bb80  ld          $v1, -0x4480($v0)
    ctx->pc = 0x26d238u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x6ABB80u));
    // 0x26d23c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x26d23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_26d240:
    // 0x26d240: 0x8e63cb58  lw          $v1, -0x34A8($s3)
    ctx->pc = 0x26d240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
    // 0x26d244: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d248: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D248u;
    {
        const bool branch_taken_0x26d248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d248) {
            ctx->pc = 0x26D260u;
            goto label_26d260;
        }
    }
    ctx->pc = 0x26D250u;
    // 0x26d250: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26D250u;
    SET_GPR_U32(ctx, 31, 0x26D258u);
    ctx->pc = 0x26D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D250u;
    // 0x26d254: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26D250u, 0x26D258u)) {
        return;
    }
    ctx->pc = 0x26D258u;
label_26d258:
    // 0x26d258: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x26D258u;
    {
        const bool branch_taken_0x26d258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D258u;
        // 0x26d25c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d258) {
            ctx->pc = 0x26D460u;
            goto label_26d460;
        }
    }
    ctx->pc = 0x26D260u;
label_26d260:
    // 0x26d260: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26D260u;
    SET_GPR_U32(ctx, 31, 0x26D268u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26D260u, 0x26D268u)) {
        return;
    }
    ctx->pc = 0x26D268u;
label_26d268:
    // 0x26d268: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x26D268u;
    {
        const bool branch_taken_0x26d268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D268u;
        // 0x26d26c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d268) {
            ctx->pc = 0x26D458u;
            goto label_26d458;
        }
    }
    ctx->pc = 0x26D270u;
label_26d270:
    // 0x26d270: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26d270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d274: 0x2442bb78  addiu       $v0, $v0, -0x4488
    ctx->pc = 0x26d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949752));
    // 0x26d278: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26d278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26d27c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26d280: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d284: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D284u;
    SET_GPR_U32(ctx, 31, 0x26D28Cu);
    ctx->pc = 0x26D288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D284u;
    // 0x26d288: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D284u, 0x26D28Cu)) {
        return;
    }
    ctx->pc = 0x26D28Cu;
label_26d28c:
    // 0x26d28c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26d28cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26d290: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D290u;
    SET_GPR_U32(ctx, 31, 0x26D298u);
    ctx->pc = 0x26D294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D290u;
    // 0x26d294: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D290u, 0x26D298u)) {
        return;
    }
    ctx->pc = 0x26D298u;
label_26d298:
    // 0x26d298: 0x16000024  bnez        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x26D298u;
    {
        const bool branch_taken_0x26d298 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D298u;
        // 0x26d29c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d298) {
            ctx->pc = 0x26D32Cu;
            goto label_26d32c;
        }
    }
    ctx->pc = 0x26D2A0u;
    // 0x26d2a0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d2a4: 0xdc22bb88  ld          $v0, -0x4478($at)
    ctx->pc = 0x26d2a4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6ABB88u));
    // 0x26d2a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26d2a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26d2ac: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D2ACu;
    SET_GPR_U32(ctx, 31, 0x26D2B4u);
    ctx->pc = 0x26D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2ACu;
    // 0x26d2b0: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D2ACu, 0x26D2B4u)) {
        return;
    }
    ctx->pc = 0x26D2B4u;
label_26d2b4:
    // 0x26d2b4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x26d2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x26d2b8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26d2b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26d2bc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D2BCu;
    SET_GPR_U32(ctx, 31, 0x26D2C4u);
    ctx->pc = 0x26D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2BCu;
    // 0x26d2c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D2BCu, 0x26D2C4u)) {
        return;
    }
    ctx->pc = 0x26D2C4u;
label_26d2c4:
    // 0x26d2c4: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x26D2C4u;
    SET_GPR_U32(ctx, 31, 0x26D2CCu);
    ctx->pc = 0x26D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2C4u;
    // 0x26d2c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x26D2C4u, 0x26D2CCu)) {
        return;
    }
    ctx->pc = 0x26D2CCu;
label_26d2cc:
    // 0x26d2cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26d2ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26d2d0: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D2D0u;
    SET_GPR_U32(ctx, 31, 0x26D2D8u);
    ctx->pc = 0x26D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2D0u;
    // 0x26d2d4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D2D0u, 0x26D2D8u)) {
        return;
    }
    ctx->pc = 0x26D2D8u;
label_26d2d8:
    // 0x26d2d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d2dc: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26D2DCu;
    SET_GPR_U32(ctx, 31, 0x26D2E4u);
    ctx->pc = 0x26D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2DCu;
    // 0x26d2e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26D2DCu, 0x26D2E4u)) {
        return;
    }
    ctx->pc = 0x26D2E4u;
label_26d2e4:
    // 0x26d2e4: 0x4410035  bgez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x26D2E4u;
    {
        const bool branch_taken_0x26d2e4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x26D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2E4u;
        // 0x26d2e8: 0x8e63cb58  lw          $v1, -0x34A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2e4) {
            ctx->pc = 0x26D3BCu;
            goto label_26d3bc;
        }
    }
    ctx->pc = 0x26D2ECu;
    // 0x26d2ec: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D2ECu;
    SET_GPR_U32(ctx, 31, 0x26D2F4u);
    ctx->pc = 0x26D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2ECu;
    // 0x26d2f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D2ECu, 0x26D2F4u)) {
        return;
    }
    ctx->pc = 0x26D2F4u;
label_26d2f4:
    // 0x26d2f4: 0xc09ca3c  jal         func_2728F0
    ctx->pc = 0x26D2F4u;
    SET_GPR_U32(ctx, 31, 0x26D2FCu);
    ctx->pc = 0x26D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2F4u;
    // 0x26d2f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728F0u, 0x26D2F4u, 0x26D2FCu)) {
        return;
    }
    ctx->pc = 0x26D2FCu;
label_26d2fc:
    // 0x26d2fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d300: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D300u;
    SET_GPR_U32(ctx, 31, 0x26D308u);
    ctx->pc = 0x26D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D300u;
    // 0x26d304: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D300u, 0x26D308u)) {
        return;
    }
    ctx->pc = 0x26D308u;
label_26d308:
    // 0x26d308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d30c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26D30Cu;
    SET_GPR_U32(ctx, 31, 0x26D314u);
    ctx->pc = 0x26D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D30Cu;
    // 0x26d310: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26D30Cu, 0x26D314u)) {
        return;
    }
    ctx->pc = 0x26D314u;
label_26d314:
    // 0x26d314: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26D314u;
    {
        const bool branch_taken_0x26d314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D314u;
        // 0x26d318: 0x8e63cb58  lw          $v1, -0x34A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d314) {
            ctx->pc = 0x26D3BCu;
            goto label_26d3bc;
        }
    }
    ctx->pc = 0x26D31Cu;
    // 0x26d31c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d320: 0xdc22bb90  ld          $v0, -0x4470($at)
    ctx->pc = 0x26d320u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6ABB90u));
    // 0x26d324: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x26D324u;
    {
        const bool branch_taken_0x26d324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D324u;
        // 0x26d328: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d324) {
            ctx->pc = 0x26D3BCu;
            goto label_26d3bc;
        }
    }
    ctx->pc = 0x26D32Cu;
label_26d32c:
    // 0x26d32c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26d330: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26d330u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26d334: 0xdc51cb50  ld          $s1, -0x34B0($v0)
    ctx->pc = 0x26d334u;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x6ACB50u));
    // 0x26d338: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26d338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d33c: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D33Cu;
    SET_GPR_U32(ctx, 31, 0x26D344u);
    ctx->pc = 0x26D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D33Cu;
    // 0x26d340: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D33Cu, 0x26D344u)) {
        return;
    }
    ctx->pc = 0x26D344u;
label_26d344:
    // 0x26d344: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x26d344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x26d348: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26d348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26d34c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D34Cu;
    SET_GPR_U32(ctx, 31, 0x26D354u);
    ctx->pc = 0x26D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D34Cu;
    // 0x26d350: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D34Cu, 0x26D354u)) {
        return;
    }
    ctx->pc = 0x26D354u;
label_26d354:
    // 0x26d354: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x26D354u;
    SET_GPR_U32(ctx, 31, 0x26D35Cu);
    ctx->pc = 0x26D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D354u;
    // 0x26d358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x26D354u, 0x26D35Cu)) {
        return;
    }
    ctx->pc = 0x26D35Cu;
label_26d35c:
    // 0x26d35c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26d35cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26d360: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D360u;
    SET_GPR_U32(ctx, 31, 0x26D368u);
    ctx->pc = 0x26D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D360u;
    // 0x26d364: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D360u, 0x26D368u)) {
        return;
    }
    ctx->pc = 0x26D368u;
label_26d368:
    // 0x26d368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d36c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26D36Cu;
    SET_GPR_U32(ctx, 31, 0x26D374u);
    ctx->pc = 0x26D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D36Cu;
    // 0x26d370: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26D36Cu, 0x26D374u)) {
        return;
    }
    ctx->pc = 0x26D374u;
label_26d374:
    // 0x26d374: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26D374u;
    {
        const bool branch_taken_0x26d374 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x26D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D374u;
        // 0x26d378: 0x8e63cb58  lw          $v1, -0x34A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d374) {
            ctx->pc = 0x26D3BCu;
            goto label_26d3bc;
        }
    }
    ctx->pc = 0x26D37Cu;
    // 0x26d37c: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D37Cu;
    SET_GPR_U32(ctx, 31, 0x26D384u);
    ctx->pc = 0x26D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D37Cu;
    // 0x26d380: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D37Cu, 0x26D384u)) {
        return;
    }
    ctx->pc = 0x26D384u;
label_26d384:
    // 0x26d384: 0xc09ca3c  jal         func_2728F0
    ctx->pc = 0x26D384u;
    SET_GPR_U32(ctx, 31, 0x26D38Cu);
    ctx->pc = 0x26D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D384u;
    // 0x26d388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728F0u, 0x26D384u, 0x26D38Cu)) {
        return;
    }
    ctx->pc = 0x26D38Cu;
label_26d38c:
    // 0x26d38c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d390: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D390u;
    SET_GPR_U32(ctx, 31, 0x26D398u);
    ctx->pc = 0x26D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D390u;
    // 0x26d394: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D390u, 0x26D398u)) {
        return;
    }
    ctx->pc = 0x26D398u;
label_26d398:
    // 0x26d398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d39c: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26D39Cu;
    SET_GPR_U32(ctx, 31, 0x26D3A4u);
    ctx->pc = 0x26D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D39Cu;
    // 0x26d3a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26D39Cu, 0x26D3A4u)) {
        return;
    }
    ctx->pc = 0x26D3A4u;
label_26d3a4:
    // 0x26d3a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D3A4u;
    {
        const bool branch_taken_0x26d3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3A4u;
        // 0x26d3a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3a4) {
            ctx->pc = 0x26D3B8u;
            goto label_26d3b8;
        }
    }
    ctx->pc = 0x26D3ACu;
    // 0x26d3ac: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26D3ACu;
    SET_GPR_U32(ctx, 31, 0x26D3B4u);
    ctx->pc = 0x26D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3ACu;
    // 0x26d3b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26D3ACu, 0x26D3B4u)) {
        return;
    }
    ctx->pc = 0x26D3B4u;
label_26d3b4:
    // 0x26d3b4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x26d3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_26d3b8:
    // 0x26d3b8: 0x8e63cb58  lw          $v1, -0x34A8($s3)
    ctx->pc = 0x26d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
label_26d3bc:
    // 0x26d3bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26D3BCu;
    {
        const bool branch_taken_0x26d3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3BCu;
        // 0x26d3c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3bc) {
            ctx->pc = 0x26D434u;
            goto label_26d434;
        }
    }
    ctx->pc = 0x26D3C4u;
label_26d3c4:
    // 0x26d3c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d3c8: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x26d3c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d3cc: 0x0  nop
    ctx->pc = 0x26d3ccu;
    // NOP
    // 0x26d3d0: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x26D3D0u;
    {
        const bool branch_taken_0x26d3d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3D0u;
        // 0x26d3d4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3d0) {
            ctx->pc = 0x26D48Cu;
            goto label_26d48c;
        }
    }
    ctx->pc = 0x26D3D8u;
    // 0x26d3d8: 0xc09cb2a  jal         func_272CA8
    ctx->pc = 0x26D3D8u;
    SET_GPR_U32(ctx, 31, 0x26D3E0u);
    ctx->pc = 0x26D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3D8u;
    // 0x26d3dc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CA8u, 0x26D3D8u, 0x26D3E0u)) {
        return;
    }
    ctx->pc = 0x26D3E0u;
label_26d3e0:
    // 0x26d3e0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26D3E0u;
    {
        const bool branch_taken_0x26d3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3E0u;
        // 0x26d3e4: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3e0) {
            ctx->pc = 0x26D48Cu;
            goto label_26d48c;
        }
    }
    ctx->pc = 0x26D3E8u;
    // 0x26d3e8: 0xc09cb2a  jal         func_272CA8
    ctx->pc = 0x26D3E8u;
    SET_GPR_U32(ctx, 31, 0x26D3F0u);
    ctx->pc = 0x26D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3E8u;
    // 0x26d3ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CA8u, 0x26D3E8u, 0x26D3F0u)) {
        return;
    }
    ctx->pc = 0x26D3F0u;
label_26d3f0:
    // 0x26d3f0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26D3F0u;
    {
        const bool branch_taken_0x26d3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3F0u;
        // 0x26d3f4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3f0) {
            ctx->pc = 0x26D488u;
            goto label_26d488;
        }
    }
    ctx->pc = 0x26D3F8u;
    // 0x26d3f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d3fc: 0x2442bb78  addiu       $v0, $v0, -0x4488
    ctx->pc = 0x26d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949752));
    // 0x26d400: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26d404: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26d404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26d408: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x26d408u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x26d40c: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D40Cu;
    SET_GPR_U32(ctx, 31, 0x26D414u);
    ctx->pc = 0x26D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D40Cu;
    // 0x26d410: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D40Cu, 0x26D414u)) {
        return;
    }
    ctx->pc = 0x26D414u;
label_26d414:
    // 0x26d414: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26d414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26d418: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26D418u;
    SET_GPR_U32(ctx, 31, 0x26D420u);
    ctx->pc = 0x26D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D418u;
    // 0x26d41c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26D418u, 0x26D420u)) {
        return;
    }
    ctx->pc = 0x26D420u;
label_26d420:
    // 0x26d420: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d424: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x26d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x26d428: 0x8e63cb58  lw          $v1, -0x34A8($s3)
    ctx->pc = 0x26d428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953816)));
    // 0x26d42c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d430: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x26d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_26d434:
    // 0x26d434: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D434u;
    {
        const bool branch_taken_0x26d434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26d434) {
            ctx->pc = 0x26D44Cu;
            goto label_26d44c;
        }
    }
    ctx->pc = 0x26D43Cu;
    // 0x26d43c: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26D43Cu;
    SET_GPR_U32(ctx, 31, 0x26D444u);
    ctx->pc = 0x26D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D43Cu;
    // 0x26d440: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26D43Cu, 0x26D444u)) {
        return;
    }
    ctx->pc = 0x26D444u;
label_26d444:
    // 0x26d444: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26D444u;
    {
        const bool branch_taken_0x26d444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D444u;
        // 0x26d448: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d444) {
            ctx->pc = 0x26D460u;
            goto label_26d460;
        }
    }
    ctx->pc = 0x26D44Cu;
label_26d44c:
    // 0x26d44c: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26D44Cu;
    SET_GPR_U32(ctx, 31, 0x26D454u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26D44Cu, 0x26D454u)) {
        return;
    }
    ctx->pc = 0x26D454u;
label_26d454:
    // 0x26d454: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x26d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_26d458:
    // 0x26d458: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26d458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26d45c:
    // 0x26d45c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26d460:
    // 0x26d460: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D460u;
    {
        const bool branch_taken_0x26d460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d460) {
            ctx->pc = 0x26D478u;
            goto label_26d478;
        }
    }
    ctx->pc = 0x26D468u;
    // 0x26d468: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26D468u;
    SET_GPR_U32(ctx, 31, 0x26D470u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26D468u, 0x26D470u)) {
        return;
    }
    ctx->pc = 0x26D470u;
label_26d470:
    // 0x26d470: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d474: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26d474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26d478:
    // 0x26d478: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x26D478u;
    SET_GPR_U32(ctx, 31, 0x26D480u);
    ctx->pc = 0x26D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D478u;
    // 0x26d47c: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x26D478u, 0x26D480u)) {
        return;
    }
    ctx->pc = 0x26D480u;
label_26d480:
    // 0x26d480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26D480u;
    {
        const bool branch_taken_0x26d480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D480u;
        // 0x26d484: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d480) {
            ctx->pc = 0x26D490u;
            goto label_26d490;
        }
    }
    ctx->pc = 0x26D488u;
label_26d488:
    // 0x26d488: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x26d488u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_26d48c:
    // 0x26d48c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26d48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26d490:
    // 0x26d490: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x26d490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26d494: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x26d494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26d498: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x26d498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d49c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26d49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d4a0: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x26d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x26d4a4: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x26d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26d4a8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x26d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26d4ac: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x26d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26d4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x26D4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4B0u;
        // 0x26d4b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D4B8u;
}
