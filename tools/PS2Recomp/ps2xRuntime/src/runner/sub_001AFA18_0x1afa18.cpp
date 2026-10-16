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

// Function: sub_001AFA18
// Address: 0x1afa18 - 0x1afb78
void sub_001AFA18_0x1afa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFA18_0x1afa18");
#endif

    switch (ctx->pc) {
        case 0x1afa18u: goto label_1afa18;
        case 0x1afa1cu: goto label_1afa1c;
        case 0x1afa20u: goto label_1afa20;
        case 0x1afa24u: goto label_1afa24;
        case 0x1afa28u: goto label_1afa28;
        case 0x1afa2cu: goto label_1afa2c;
        case 0x1afa30u: goto label_1afa30;
        case 0x1afa34u: goto label_1afa34;
        case 0x1afa38u: goto label_1afa38;
        case 0x1afa3cu: goto label_1afa3c;
        case 0x1afa40u: goto label_1afa40;
        case 0x1afa44u: goto label_1afa44;
        case 0x1afa48u: goto label_1afa48;
        case 0x1afa4cu: goto label_1afa4c;
        case 0x1afa50u: goto label_1afa50;
        case 0x1afa54u: goto label_1afa54;
        case 0x1afa58u: goto label_1afa58;
        case 0x1afa5cu: goto label_1afa5c;
        case 0x1afa60u: goto label_1afa60;
        case 0x1afa64u: goto label_1afa64;
        case 0x1afa68u: goto label_1afa68;
        case 0x1afa6cu: goto label_1afa6c;
        case 0x1afa70u: goto label_1afa70;
        case 0x1afa74u: goto label_1afa74;
        case 0x1afa78u: goto label_1afa78;
        case 0x1afa7cu: goto label_1afa7c;
        case 0x1afa80u: goto label_1afa80;
        case 0x1afa84u: goto label_1afa84;
        case 0x1afa88u: goto label_1afa88;
        case 0x1afa8cu: goto label_1afa8c;
        case 0x1afa90u: goto label_1afa90;
        case 0x1afa94u: goto label_1afa94;
        case 0x1afa98u: goto label_1afa98;
        case 0x1afa9cu: goto label_1afa9c;
        case 0x1afaa0u: goto label_1afaa0;
        case 0x1afaa4u: goto label_1afaa4;
        case 0x1afaa8u: goto label_1afaa8;
        case 0x1afaacu: goto label_1afaac;
        case 0x1afab0u: goto label_1afab0;
        case 0x1afab4u: goto label_1afab4;
        case 0x1afab8u: goto label_1afab8;
        case 0x1afabcu: goto label_1afabc;
        case 0x1afac0u: goto label_1afac0;
        case 0x1afac4u: goto label_1afac4;
        case 0x1afac8u: goto label_1afac8;
        case 0x1afaccu: goto label_1afacc;
        case 0x1afad0u: goto label_1afad0;
        case 0x1afad4u: goto label_1afad4;
        case 0x1afad8u: goto label_1afad8;
        case 0x1afadcu: goto label_1afadc;
        case 0x1afae0u: goto label_1afae0;
        case 0x1afae4u: goto label_1afae4;
        case 0x1afae8u: goto label_1afae8;
        case 0x1afaecu: goto label_1afaec;
        case 0x1afaf0u: goto label_1afaf0;
        case 0x1afaf4u: goto label_1afaf4;
        case 0x1afaf8u: goto label_1afaf8;
        case 0x1afafcu: goto label_1afafc;
        case 0x1afb00u: goto label_1afb00;
        case 0x1afb04u: goto label_1afb04;
        case 0x1afb08u: goto label_1afb08;
        case 0x1afb0cu: goto label_1afb0c;
        case 0x1afb10u: goto label_1afb10;
        case 0x1afb14u: goto label_1afb14;
        case 0x1afb18u: goto label_1afb18;
        case 0x1afb1cu: goto label_1afb1c;
        case 0x1afb20u: goto label_1afb20;
        case 0x1afb24u: goto label_1afb24;
        case 0x1afb28u: goto label_1afb28;
        case 0x1afb2cu: goto label_1afb2c;
        case 0x1afb30u: goto label_1afb30;
        case 0x1afb34u: goto label_1afb34;
        case 0x1afb38u: goto label_1afb38;
        case 0x1afb3cu: goto label_1afb3c;
        case 0x1afb40u: goto label_1afb40;
        case 0x1afb44u: goto label_1afb44;
        case 0x1afb48u: goto label_1afb48;
        case 0x1afb4cu: goto label_1afb4c;
        case 0x1afb50u: goto label_1afb50;
        case 0x1afb54u: goto label_1afb54;
        case 0x1afb58u: goto label_1afb58;
        case 0x1afb5cu: goto label_1afb5c;
        case 0x1afb60u: goto label_1afb60;
        case 0x1afb64u: goto label_1afb64;
        case 0x1afb68u: goto label_1afb68;
        case 0x1afb6cu: goto label_1afb6c;
        case 0x1afb70u: goto label_1afb70;
        case 0x1afb74u: goto label_1afb74;
        default: break;
    }

    ctx->pc = 0x1afa18u;

