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

// Function: sub_001CBCA0
// Address: 0x1cbca0 - 0x1cbed8
void sub_001CBCA0_0x1cbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBCA0_0x1cbca0");
#endif

    switch (ctx->pc) {
        case 0x1cbca0u: goto label_1cbca0;
        case 0x1cbca4u: goto label_1cbca4;
        case 0x1cbca8u: goto label_1cbca8;
        case 0x1cbcacu: goto label_1cbcac;
        case 0x1cbcb0u: goto label_1cbcb0;
        case 0x1cbcb4u: goto label_1cbcb4;
        case 0x1cbcb8u: goto label_1cbcb8;
        case 0x1cbcbcu: goto label_1cbcbc;
        case 0x1cbcc0u: goto label_1cbcc0;
        case 0x1cbcc4u: goto label_1cbcc4;
        case 0x1cbcc8u: goto label_1cbcc8;
        case 0x1cbcccu: goto label_1cbccc;
        case 0x1cbcd0u: goto label_1cbcd0;
        case 0x1cbcd4u: goto label_1cbcd4;
        case 0x1cbcd8u: goto label_1cbcd8;
        case 0x1cbcdcu: goto label_1cbcdc;
        case 0x1cbce0u: goto label_1cbce0;
        case 0x1cbce4u: goto label_1cbce4;
        case 0x1cbce8u: goto label_1cbce8;
        case 0x1cbcecu: goto label_1cbcec;
        case 0x1cbcf0u: goto label_1cbcf0;
        case 0x1cbcf4u: goto label_1cbcf4;
        case 0x1cbcf8u: goto label_1cbcf8;
        case 0x1cbcfcu: goto label_1cbcfc;
        case 0x1cbd00u: goto label_1cbd00;
        case 0x1cbd04u: goto label_1cbd04;
        case 0x1cbd08u: goto label_1cbd08;
        case 0x1cbd0cu: goto label_1cbd0c;
        case 0x1cbd10u: goto label_1cbd10;
        case 0x1cbd14u: goto label_1cbd14;
        case 0x1cbd18u: goto label_1cbd18;
        case 0x1cbd1cu: goto label_1cbd1c;
        case 0x1cbd20u: goto label_1cbd20;
        case 0x1cbd24u: goto label_1cbd24;
        case 0x1cbd28u: goto label_1cbd28;
        case 0x1cbd2cu: goto label_1cbd2c;
        case 0x1cbd30u: goto label_1cbd30;
        case 0x1cbd34u: goto label_1cbd34;
        case 0x1cbd38u: goto label_1cbd38;
        case 0x1cbd3cu: goto label_1cbd3c;
        case 0x1cbd40u: goto label_1cbd40;
        case 0x1cbd44u: goto label_1cbd44;
        case 0x1cbd48u: goto label_1cbd48;
        case 0x1cbd4cu: goto label_1cbd4c;
        case 0x1cbd50u: goto label_1cbd50;
        case 0x1cbd54u: goto label_1cbd54;
        case 0x1cbd58u: goto label_1cbd58;
        case 0x1cbd5cu: goto label_1cbd5c;
        case 0x1cbd60u: goto label_1cbd60;
        case 0x1cbd64u: goto label_1cbd64;
        case 0x1cbd68u: goto label_1cbd68;
        case 0x1cbd6cu: goto label_1cbd6c;
        case 0x1cbd70u: goto label_1cbd70;
        case 0x1cbd74u: goto label_1cbd74;
        case 0x1cbd78u: goto label_1cbd78;
        case 0x1cbd7cu: goto label_1cbd7c;
        case 0x1cbd80u: goto label_1cbd80;
        case 0x1cbd84u: goto label_1cbd84;
        case 0x1cbd88u: goto label_1cbd88;
        case 0x1cbd8cu: goto label_1cbd8c;
        case 0x1cbd90u: goto label_1cbd90;
        case 0x1cbd94u: goto label_1cbd94;
        case 0x1cbd98u: goto label_1cbd98;
        case 0x1cbd9cu: goto label_1cbd9c;
        case 0x1cbda0u: goto label_1cbda0;
        case 0x1cbda4u: goto label_1cbda4;
        case 0x1cbda8u: goto label_1cbda8;
        case 0x1cbdacu: goto label_1cbdac;
        case 0x1cbdb0u: goto label_1cbdb0;
        case 0x1cbdb4u: goto label_1cbdb4;
        case 0x1cbdb8u: goto label_1cbdb8;
        case 0x1cbdbcu: goto label_1cbdbc;
        case 0x1cbdc0u: goto label_1cbdc0;
        case 0x1cbdc4u: goto label_1cbdc4;
        case 0x1cbdc8u: goto label_1cbdc8;
        case 0x1cbdccu: goto label_1cbdcc;
        case 0x1cbdd0u: goto label_1cbdd0;
        case 0x1cbdd4u: goto label_1cbdd4;
        case 0x1cbdd8u: goto label_1cbdd8;
        case 0x1cbddcu: goto label_1cbddc;
        case 0x1cbde0u: goto label_1cbde0;
        case 0x1cbde4u: goto label_1cbde4;
        case 0x1cbde8u: goto label_1cbde8;
        case 0x1cbdecu: goto label_1cbdec;
        case 0x1cbdf0u: goto label_1cbdf0;
        case 0x1cbdf4u: goto label_1cbdf4;
        case 0x1cbdf8u: goto label_1cbdf8;
        case 0x1cbdfcu: goto label_1cbdfc;
        case 0x1cbe00u: goto label_1cbe00;
        case 0x1cbe04u: goto label_1cbe04;
        case 0x1cbe08u: goto label_1cbe08;
        case 0x1cbe0cu: goto label_1cbe0c;
        case 0x1cbe10u: goto label_1cbe10;
        case 0x1cbe14u: goto label_1cbe14;
        case 0x1cbe18u: goto label_1cbe18;
        case 0x1cbe1cu: goto label_1cbe1c;
        case 0x1cbe20u: goto label_1cbe20;
        case 0x1cbe24u: goto label_1cbe24;
        case 0x1cbe28u: goto label_1cbe28;
        case 0x1cbe2cu: goto label_1cbe2c;
        case 0x1cbe30u: goto label_1cbe30;
        case 0x1cbe34u: goto label_1cbe34;
        case 0x1cbe38u: goto label_1cbe38;
        case 0x1cbe3cu: goto label_1cbe3c;
        case 0x1cbe40u: goto label_1cbe40;
        case 0x1cbe44u: goto label_1cbe44;
        case 0x1cbe48u: goto label_1cbe48;
        case 0x1cbe4cu: goto label_1cbe4c;
        case 0x1cbe50u: goto label_1cbe50;
        case 0x1cbe54u: goto label_1cbe54;
        case 0x1cbe58u: goto label_1cbe58;
        case 0x1cbe5cu: goto label_1cbe5c;
        case 0x1cbe60u: goto label_1cbe60;
        case 0x1cbe64u: goto label_1cbe64;
        case 0x1cbe68u: goto label_1cbe68;
        case 0x1cbe6cu: goto label_1cbe6c;
        case 0x1cbe70u: goto label_1cbe70;
        case 0x1cbe74u: goto label_1cbe74;
        case 0x1cbe78u: goto label_1cbe78;
        case 0x1cbe7cu: goto label_1cbe7c;
        case 0x1cbe80u: goto label_1cbe80;
        case 0x1cbe84u: goto label_1cbe84;
        case 0x1cbe88u: goto label_1cbe88;
        case 0x1cbe8cu: goto label_1cbe8c;
        case 0x1cbe90u: goto label_1cbe90;
        case 0x1cbe94u: goto label_1cbe94;
        case 0x1cbe98u: goto label_1cbe98;
        case 0x1cbe9cu: goto label_1cbe9c;
        case 0x1cbea0u: goto label_1cbea0;
        case 0x1cbea4u: goto label_1cbea4;
        case 0x1cbea8u: goto label_1cbea8;
        case 0x1cbeacu: goto label_1cbeac;
        case 0x1cbeb0u: goto label_1cbeb0;
        case 0x1cbeb4u: goto label_1cbeb4;
        case 0x1cbeb8u: goto label_1cbeb8;
        case 0x1cbebcu: goto label_1cbebc;
        case 0x1cbec0u: goto label_1cbec0;
        case 0x1cbec4u: goto label_1cbec4;
        case 0x1cbec8u: goto label_1cbec8;
        case 0x1cbeccu: goto label_1cbecc;
        case 0x1cbed0u: goto label_1cbed0;
        case 0x1cbed4u: goto label_1cbed4;
        default: break;
    }

    ctx->pc = 0x1cbca0u;