label_1afa18:
    // 0x1afa18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1afa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1afa1c:
    // 0x1afa1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1afa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1afa20:
    // 0x1afa20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1afa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afa24:
    // 0x1afa24: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1afa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1afa28:
    // 0x1afa28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1afa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1afa2c:
    // 0x1afa2c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1afa2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1afa30:
    // 0x1afa30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1afa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1afa34:
    // 0x1afa34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1afa34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1afa38:
    // 0x1afa38: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1afa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_1afa3c:
    // 0x1afa3c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1afa3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1afa40:
    // 0x1afa40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1afa40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1afa44:
    // 0x1afa44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1afa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1afa48:
    // 0x1afa48: 0xc075d62  jal         func_1D7588
label_1afa4c:
    if (ctx->pc == 0x1AFA4Cu) {
        ctx->pc = 0x1AFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA48u;
        // 0x1afa4c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA50u;
        goto label_1afa50;
    }
    ctx->pc = 0x1AFA48u;
    SET_GPR_U32(ctx, 31, 0x1AFA50u);
    ctx->pc = 0x1AFA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA48u;
    // 0x1afa4c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7588u, 0x1AFA48u, 0x1AFA50u)) {
        return;
    }
    ctx->pc = 0x1AFA50u;
label_1afa50:
    // 0x1afa50: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_1afa54:
    if (ctx->pc == 0x1AFA54u) {
        ctx->pc = 0x1AFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA50u;
        // 0x1afa54: 0x8e250158  lw          $a1, 0x158($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA58u;
        goto label_1afa58;
    }
    ctx->pc = 0x1AFA50u;
    {
        const bool branch_taken_0x1afa50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afa50) {
            ctx->pc = 0x1AFA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFA50u;
            // 0x1afa54: 0x8e250158  lw          $a1, 0x158($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFAC8u;
            goto label_1afac8;
        }
    }
    ctx->pc = 0x1AFA58u;
label_1afa58:
    // 0x1afa58: 0xc075d7e  jal         func_1D75F8
label_1afa5c:
    if (ctx->pc == 0x1AFA5Cu) {
        ctx->pc = 0x1AFA60u;
        goto label_1afa60;
    }
    ctx->pc = 0x1AFA58u;
    SET_GPR_U32(ctx, 31, 0x1AFA60u);
    ctx->pc = 0x1D75F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75F8u, 0x1AFA58u, 0x1AFA60u)) {
        return;
    }
    ctx->pc = 0x1AFA60u;
label_1afa60:
    // 0x1afa60: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1afa60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_1afa64:
    // 0x1afa64: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1afa68:
    // 0x1afa68: 0x8c64bcc8  lw          $a0, -0x4338($v1)
    ctx->pc = 0x1afa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950088)));
label_1afa6c:
    // 0x1afa6c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1afa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_1afa70:
    // 0x1afa70: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1afa74:
    if (ctx->pc == 0x1AFA74u) {
        ctx->pc = 0x1AFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA70u;
        // 0x1afa74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA78u;
        goto label_1afa78;
    }
    ctx->pc = 0x1AFA70u;
    {
        const bool branch_taken_0x1afa70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA70u;
        // 0x1afa74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa70) {
            ctx->pc = 0x1AFA94u;
            goto label_1afa94;
        }
    }
    ctx->pc = 0x1AFA78u;
label_1afa78:
    // 0x1afa78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1afa7c:
    // 0x1afa7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1afa80:
    if (ctx->pc == 0x1AFA80u) {
        ctx->pc = 0x1AFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA7Cu;
        // 0x1afa80: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA84u;
        goto label_1afa84;
    }
    ctx->pc = 0x1AFA7Cu;
    {
        const bool branch_taken_0x1afa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA7Cu;
        // 0x1afa80: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa7c) {
            ctx->pc = 0x1AFA98u;
            goto label_1afa98;
        }
    }
    ctx->pc = 0x1AFA84u;
label_1afa84:
    // 0x1afa84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1afa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1afa88:
    // 0x1afa88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1afa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1afa8c:
    // 0x1afa8c: 0xc07fd18  jal         func_1FF460
label_1afa90:
    if (ctx->pc == 0x1AFA90u) {
        ctx->pc = 0x1AFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA8Cu;
        // 0x1afa90: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFA94u;
        goto label_1afa94;
    }
    ctx->pc = 0x1AFA8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFA94u);
    ctx->pc = 0x1AFA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA8Cu;
    // 0x1afa90: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1AFA8Cu, 0x1AFA94u)) {
        return;
    }
    ctx->pc = 0x1AFA94u;
label_1afa94:
    // 0x1afa94: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1afa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1afa98:
    // 0x1afa98: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1afa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
label_1afa9c:
    // 0x1afa9c: 0x8c444338  lw          $a0, 0x4338($v0)
    ctx->pc = 0x1afa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17208)));
label_1afaa0:
    // 0x1afaa0: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_1afaa4:
    if (ctx->pc == 0x1AFAA4u) {
        ctx->pc = 0x1AFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAA0u;
        // 0x1afaa4: 0x8e250158  lw          $a1, 0x158($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAA8u;
        goto label_1afaa8;
    }
    ctx->pc = 0x1AFAA0u;
    {
        const bool branch_taken_0x1afaa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1afaa0) {
            ctx->pc = 0x1AFAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFAA0u;
            // 0x1afaa4: 0x8e250158  lw          $a1, 0x158($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFAC8u;
            goto label_1afac8;
        }
    }
    ctx->pc = 0x1AFAA8u;
label_1afaa8:
    // 0x1afaa8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1afaac:
    // 0x1afaac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1afab0:
    if (ctx->pc == 0x1AFAB0u) {
        ctx->pc = 0x1AFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAACu;
        // 0x1afab0: 0x8e250158  lw          $a1, 0x158($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAB4u;
        goto label_1afab4;
    }
    ctx->pc = 0x1AFAACu;
    {
        const bool branch_taken_0x1afaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afaac) {
            ctx->pc = 0x1AFAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFAACu;
            // 0x1afab0: 0x8e250158  lw          $a1, 0x158($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFAC8u;
            goto label_1afac8;
        }
    }
    ctx->pc = 0x1AFAB4u;
label_1afab4:
    // 0x1afab4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1afab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1afab8:
    // 0x1afab8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1afab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1afabc:
    // 0x1afabc: 0xc07fd18  jal         func_1FF460
label_1afac0:
    if (ctx->pc == 0x1AFAC0u) {
        ctx->pc = 0x1AFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFABCu;
        // 0x1afac0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAC4u;
        goto label_1afac4;
    }
    ctx->pc = 0x1AFABCu;
    SET_GPR_U32(ctx, 31, 0x1AFAC4u);
    ctx->pc = 0x1AFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFABCu;
    // 0x1afac0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1AFABCu, 0x1AFAC4u)) {
        return;
    }
    ctx->pc = 0x1AFAC4u;