label_1cbca0:
    // 0x1cbca0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1cbca4:
    // 0x1cbca4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1cbca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1cbca8:
    // 0x1cbca8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1cbca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1cbcac:
    // 0x1cbcac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cbcb0:
    // 0x1cbcb0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1cbcb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1cbcb4:
    // 0x1cbcb4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1cbcb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cbcb8:
    // 0x1cbcb8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1cbcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1cbcbc:
    // 0x1cbcbc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1cbcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1cbcc0:
    // 0x1cbcc0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1cbcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1cbcc4:
    // 0x1cbcc4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1cbcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1cbcc8:
    // 0x1cbcc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cbcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cbccc:
    // 0x1cbccc: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x1cbcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1cbcd0:
    // 0x1cbcd0: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
label_1cbcd4:
    if (ctx->pc == 0x1CBCD4u) {
        ctx->pc = 0x1CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD0u;
        // 0x1cbcd4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCD8u;
        goto label_1cbcd8;
    }
    ctx->pc = 0x1CBCD0u;
    {
        const bool branch_taken_0x1cbcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD0u;
        // 0x1cbcd4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcd0) {
            ctx->pc = 0x1CBE98u;
            goto label_1cbe98;
        }
    }
    ctx->pc = 0x1CBCD8u;
label_1cbcd8:
    // 0x1cbcd8: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x1cbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1cbcdc:
    // 0x1cbcdc: 0x5040006f  beql        $v0, $zero, . + 4 + (0x6F << 2)
label_1cbce0:
    if (ctx->pc == 0x1CBCE0u) {
        ctx->pc = 0x1CBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCDCu;
        // 0x1cbce0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCE4u;
        goto label_1cbce4;
    }
    ctx->pc = 0x1CBCDCu;
    {
        const bool branch_taken_0x1cbcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbcdc) {
            ctx->pc = 0x1CBCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBCDCu;
            // 0x1cbce0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBE9Cu;
            goto label_1cbe9c;
        }
    }
    ctx->pc = 0x1CBCE4u;
label_1cbce4:
    // 0x1cbce4: 0xc06ba6c  jal         func_1AE9B0
label_1cbce8:
    if (ctx->pc == 0x1CBCE8u) {
        ctx->pc = 0x1CBCECu;
        goto label_1cbcec;
    }
    ctx->pc = 0x1CBCE4u;
    SET_GPR_U32(ctx, 31, 0x1CBCECu);
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1CBCE4u, 0x1CBCECu)) {
        return;
    }
    ctx->pc = 0x1CBCECu;
label_1cbcec:
    // 0x1cbcec: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1cbcf0:
    // 0x1cbcf0: 0x1682003c  bne         $s4, $v0, . + 4 + (0x3C << 2)
label_1cbcf4:
    if (ctx->pc == 0x1CBCF4u) {
        ctx->pc = 0x1CBCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCF0u;
        // 0x1cbcf4: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCF8u;
        goto label_1cbcf8;
    }
    ctx->pc = 0x1CBCF0u;
    {
        const bool branch_taken_0x1cbcf0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCF0u;
        // 0x1cbcf4: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcf0) {
            ctx->pc = 0x1CBDE4u;
            goto label_1cbde4;
        }
    }
    ctx->pc = 0x1CBCF8u;
label_1cbcf8:
    // 0x1cbcf8: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x1cbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_1cbcfc:
    // 0x1cbcfc: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_1cbd00:
    if (ctx->pc == 0x1CBD00u) {
        ctx->pc = 0x1CBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCFCu;
        // 0x1cbd00: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD04u;
        goto label_1cbd04;
    }
    ctx->pc = 0x1CBCFCu;
    {
        const bool branch_taken_0x1cbcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCFCu;
        // 0x1cbd00: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcfc) {
            ctx->pc = 0x1CBDE4u;
            goto label_1cbde4;
        }
    }
    ctx->pc = 0x1CBD04u;
label_1cbd04:
    // 0x1cbd04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1cbd08:
    // 0x1cbd08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cbd08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd0c:
    // 0x1cbd0c: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x1cbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
label_1cbd10:
    // 0x1cbd10: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1cbd10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbd14:
    // 0x1cbd14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cbd14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd18:
    // 0x1cbd18: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x1cbd18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1cbd1c:
    // 0x1cbd1c: 0x0  nop
    ctx->pc = 0x1cbd1cu;
    // NOP