label_1afac4:
    // 0x1afac4: 0x8e250158  lw          $a1, 0x158($s1)
    ctx->pc = 0x1afac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_1afac8:
    // 0x1afac8: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_1afacc:
    if (ctx->pc == 0x1AFACCu) {
        ctx->pc = 0x1AFAD0u;
        goto label_1afad0;
    }
    ctx->pc = 0x1AFAC8u;
    {
        const bool branch_taken_0x1afac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afac8) {
            ctx->pc = 0x1AFB10u;
            goto label_1afb10;
        }
    }
    ctx->pc = 0x1AFAD0u;
label_1afad0:
    // 0x1afad0: 0x8ca20258  lw          $v0, 0x258($a1)
    ctx->pc = 0x1afad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
label_1afad4:
    // 0x1afad4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1afad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1afad8:
    // 0x1afad8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1afad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1afadc:
    // 0x1afadc: 0x60f809  jalr        $v1
label_1afae0:
    if (ctx->pc == 0x1AFAE0u) {
        ctx->pc = 0x1AFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFADCu;
        // 0x1afae0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAE4u;
        goto label_1afae4;
    }
    ctx->pc = 0x1AFADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFAE4u);
        ctx->pc = 0x1AFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFADCu;
        // 0x1afae0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFADCu, 0x1AFAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFAE4u;
label_1afae4:
    // 0x1afae4: 0xc06bc90  jal         func_1AF240
label_1afae8:
    if (ctx->pc == 0x1AFAE8u) {
        ctx->pc = 0x1AFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAE4u;
        // 0x1afae8: 0x8e240158  lw          $a0, 0x158($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAECu;
        goto label_1afaec;
    }
    ctx->pc = 0x1AFAE4u;
    SET_GPR_U32(ctx, 31, 0x1AFAECu);
    ctx->pc = 0x1AFAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFAE4u;
    // 0x1afae8: 0x8e240158  lw          $a0, 0x158($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF240u, 0x1AFAE4u, 0x1AFAECu)) {
        return;
    }
    ctx->pc = 0x1AFAECu;
label_1afaec:
    // 0x1afaec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1afaecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1afaf0:
    // 0x1afaf0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1afaf4:
    if (ctx->pc == 0x1AFAF4u) {
        ctx->pc = 0x1AFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAF0u;
        // 0x1afaf4: 0xae260154  sw          $a2, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFAF8u;
        goto label_1afaf8;
    }
    ctx->pc = 0x1AFAF0u;
    {
        const bool branch_taken_0x1afaf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAF0u;
        // 0x1afaf4: 0xae260154  sw          $a2, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afaf0) {
            ctx->pc = 0x1AFB10u;
            goto label_1afb10;
        }
    }
    ctx->pc = 0x1AFAF8u;
label_1afaf8:
    // 0x1afaf8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1afaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1afafc:
    // 0x1afafc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afb00:
    // 0x1afb00: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1afb00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1afb04:
    // 0x1afb04: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1afb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1afb08:
    // 0x1afb08: 0x60f809  jalr        $v1
label_1afb0c:
    if (ctx->pc == 0x1AFB0Cu) {
        ctx->pc = 0x1AFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB08u;
        // 0x1afb0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB10u;
        goto label_1afb10;
    }
    ctx->pc = 0x1AFB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AFB10u);
        ctx->pc = 0x1AFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB08u;
        // 0x1afb0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFB08u, 0x1AFB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AFB10u;
label_1afb10:
    // 0x1afb10: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
label_1afb14:
    if (ctx->pc == 0x1AFB14u) {
        ctx->pc = 0x1AFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB10u;
        // 0x1afb14: 0x8e230150  lw          $v1, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB18u;
        goto label_1afb18;
    }
    ctx->pc = 0x1AFB10u;
    {
        const bool branch_taken_0x1afb10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afb10) {
            ctx->pc = 0x1AFB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFB10u;
            // 0x1afb14: 0x8e230150  lw          $v1, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFB24u;
            goto label_1afb24;
        }
    }
    ctx->pc = 0x1AFB18u;