label_1cbd20:
    // 0x1cbd20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cbd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd24:
    // 0x1cbd24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cbd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd28:
    // 0x1cbd28: 0xc0c493d  jal         func_3124F4
label_1cbd2c:
    if (ctx->pc == 0x1CBD2Cu) {
        ctx->pc = 0x1CBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD28u;
        // 0x1cbd2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD30u;
        goto label_1cbd30;
    }
    ctx->pc = 0x1CBD28u;
    SET_GPR_U32(ctx, 31, 0x1CBD30u);
    ctx->pc = 0x1CBD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD28u;
    // 0x1cbd2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CBD28u, 0x1CBD30u)) {
        return;
    }
    ctx->pc = 0x1CBD30u;
label_1cbd30:
    // 0x1cbd30: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x1cbd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1cbd34:
    // 0x1cbd34: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x1cbd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1cbd38:
    // 0x1cbd38: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1cbd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbd3c:
    // 0x1cbd3c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1cbd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cbd40:
    // 0x1cbd40: 0x9fa40024  lwu         $a0, 0x24($sp)
    ctx->pc = 0x1cbd40u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1cbd44:
    // 0x1cbd44: 0x9fa20020  lwu         $v0, 0x20($sp)
    ctx->pc = 0x1cbd44u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbd48:
    // 0x1cbd48: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1cbd48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1cbd4c:
    // 0x1cbd4c: 0xc06cdf0  jal         func_1B37C0
label_1cbd50:
    if (ctx->pc == 0x1CBD50u) {
        ctx->pc = 0x1CBD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD4Cu;
        // 0x1cbd50: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD54u;
        goto label_1cbd54;
    }
    ctx->pc = 0x1CBD4Cu;
    SET_GPR_U32(ctx, 31, 0x1CBD54u);
    ctx->pc = 0x1CBD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD4Cu;
    // 0x1cbd50: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B37C0u, 0x1CBD4Cu, 0x1CBD54u)) {
        return;
    }
    ctx->pc = 0x1CBD54u;
label_1cbd54:
    // 0x1cbd54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1cbd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1cbd58:
    // 0x1cbd58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1cbd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1cbd5c:
    // 0x1cbd5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cbd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1cbd60:
    // 0x1cbd60: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1cbd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1cbd64:
    // 0x1cbd64: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1cbd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1cbd68:
    // 0x1cbd68: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x1cbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1cbd6c:
    // 0x1cbd6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1cbd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cbd70:
    // 0x1cbd70: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1cbd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbd74:
    // 0x1cbd74: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1cbd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cbd78:
    // 0x1cbd78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cbd78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cbd7c:
    // 0x1cbd7c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1cbd7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cbd80:
    // 0x1cbd80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cbd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbd84:
    // 0x1cbd84: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1cbd84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1cbd88:
    // 0x1cbd88: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1cbd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1cbd8c:
    // 0x1cbd8c: 0xc093ab4  jal         func_24EAD0
label_1cbd90:
    if (ctx->pc == 0x1CBD90u) {
        ctx->pc = 0x1CBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD8Cu;
        // 0x1cbd90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD94u;
        goto label_1cbd94;
    }
    ctx->pc = 0x1CBD8Cu;
    SET_GPR_U32(ctx, 31, 0x1CBD94u);
    ctx->pc = 0x1CBD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD8Cu;
    // 0x1cbd90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAD0u, 0x1CBD8Cu, 0x1CBD94u)) {
        return;
    }
    ctx->pc = 0x1CBD94u;
label_1cbd94:
    // 0x1cbd94: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1cbd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cbd98:
    // 0x1cbd98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cbd98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cbd9c:
    // 0x1cbd9c: 0x0  nop
    ctx->pc = 0x1cbd9cu;
    // NOP
label_1cbda0:
    // 0x1cbda0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1cbda4:
    if (ctx->pc == 0x1CBDA4u) {
        ctx->pc = 0x1CBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDA0u;
        // 0x1cbda4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDA8u;
        goto label_1cbda8;
    }
    ctx->pc = 0x1CBDA0u;
    {
        const bool branch_taken_0x1cbda0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDA0u;
        // 0x1cbda4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbda0) {
            ctx->pc = 0x1CBDC8u;
            goto label_1cbdc8;
        }
    }
    ctx->pc = 0x1CBDA8u;
label_1cbda8:
    // 0x1cbda8: 0xae15028c  sw          $s5, 0x28C($s0)
    ctx->pc = 0x1cbda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 21));
label_1cbdac:
    // 0x1cbdac: 0xae120288  sw          $s2, 0x288($s0)
    ctx->pc = 0x1cbdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 18));
label_1cbdb0:
    // 0x1cbdb0: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cbdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cbdb4:
    // 0x1cbdb4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cbdb8:
    // 0x1cbdb8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cbdb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cbdbc:
    // 0x1cbdbc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cbdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cbdc0:
    // 0x1cbdc0: 0x60f809  jalr        $v1
label_1cbdc4:
    if (ctx->pc == 0x1CBDC4u) {
        ctx->pc = 0x1CBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDC0u;
        // 0x1cbdc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDC8u;
        goto label_1cbdc8;
    }
    ctx->pc = 0x1CBDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CBDC8u);
        ctx->pc = 0x1CBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDC0u;
        // 0x1cbdc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBDC0u, 0x1CBDC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBDC8u;
label_1cbdc8:
    // 0x1cbdc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cbdc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cbdcc:
    // 0x1cbdcc: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x1cbdccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_1cbdd0:
    // 0x1cbdd0: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1cbdd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_1cbdd4:
    // 0x1cbdd4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_1cbdd8:
    if (ctx->pc == 0x1CBDD8u) {
        ctx->pc = 0x1CBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDD4u;
        // 0x1cbdd8: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDDCu;
        goto label_1cbddc;
    }
    ctx->pc = 0x1CBDD4u;
    {
        const bool branch_taken_0x1cbdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDD4u;
        // 0x1cbdd8: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdd4) {
            ctx->pc = 0x1CBD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbd20;
        }
    }
    ctx->pc = 0x1CBDDCu;
label_1cbddc:
    // 0x1cbddc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1cbde0:
    if (ctx->pc == 0x1CBDE0u) {
        ctx->pc = 0x1CBDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDDCu;
        // 0x1cbde0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDE4u;
        goto label_1cbde4;
    }
    ctx->pc = 0x1CBDDCu;
    {
        const bool branch_taken_0x1cbddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDDCu;
        // 0x1cbde0: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbddc) {
            ctx->pc = 0x1CBE9Cu;
            goto label_1cbe9c;
        }
    }
    ctx->pc = 0x1CBDE4u;
label_1cbde4:
    // 0x1cbde4: 0x5682002d  bnel        $s4, $v0, . + 4 + (0x2D << 2)
label_1cbde8:
    if (ctx->pc == 0x1CBDE8u) {
        ctx->pc = 0x1CBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDE4u;
        // 0x1cbde8: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDECu;
        goto label_1cbdec;
    }
    ctx->pc = 0x1CBDE4u;
    {
        const bool branch_taken_0x1cbde4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbde4) {
            ctx->pc = 0x1CBDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBDE4u;
            // 0x1cbde8: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBE9Cu;
            goto label_1cbe9c;
        }
    }
    ctx->pc = 0x1CBDECu;
label_1cbdec:
    // 0x1cbdec: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x1cbdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_1cbdf0:
    // 0x1cbdf0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1cbdf4:
    if (ctx->pc == 0x1CBDF4u) {
        ctx->pc = 0x1CBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDF0u;
        // 0x1cbdf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDF8u;
        goto label_1cbdf8;
    }
    ctx->pc = 0x1CBDF0u;
    {
        const bool branch_taken_0x1cbdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDF0u;
        // 0x1cbdf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdf0) {
            ctx->pc = 0x1CBE98u;
            goto label_1cbe98;
        }
    }
    ctx->pc = 0x1CBDF8u;
label_1cbdf8:
    // 0x1cbdf8: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1cbdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
label_1cbdfc:
    // 0x1cbdfc: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cbe00:
    // 0x1cbe00: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cbe04:
    // 0x1cbe04: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cbe08:
    // 0x1cbe08: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cbe0c:
    // 0x1cbe0c: 0x60f809  jalr        $v1
label_1cbe10:
    if (ctx->pc == 0x1CBE10u) {
        ctx->pc = 0x1CBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE0Cu;
        // 0x1cbe10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE14u;
        goto label_1cbe14;
    }
    ctx->pc = 0x1CBE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CBE14u);
        ctx->pc = 0x1CBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE0Cu;
        // 0x1cbe10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBE0Cu, 0x1CBE14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBE14u;