label_1afb18:
    // 0x1afb18: 0xc06c8e8  jal         func_1B23A0
label_1afb1c:
    if (ctx->pc == 0x1AFB1Cu) {
        ctx->pc = 0x1AFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB18u;
        // 0x1afb1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB20u;
        goto label_1afb20;
    }
    ctx->pc = 0x1AFB18u;
    SET_GPR_U32(ctx, 31, 0x1AFB20u);
    ctx->pc = 0x1AFB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB18u;
    // 0x1afb1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B23A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B23A0u, 0x1AFB18u, 0x1AFB20u)) {
        return;
    }
    ctx->pc = 0x1AFB20u;
label_1afb20:
    // 0x1afb20: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x1afb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1afb24:
    // 0x1afb24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afb28:
    // 0x1afb28: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1afb2c:
    if (ctx->pc == 0x1AFB2Cu) {
        ctx->pc = 0x1AFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB28u;
        // 0x1afb2c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB30u;
        goto label_1afb30;
    }
    ctx->pc = 0x1AFB28u;
    {
        const bool branch_taken_0x1afb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB28u;
        // 0x1afb2c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb28) {
            ctx->pc = 0x1AFB64u;
            goto label_1afb64;
        }
    }
    ctx->pc = 0x1AFB30u;
label_1afb30:
    // 0x1afb30: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1afb30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_1afb34:
    // 0x1afb34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1afb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1afb38:
    // 0x1afb38: 0x24a54710  addiu       $a1, $a1, 0x4710
    ctx->pc = 0x1afb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18192));
label_1afb3c:
    // 0x1afb3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1afb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afb40:
    // 0x1afb40: 0xc07fc98  jal         func_1FF260
label_1afb44:
    if (ctx->pc == 0x1AFB44u) {
        ctx->pc = 0x1AFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB40u;
        // 0x1afb44: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB48u;
        goto label_1afb48;
    }
    ctx->pc = 0x1AFB40u;
    SET_GPR_U32(ctx, 31, 0x1AFB48u);
    ctx->pc = 0x1AFB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB40u;
    // 0x1afb44: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1AFB40u, 0x1AFB48u)) {
        return;
    }
    ctx->pc = 0x1AFB48u;
label_1afb48:
    // 0x1afb48: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1afb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_1afb4c:
    // 0x1afb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1afb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1afb50:
    // 0x1afb50: 0x24a54718  addiu       $a1, $a1, 0x4718
    ctx->pc = 0x1afb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18200));
label_1afb54:
    // 0x1afb54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1afb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afb58:
    // 0x1afb58: 0xc07fc98  jal         func_1FF260
label_1afb5c:
    if (ctx->pc == 0x1AFB5Cu) {
        ctx->pc = 0x1AFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB58u;
        // 0x1afb5c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB60u;
        goto label_1afb60;
    }
    ctx->pc = 0x1AFB58u;
    SET_GPR_U32(ctx, 31, 0x1AFB60u);
    ctx->pc = 0x1AFB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB58u;
    // 0x1afb5c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1AFB58u, 0x1AFB60u)) {
        return;
    }
    ctx->pc = 0x1AFB60u;
label_1afb60:
    // 0x1afb60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1afb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1afb64:
    // 0x1afb64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1afb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1afb68:
    // 0x1afb68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1afb68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1afb6c:
    // 0x1afb6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1afb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1afb70:
    // 0x1afb70: 0x3e00008  jr          $ra
label_1afb74:
    if (ctx->pc == 0x1AFB74u) {
        ctx->pc = 0x1AFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB70u;
        // 0x1afb74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AFB78u;
        goto label_fallthrough_0x1afb70;
    }
    ctx->pc = 0x1AFB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB70u;
        // 0x1afb74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1afb70:
    ctx->pc = 0x1AFB78u;
}