label_1cbe14:
    // 0x1cbe14: 0x8e050288  lw          $a1, 0x288($s0)
    ctx->pc = 0x1cbe14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
label_1cbe18:
    // 0x1cbe18: 0xc072fb6  jal         func_1CBED8
label_1cbe1c:
    if (ctx->pc == 0x1CBE1Cu) {
        ctx->pc = 0x1CBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE18u;
        // 0x1cbe1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE20u;
        goto label_1cbe20;
    }
    ctx->pc = 0x1CBE18u;
    SET_GPR_U32(ctx, 31, 0x1CBE20u);
    ctx->pc = 0x1CBE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE18u;
    // 0x1cbe1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CBED8u, 0x1CBE18u, 0x1CBE20u)) {
        return;
    }
    ctx->pc = 0x1CBE20u;
label_1cbe20:
    // 0x1cbe20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1cbe24:
    if (ctx->pc == 0x1CBE24u) {
        ctx->pc = 0x1CBE28u;
        goto label_1cbe28;
    }
    ctx->pc = 0x1CBE20u;
    {
        const bool branch_taken_0x1cbe20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe20) {
            ctx->pc = 0x1CBE40u;
            goto label_1cbe40;
        }
    }
    ctx->pc = 0x1CBE28u;
label_1cbe28:
    // 0x1cbe28: 0x8e050288  lw          $a1, 0x288($s0)
    ctx->pc = 0x1cbe28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
label_1cbe2c:
    // 0x1cbe2c: 0xc073020  jal         func_1CC080
label_1cbe30:
    if (ctx->pc == 0x1CBE30u) {
        ctx->pc = 0x1CBE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE2Cu;
        // 0x1cbe30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE34u;
        goto label_1cbe34;
    }
    ctx->pc = 0x1CBE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CBE34u);
    ctx->pc = 0x1CBE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE2Cu;
    // 0x1cbe30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC080u, 0x1CBE2Cu, 0x1CBE34u)) {
        return;
    }
    ctx->pc = 0x1CBE34u;
label_1cbe34:
    // 0x1cbe34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbe38:
    // 0x1cbe38: 0x10000017  b           . + 4 + (0x17 << 2)
label_1cbe3c:
    if (ctx->pc == 0x1CBE3Cu) {
        ctx->pc = 0x1CBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE38u;
        // 0x1cbe3c: 0xae020270  sw          $v0, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE40u;
        goto label_1cbe40;
    }
    ctx->pc = 0x1CBE38u;
    {
        const bool branch_taken_0x1cbe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE38u;
        // 0x1cbe3c: 0xae020270  sw          $v0, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe38) {
            ctx->pc = 0x1CBE98u;
            goto label_1cbe98;
        }
    }
    ctx->pc = 0x1CBE40u;
label_1cbe40:
    // 0x1cbe40: 0xc0731dc  jal         func_1CC770
label_1cbe44:
    if (ctx->pc == 0x1CBE44u) {
        ctx->pc = 0x1CBE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE40u;
        // 0x1cbe44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE48u;
        goto label_1cbe48;
    }
    ctx->pc = 0x1CBE40u;
    SET_GPR_U32(ctx, 31, 0x1CBE48u);
    ctx->pc = 0x1CBE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE40u;
    // 0x1cbe44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC770u, 0x1CBE40u, 0x1CBE48u)) {
        return;
    }
    ctx->pc = 0x1CBE48u;
label_1cbe48:
    // 0x1cbe48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1cbe4c:
    if (ctx->pc == 0x1CBE4Cu) {
        ctx->pc = 0x1CBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE48u;
        // 0x1cbe4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE50u;
        goto label_1cbe50;
    }
    ctx->pc = 0x1CBE48u;
    {
        const bool branch_taken_0x1cbe48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE48u;
        // 0x1cbe4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe48) {
            ctx->pc = 0x1CBE7Cu;
            goto label_1cbe7c;
        }
    }
    ctx->pc = 0x1CBE50u;
label_1cbe50:
    // 0x1cbe50: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cbe50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cbe54:
    // 0x1cbe54: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cbe58:
    // 0x1cbe58: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cbe58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cbe5c:
    // 0x1cbe5c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cbe60:
    // 0x1cbe60: 0x60f809  jalr        $v1
label_1cbe64:
    if (ctx->pc == 0x1CBE64u) {
        ctx->pc = 0x1CBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE60u;
        // 0x1cbe64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE68u;
        goto label_1cbe68;
    }
    ctx->pc = 0x1CBE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CBE68u);
        ctx->pc = 0x1CBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE60u;
        // 0x1cbe64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBE60u, 0x1CBE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBE68u;
label_1cbe68:
    // 0x1cbe68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbe6c:
    // 0x1cbe6c: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1cbe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
label_1cbe70:
    // 0x1cbe70: 0xae0202a4  sw          $v0, 0x2A4($s0)
    ctx->pc = 0x1cbe70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
label_1cbe74:
    // 0x1cbe74: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cbe78:
    if (ctx->pc == 0x1CBE78u) {
        ctx->pc = 0x1CBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE74u;
        // 0x1cbe78: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE7Cu;
        goto label_1cbe7c;
    }
    ctx->pc = 0x1CBE74u;
    {
        const bool branch_taken_0x1cbe74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE74u;
        // 0x1cbe78: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe74) {
            ctx->pc = 0x1CBE98u;
            goto label_1cbe98;
        }
    }
    ctx->pc = 0x1CBE7Cu;
label_1cbe7c:
    // 0x1cbe7c: 0x8e060264  lw          $a2, 0x264($s0)
    ctx->pc = 0x1cbe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1cbe80:
    // 0x1cbe80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cbe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cbe84:
    // 0x1cbe84: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cbe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cbe88:
    // 0x1cbe88: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cbe88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cbe8c:
    // 0x1cbe8c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cbe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cbe90:
    // 0x1cbe90: 0x60f809  jalr        $v1
label_1cbe94:
    if (ctx->pc == 0x1CBE94u) {
        ctx->pc = 0x1CBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE90u;
        // 0x1cbe94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE98u;
        goto label_1cbe98;
    }
    ctx->pc = 0x1CBE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CBE98u);
        ctx->pc = 0x1CBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE90u;
        // 0x1cbe94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBE90u, 0x1CBE98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBE98u;
label_1cbe98:
    // 0x1cbe98: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cbe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1cbe9c:
    // 0x1cbe9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1cbea0:
    if (ctx->pc == 0x1CBEA0u) {
        ctx->pc = 0x1CBEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE9Cu;
        // 0x1cbea0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEA4u;
        goto label_1cbea4;
    }
    ctx->pc = 0x1CBE9Cu;
    {
        const bool branch_taken_0x1cbe9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE9Cu;
        // 0x1cbea0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe9c) {
            ctx->pc = 0x1CBEACu;
            goto label_1cbeac;
        }
    }
    ctx->pc = 0x1CBEA4u;
label_1cbea4:
    // 0x1cbea4: 0xc06dbc8  jal         func_1B6F20
label_1cbea8:
    if (ctx->pc == 0x1CBEA8u) {
        ctx->pc = 0x1CBEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEA4u;
        // 0x1cbea8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEACu;
        goto label_1cbeac;
    }
    ctx->pc = 0x1CBEA4u;
    SET_GPR_U32(ctx, 31, 0x1CBEACu);
    ctx->pc = 0x1CBEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBEA4u;
    // 0x1cbea8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6F20u, 0x1CBEA4u, 0x1CBEACu)) {
        return;
    }
    ctx->pc = 0x1CBEACu;
label_1cbeac:
    // 0x1cbeac: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1cbeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cbeb0:
    // 0x1cbeb0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1cbeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cbeb4:
    // 0x1cbeb4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1cbeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cbeb8:
    // 0x1cbeb8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1cbeb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cbebc:
    // 0x1cbebc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1cbebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cbec0:
    // 0x1cbec0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1cbec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cbec4:
    // 0x1cbec4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cbec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cbec8:
    // 0x1cbec8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1cbec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cbecc:
    // 0x1cbecc: 0x3e00008  jr          $ra
label_1cbed0:
    if (ctx->pc == 0x1CBED0u) {
        ctx->pc = 0x1CBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBECCu;
        // 0x1cbed0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBED4u;
        goto label_1cbed4;
    }
    ctx->pc = 0x1CBECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBECCu;
        // 0x1cbed0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBED4u;
label_1cbed4:
    // 0x1cbed4: 0x0  nop
    ctx->pc = 0x1cbed4u;
    // NOP
    ctx->pc = 0x1cbed8u;
}
